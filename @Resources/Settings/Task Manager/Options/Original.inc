[ScreenTimeLabel]
Text="Подписчики"

[ScreenTime]
Measure=Uptime
Format="%3!02i!"

[MeasureFollowers]
Measure=Calc
Formula=(ScreenTime/3600)*1000
IfCondition = MeasureFollowers < 85
IfTrueAction = [Play "#@#\Audio\boot.wav"] 

[MeterScreenTime]
MeasureName=MeasureFollowers

[ScreenTimeTooltipText]
Text=Здесь информация сколько тебя смотрят :) Надеюсь ты станешь популярным.
Y=130

; ===============

[CPULabel]
Text="Стресс"

[CPUTooltipText]
Text=Это показывает мое давление , если оно будет будет высоким, могу вести странно. 
Y=51

; ===============

[MemoryLabel]
Text="Привязанность"

[MemoryTooltipText]
Text=Это показывает как я сильно люблю тебя :) Главное найди баланс , хорошо?
Y=124

; ===============

[DiskLabel]
Text="Состояние"

[DiskTooltipText]
Text=Это показывает в каком я состоянии , хотя я очень завижу от цифр.
Y=197

[DescriptionVisibilityOption]
Measure=Calc
Formula=0