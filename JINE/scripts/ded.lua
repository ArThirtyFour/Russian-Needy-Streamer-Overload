function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "Офицер, у нас есть мертвый глупец",
                "Не умирай...",
                "Я УБИЛА ФЕНИКСА",
                "О нет... нет пульса...",
                "(касаюсь твоего хрупкого тела ногой)",
                "Мы будем вместе в нашем следующем жизненном пути, правда? :(",
                "Глупцы умирают так легко",
                "НЕ УМРИТЕ...",
                "Если ты умрешь, я умру",
                "Ты должен не умирать до того, как я сделаю это!!!",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end