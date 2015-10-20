
Import mojo

Class MyApp Extends App

	Field lineY
			
	Method OnCreate()
		lineY=DeviceHeight()/2
		SetUpdateRate 30
	End
	
	Method OnUpdate()

		Local hit=KeyHit( KEY_LMB )	'Uses KeyHit to check the left mouse button.  You could also use MouseHit( MOUSE_LEFT )
		
		If hit And MouseY()<lineY
			Print "You clicked above the line."
		Else If hit And MouseY()>=lineY
			Print "You clicked on or below the line."
		End
	End
	
	Method OnRender()
		Cls
		DrawLine 0,lineY,DeviceWidth(),lineY
	End
End

Function Main()
	New MyApp
End
