
Import mojo

Class MyApp Extends App

	Field touching
	
	Method OnCreate()
		SetUpdateRate 30
	End
	
	Method OnUpdate()
		touching=0
		For Local i=0 Until 32
			If TouchDown( i ) touching+=1
		Next
	End
	
	Method OnRender()
		Cls
		DrawText touching,0,0
	End
End

Function Main()
	New MyApp
End
