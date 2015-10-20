
Function Main()

	Local stk:=New StringStack
	
	stk.Push "Hello"
	stk.Push "there"
	stk.Push "this"
	stk.Push "is"
	stk.Push "a"
	stk.Push "test"
	
	Print "Fowards:"
	For Local t$=EachIn stk
		Print t
	Next
	
	Print ""
	
	Print "Backwards:"
	For Local t$=Eachin stk.Backwards()
		Print t
	Next

End
