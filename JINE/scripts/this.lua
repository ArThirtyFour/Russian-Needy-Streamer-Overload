function Initialize()
    -- add a new ame JINE chat here.
        a = {
            "Фу. худший ответ",
            "Ты вообще обратил внимание???",
            "фу",
            "Скажи мне, что ты не обращал внимания, не говоря мне, что ты не обращал",
            "Я ненавижу эту наклейку",
            "Отклик с низкими усилиями - 0/10",
            "Я ненавижу людей, которые отвечают только одним словом!!!",
            "ЭТО что, а???",
            "Не могли бы вы приложить некоторые усилия, чтобы ответить, пожалуйста",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end