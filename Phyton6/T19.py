import os
os.system("cls")
Hodimlar = [("Karimov Sardor", "12.02.2001", 4000000),
            ("Aliyev Rustam", "05.07.1990", 3500000),
            ("Nazarov Alisher", "23.03.1985", 4200000)]

fullname = list(map(lambda x : x[0], Hodimlar))
brith = list(map(lambda x : x[1], Hodimlar))
price = list(map(lambda x : x[2], Hodimlar))
print(fullname)
print(brith)
print(price)
