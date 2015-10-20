
Import brl.pool

Class Actor

	Function Create:Actor( x:Float,y:Float )
		Return _pool.Allocate().Init( x,y )
	End
	
	Method Destroy:Void()
		_pool.Free( Self )
	End
	
	Method IsDead:Bool()
		Return _t=0		'timeout?
	End
	
	Method Update:Void()
		If _t>0 _t-=1	'update timeout
	End
	
	Private
	
	Field _x:Float
	Field _y:Float
	Field _t:Int
	
	Global _pool:=New Pool<Actor>( 1000 )
	
	Method Init:Actor( x:Float,y:Float )
		_x=x
		_y=y
		_t=Rnd(20,100)	'random timeout
		Return Self
	End
	
End

Function UpdateActors:Void( actors:Stack<Actor> )

	'Update all actors
	For Local i:=0 Until actors.Length
		actors.Get(i).Update()
	Next
	
	'Flush dead actors, compacting stack as we go...
	Local alive:=0
	For Local i:=0 Until actors.Length
		Local actor:=actors.Get( i )
		
		If actor.IsDead() 
			Print "Dead!"
			actor.Destroy()
			Continue
		Endif
		
		actors.Set alive,actor
		alive+=1
	End
	
	actors.Length=alive		'v70 only...

End

Function Main()

	Local actors:=New Stack<Actor>
	
	For Local i:=0 Until 100
		actors.Push Actor.Create( Rnd(100),Rnd(100) )
	End
	
	While actors.Length
		UpdateActors actors
	Wend
	
	Print "Done!"

End
