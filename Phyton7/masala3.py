file1 = open("employees.txt", "w")
file1.write("Ali, Valiyev, engineer, 1000\nBotir, Usmonov, manager, 2000\nGulnora, Karimova, manager, 2500\nRustam, Abdullaev, developer, 1500\n")
file1.close()

file2 = open("managers.txt", "w")
file2.close()

with open("employees.txt", "r") as f:
    xodim_malumotlari = []
    for line in f:
        values = line.strip().split(", ")
        ism = values[0]
        familiya = values[1]
        lavozim = values[2]
        ish_haqi = int(values[3])
        xodim_malumotlari.append((ism, familiya, lavozim, ish_haqi))

managers = list(filter(lambda x: x[2] == "manager", xodim_malumotlari))

with open("managers.txt", "w") as file:
    for xodim in managers:
        file.write(f"{xodim[0]}, {xodim[1]}, {xodim[2]}, {xodim[3]}\n")

