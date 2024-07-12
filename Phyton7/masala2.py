file1 = open("product.txt", "w")
file1.write("Olma, 5, 100\nBanan, 15, 50\nApelsin, 8, 80\nKivi, 12, 40\n")
file1.close()

file2 = open("cheap_products.txt", "w")
file2.close()

with open("product.txt", "r") as f:
    mahsulot_malumotlari = []
    for line in f:
        values = line.strip().split(", ")
        nomi = values[0]
        narxi = int(values[1])
        soni = int(values[2])
        mahsulot_malumotlari.append((nomi, narxi, soni))

def func(mahsulot):
    nomi = mahsulot[0]
    narxi = mahsulot[1]
    soni = mahsulot[2]
    return (nomi, narxi, soni)

natija1 = list(map(func, mahsulot_malumotlari))
natija2 = list(filter(lambda x: x[1] < 10, natija1))

with open("cheap_products.txt", "w") as file:
    for mahsulot in natija2:
        file.write(f"{mahsulot[0]}, {mahsulot[1]}, {mahsulot[2]}\n")
