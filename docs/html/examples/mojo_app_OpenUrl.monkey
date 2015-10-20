
Import mojo

Class MyApp Extends App

	Method OnCreate()
	
		SetUpdateRate 60

	End
	
	Method OnUpdate()
	
		If MouseHit(0)
			If MouseY()\<DeviceHeight/2
				OpenUrl "http://www.monkeycoder.co.nz"
			Else
				OpenUrl "mailto:blitzmunter@gmail.com"
			Endif
		Endif
	End
	
	Method OnRender()
	
		Cls
		DrawText "Click above to visit Monkeycoder, below to email Mark!",DeviceWidth/2,DeviceHeight/2,.5,.5
	End
	

End

Function Main()

	New MyApp

End
