list = [1, 2, 3, 4, 5, 6, 7, 8, 9]

juftlar = []
toqlar = []

for num in list:
    if num % 2 == 0:
        juftlar.append(num)
    else:
        toqlar.append(num)

print("Juft sonlar:", juftlar)
print("Toq sonlar:", toqlar)
