Import mojo

Import brl.requesters

Class MyApp Extends App

	Method OnCreate()
		Local filter:="Image Files:png,jpg,bmp;Text Files:txt;All Files:*"
		Local file:=RequestFile( "Select graphic file to open",filter )
		If file Notify "Image file selected",file
	End
			
End

Function Main()

	New MyApp

End