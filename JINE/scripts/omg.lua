function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "ВЕРНО??? я знала, что ты поймешь",
                "Я лучшая",
                "ВЕРНО???",
                "Продолжайте верить за признание!",
                "Да, я лучшая в мире",
                "Ха-ха. Легко для меня!",
                "Я лучшая",
                "Г для ГЕНИУСА!!!!!!",
                "Ты действительно просто ОМГ по любому уголку, не так ли?",
                "А теперь скажи мне, что ты никогда не покинешь свою прекрасную подругу!",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end