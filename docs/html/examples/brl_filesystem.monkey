
#If TARGET<>"android" And TARGET<>"ios" And TARGET<>"winrt" And TARGET<>"glfw"
#Error "Invalid target"
#Endif

Import mojo

Import brl.FileSystem

Class MyApp Extends App

	Method OnCreate()
	
		DeleteDir  "monkey://internal/dir1",True
		DeleteDir  "monkey://internal/dir2",True
		DeleteDir  "monkey://internal/dir3",True
		
		CreateDir  "monkey://internal/dir1"
		CreateFile "monkey://internal/dir1/file1"
		CreateFile "monkey://internal/dir1/file2"
		CreateDir  "monkey://internal/dir1/dir2"
		CreateFile "monkey://internal/dir1/dir2/file5"
		
		CreateDir  "monkey://internal/dir2"
		CreateFile "monkey://internal/dir2/file3"
		CreateFile "monkey://internal/dir2/file4"
		
		CopyDir    "monkey://internal/dir1","monkey://internal/dir3",True
		DeleteFile "monkey://internal/dir1/file1"
		DeleteFile "monkey://internal/dir3/dir2/file5"
		
		SetUpdateRate 60
	End
	
	Method OnUpdate()
	End
	
	Method OnRender()
		Scale 2,2
		Cls
		Local y:=0
		For Local f:=Eachin LoadDir( "monkey://internal/",True )
			Local p:="monkey://internal/"+f
			Local nm:=(f+"                    ")[..20]
			Local ty:=""
			If FileType( p )=FILETYPE_FILE
				ty=FileSize( p )
			Else
				ty="(dir)"
			Endif
			DrawText nm+ty,0,y
			y+=12
		Next
	End
End

Function Main()

	New MyApp
	
End
