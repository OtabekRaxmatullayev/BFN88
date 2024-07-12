lst = ["Instagram", "Telegram", "Tik Tok", "WhatsApp", "Fcebook", "Radiogram", "Videogram"]
soz = "gram"

natija = list(filter(lambda x: soz in x, lst ))
print(natija)