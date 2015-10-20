
Function Main()

	Local list:=New StringList
	
	list.AddLast "Hello"
	list.AddLast "there"
	list.AddLast "this"
	list.AddLast "is"
	list.AddLast "a"
	list.AddLast "test"
	
	Print "Fowards:"
	For Local t$=EachIn list
		Print t
	Next
	
	Print ""
	
	Print "Backwards:"
	For Local t$=Eachin list.Backwards()
		Print t
	Next

End
