
Import mojo

Class MyApp Extends App

	Field text$="Type something:"

	Method OnCreate()
		SetUpdateRate 30
	End
	
	Method OnUpdate()
		Repeat
			Local char=GetChar()
			If Not char Exit
			If char>=32
				text+=String.FromChar( char )
			Endif
		Forever
	End
	
	Method OnRender()
		Cls
		DrawText text,0,0
	End
End

Function Main()
	New MyApp
End
