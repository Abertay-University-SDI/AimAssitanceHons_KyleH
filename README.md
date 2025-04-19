The Main code of the project are in the following files:

C++:
AimAssistHonsCharacter.h - AimAssistHonsCharacter.cpp
Target.h - Target.cpp

Blueprints:
FirstPersonMap - LevelBlueprint
BP_FirstPersonCharacter

Widgets:
AimAssistWidget
CountdownBeginWidget
timerWidget


Controls: 

Mouse:
Aim with Mouse
Shoot with LMB

Controller:
Aim with right ThumbStick 
Shoot with Right Trigger

Debug:
Shift & Enter to activate/deactivate aim assist 
Press CTRL & Space to restart game. 
When game is finished and widget appears, press CTRL & P to quit (game will pause when game is over)

Widgets:
Top left shows whether aim assist has been activated or not
Middle Left shows accuracy 
Middle shows time remaining
Middle right shows angle at which target gravity takes effect
Right shows the current number of targets destroyed. 

Widget appears when timer ends to indicate end of current round. 
