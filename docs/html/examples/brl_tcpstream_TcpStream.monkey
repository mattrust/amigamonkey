
#If TARGET<>"glfw" And TARGET<>"android" And TARGET<>"ios" And TARGET<>"stdcpp"
#Error "Invalid target!"
#Endif

Import brl.tcpstream

Function Main()

	Local stream:=New TcpStream
	
	If Not stream.Connect( "www.monkeycoder.co.nz",80 )
		Print "Failed to connect!"
		Return
	Endif
	
	Print "Connected!"
	
	stream.WriteLine "GET / HTTP/1.0"
	stream.WriteLine "Host: www.monkeycoder.co.nz"
	stream.WriteLine ""
	
	While Not stream.Eof()
		Local line:=stream.ReadLine()
		Print line
	Wend
	
	stream.Close
	
	Print "BYE!!!!"

End
