function Initialize()
    -- add a new ame JINE chat here.
        a = {
            "Любовь..........",
            "Что этот глупый стикер? Я тоже тебя люблю <3",
            "Отправь мне больше!!!",
            "<3",
            "Я люблю тебя... <3",
            "Я люблю тебя очень сильно <3 <3 <3",
            "Я думаю, ты лгушь.",
            "Нет возвратов! Ты БУДЕШЬ любить меня всегда.",
            "Не думаю, что ты это сделаешь, но если ты меня обманываешь, я убью тебя.",
            "Скажи еще раз! Скажи это 999999999 раз больше!",   
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end