
Import mojo.app
Import mojo.graphics

Class MyApp Extends App

	Field updates,updateRate

	Method OnCreate()
		updateRate=15
		SetUpdateRate updateRate
	End
	
	Method OnUpdate()
		updates+=1
		If updates=updateRate
			updates=0
			updateRate*=2
			If updateRate=240 updateRate=15
			SetUpdateRate updateRate
		Endif
		
	End
	
	Method OnRender()
		Cls 128,0,255
		DrawText "updateRate="+updateRate+", updates="+updates,0,0
	End
	
End

Function Main()
	New MyApp
End
