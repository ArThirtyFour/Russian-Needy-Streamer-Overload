[Rainmeter]
; Smaller Number, Faster Animation, CPU Usage increase.
; 1000 = saves CPU Usage, slowest animation [1FPS]
; 500 = saves CPU Usage, slow animation [2FPS]
; 250 = moderate CPU Usage, smooth animation [Default] [4FPS]
; 200 = high CPU Usage, smooth animation. [5FPS]
Update=250 
OnRefreshAction=[!CommandMeasure "Script" "NewStream()"][!CommandMeasure Animation "Execute 1"][PlayLoop "#@#Audio\event_kincho.wav"]

[Variables]
@Include=#@#\Window\SizeFG.inc
; Ame's width is the width subtracted by 2
Height=(253/387*#Width#)
TitleText="Стрим..."

@Include2="#@#\Settings\Ame\Task Manager - Stream.inc"

SpritePath=#@#Images\Ame\sprites\stream\[Stream]\[Section]

Frame = -1

[Close]
LeftMouseUpAction=[!SetOption ImageNumberCalc Formula 0][!SetOption Ame Path "#@#Images\Ame\sprites\"][!WriteKeyValue Variables @Include2 "Scene\Ame.inc"][Play "#@#Audio\endHaishin.wav"][!Redraw][!RainmeterDeactivateConfig]

[Settings]
Meter=IMAGE
X=-24r
Y=11
ImageName=#@#Images\Ame\button_gear.png
LeftMouseUpAction=[!ToggleConfig "Needy Streamer Overload\Ame\Settings" "Settings.ini"]
DynamicVariables=1

[Activities]
Meter=IMAGE
X=-24r
Y=11
ImageName=#@#Images\Ame\button_heart.png
LeftMouseUpAction=[!CommandMeasure EndStream "Execute 1"]
DynamicVariables=1

; ===== Background =====

[BackgroundStream]
Meter=IMAGE
MeasureName=MeasureBackground
X=8
Y=42
DynamicVariables=1
Path=#@#Images\Ame\bg\
W=(#Width#-2)
AntiAlias=1

[ScreenSaverRandomizer]
Measure=Calc
Formula=Random
LowBound=0
HighBound=2

[ScreenSaver]
Meter=IMAGE
MeasureName=ScreenSaverRandomizer
X=8
Y=42
Path=#@#Images\Ame\bg_screensaver\
W=(#Width#-2)
DynamicVariables=1
AntiAlias=1

; ===== KAngel Animation ===== 

[ImageNumberCalc]
Measure=Calc
Formula=(#Frame# + 1)
DynamicVariables=1
AntiAlias=0

[Stream]
Measure=Calc
Formula=99999
DynamicVariables=1
UpdateDivider=-1

[NumberOfSections]
Measure=Plugin
Plugin=FolderInfo
Folder=#@#\Images\Ame\sprites\stream\[Stream]\
InfoType=FolderCount
DynamicVariables=1

[Section]
Measure=Calc
Formula=0
DynamicVariables=1
ifConditionMode=1
ifCondition=Section >= NumberOfSections
ifTrueAction=[!SetOption KAngel Path "#@#Images\Ame\sprites\stream\99999"][!SetOption ImageNumberCalc Formula 0][!Redraw][!CommandMeasure Animation "Stop 1"][Play "#@#\Audio\bluescreen.wav"][!SetOption Activities LeftMouseUpAction """[!SetOption MeasureBackground Formula 3654][!HideMeter ScreenSaver][!HideMeter KAngel][PlayLoop "#@#\Audio\horrornoise.wav"][!Redraw][!SetOption Activities LeftMouseUpAction """[!CommandMeasure EndStream "Execute 1"]"""]"""][!UpdateMeasure Activities][!DisableMeasure "Section"]
ifFalseAction=[!CommandMeasure Animation "Execute 1"]

[NumberOfFrames]
Measure=Plugin
Plugin=FolderInfo
Folder=#SpritePath#
InfoType=FileCount
DynamicVariables=1

[NumberOfFramesZero]
Measure=Calc
Formula=NumberOfFrames-1

[KAngel]
Meter=IMAGE
MeasureName=ImageNumberCalc
DynamicVariables=1
X=8
Y=42
Path=#SpritePath#
W=(#Width#-2)
AntiAlias=0

[Animation]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 250 | Repeat Animate, 250, [NumberOfFramesZero] | Wait 4000 | NextSection
Animate=[!SetVariable Frame "[ImageNumberCalc]"][!UpdateMeasure ImageNumberCalc][!Redraw]
NextSection=[!SetVariable Frame -1][!SetOption Section Formula [Section]+1][!UpdateMeasure Section][!UpdateMeasure ImageNumberCalc][!Redraw]
DynamicVariables=1

; ===== End Stream =====

[EndStream]
Measure=Plugin
Plugin=ActionTimer
ActionList1= Change | Wait 2000 | Switch
Change=[!SetOption ImageNumberCalc Formula 0][!SetOption KAngel Path "#@#Images\Ame\sprites\stream"][!ShowMeter KAngel][Play "#@#Audio\endHaishin.wav"][!Redraw]
Switch=[!WriteKeyValue Variables @Include2 "Scene\Ame.inc"][!RainmeterDeactivateConfig]