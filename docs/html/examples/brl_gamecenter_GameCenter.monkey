
#If TARGET<>"ios"
#Error "GameCenter is only available on iOS"
#End

Import mojo
Import brl.gamecenter

Class MyApp Extends App

	Field gamectr:GameCenter

	Field coins_collected:=0
	Const coins_total=25

	Method OnCreate()
		gamectr=GameCenter.GetGameCenter()
		gamectr.StartGameCenter
		SetUpdateRate 60
	End
	
	Method OnUpdate()
		Select gamectr.GameCenterState()
		Case 2
			If MouseHit(0)
				If Abs( MouseY-DeviceHeight/4 )<16
					gamectr.ShowLeaderboard "HIGH_SCORES"			'use the Leaderboard ID you specified in iTunes connect here...
				Else If Abs( MouseY-DeviceHeight/2 )<16
					gamectr.ShowAchievements
				Else If Abs( MouseY-DeviceHeight*3/4 )<16
				
					random.Seed=Millisecs
					gamectr.ReportScore Rnd(1000,2000),"HIGH_SCORES"
					
					coins_collected+=1
					gamectr.ReportAchievement coins_collected*100/coins_total,"COLLECT_ALL_COINS"	'use the Achievement ID you specified in iTunes connect here...
					
				Endif
			Endif
		End
	End
	
	Method OnRender()
		Cls
		DrawText "Game Center state="+gamectr.GameCenterState(),DeviceWidth/2,0,.5,0
		If gamectr.GameCenterState()<>2 SetColor 128,0,0
		DrawText "Click here to show Leaderboard",DeviceWidth/2,DeviceHeight/4,.5,.5
		DrawText "Click here to show Achievements",DeviceWidth/2,DeviceHeight/2,.5,.5
		DrawText "Click here to report Score+Achievement",DeviceWidth/2,DeviceHeight*3/4,.5,.5
	End
	
End


Function Main()
	New MyApp
End
