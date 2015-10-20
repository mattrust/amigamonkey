
Class MyThrowable Extends Throwable

	Field msg:String
	
	Method New( msg:String )
		Self.msg=msg
	End
End

Function Test:Void()
	Throw New MyThrowable( "Thrown!" )
End

Function Main()
	Try
		Test
	Catch t:MyThrowable
		Print "MyThrowable thrown: msg="+t.msg
	End
End
