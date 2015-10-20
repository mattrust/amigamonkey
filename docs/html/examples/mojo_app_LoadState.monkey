
'run this app several times to see application state being updated.
Import mojo.app
Import mojo.graphics

Class MyApp Extends App

	Field state$
	
	Method OnCreate()
	
		'comment out the following line to reset state
		state=LoadState()

		If state
			Print "state found - updating state!"
			state=Int( state )+1
		Else
			Print "state not found - creating initial state!"
			state="1"
		Endif
		
		SaveState state
	End
	
	Method OnRender()
		Cls 
		DrawText "state="+state,0,0
	End
	
End

Function Main()
	New MyApp
End
