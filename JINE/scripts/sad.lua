function Initialize()
    -- add a new ame JINE chat here.
        a = {
            "Остановись, глупец!",
            "Я тоже совсем не хочу плакать :(",
            "Ужасный лик на лице",
            "Я собираюсь ударить тебя..",
            "Ты не выйдешь из этого плаканием!",
            "Ужас",
            "Я ненавижу этот стикер",
            ";-;",
            "Не давай мне слез.",
            "Не плачь :( Я ударила бы тебя!!!",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end