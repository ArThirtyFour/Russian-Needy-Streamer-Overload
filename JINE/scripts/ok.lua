function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "Ок",
                "к",
                "Пока ты понимаешь",
                "Калий",
                "Ты всего разговорчик, не так ли?",
                "Вот что говоришь без усилий",
                "Ты уверен?",
                "(*'-')b",
                "Знаешь, о чем ты ОКишь?",
                "Спасибо за нулевое усилие",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end