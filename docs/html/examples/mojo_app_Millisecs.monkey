
Import mojo.app
Import mojo.graphics

Class MyApp Extends App

	Method OnCreate()
		SetUpdateRate 10
	End
	
	Method OnRender()
		Cls 128,0,255
		DrawText "Application has been running for: "+Millisecs()/1000.0+" seconds.",0,0
	End
	
End

Function Main()
	New MyApp
End
