[Rainmeter]
Update=-1
AccurateText=1
OnRefreshAction=[!CommandMeasure Animation "Execute 1"]

[Metadata]
Name=Needy Streamer Overload - Ame
Author=Smilie Pop (@lezzthanthree)
Information=Ame wants some headpats.
Version=4.0.0
License=Creative Commons Attribution - Non - Commercial - Share Alike 3.0

[Variables]
Zero=-1

@Include=#@#\Window\SizeFG.inc
Height=(290/387*#Width#)
TitleText="..."


; ===== Transition Animation =====

[ImageNumberCalc]
Measure=Calc
Formula=(#Zero# + 1)
DynamicVariables = 1

[Transformation]
Meter=Image
MeasureName=ImageNumberCalc
X=8
Y=42

Path=#@#\Images\Ame\transformation_dark
W=(#Width#-2)
DynamicVariables=1
AntiAlias=0

[Animation]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 500 | Play | Repeat Animate, 75, 190 | Close
Play=[Play "#@#\Audio\bank.wav"]
Animate=[!SetVariable Zero "[ImageNumberCalc]"][!UpdateMeasure ImageNumberCalc][!UpdateMeter Transformation][!UpdateMeter Frame][!Redraw]
Close=[!CommandMeasure ActionTimer "Stop 1"][!WriteKeyValue Variables @Include2 "Scene\DarkStream.inc"][!Refresh]