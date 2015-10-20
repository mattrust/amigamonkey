#If TARGET<>"android" And TARGET<>"ios"
#Error "Admob is only supported on Android and iOS targets"
#End

#ADMOB_PUBLISHER_ID="ca-app-pub-XXXXXXXXXXXXXXXX/YYYYYYYYYY"	'from your admob account
#ADMOB_ANDROID_TEST_DEVICE1="F477AABF905E5DB901B57E1F9DDFA037"	'My Nexus 7!
#ADMOB_ANDROID_TEST_DEVICE2="TEST_EMULATOR"

Import mojo
Import brl.admob

Class MyApp Extends App

	Field admob:Admob
	Field layout:=1
	Field enabled:=True
	
	Method OnCreate()
		admob=Admob.GetAdmob()
		admob.ShowAdView 1,layout
		SetUpdateRate 60
	End
	
	Method OnUpdate()
		If MouseHit( 0 )
			If enabled
				admob.HideAdView
				enabled=False
			Else
				layout+=1
				If layout=7 layout=1
				admob.ShowAdView 1,layout
				enabled=True
			Endif
		End
	End
	
	Method OnRender()
		Cls
		DrawText "Click to toggle ads!",DeviceWidth/2,DeviceHeight/2,.5,.5
	End
	
End

Function Main()
	New MyApp
End