[ScreenTimeLabel]
Text="Время за комьютером"

[MeasureScreenTime]
Measure=Uptime
AddDaysToHours=1
Format="%3!02i!:%2!02i!"
IfCondition = MeasureScreenTime < 300
IfTrueAction = [Play "#@#\Audio\boot.wav"]

[MeterScreenTime]
MeasureName=MeasureScreenTime

[ScreenTimeTooltipText]
Text=Здесь показано сколько ты сидишь за копмьютером#CRLF#(потрогай траву уже)
Y=138

; ===============

[CPULabel]
Text="Нагрузка процессора"

[CPUTooltipText]
Text=А тут написано на сколько загружен твой процессор
Y=57

; ===============

[MemoryLabel]
Text="Оперативная Память"

[MemoryTooltipText]
Text=Ну а здесь показана твоей загруженность твоей оперативки
Y=130

; ===============

[DiskLabel]
Text=Занято памяти (#DiskLocation#:)

[DiskTooltipText]
Text=Ну и тут инфа , на столько заполнен твой жесткий диск
Y=203

[DescriptionVisibilityOption]
Measure=Calc
Formula=1