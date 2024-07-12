file1 = open("transactions.txt", "w")
file1.write("1, Olma, 5, 10\n2, Banan, 15, 3\n1, Apelsin, 8, 15\n3, Kivi, 12, 2\n2, Shaftoli, 20, 4\n")
file1.close()

file2 = open("big_spenders.txt", "w")
file2.close()

with open("transactions.txt", "r") as f:
    xaridlar_malumotlari = {}
    for line in f:
        values = line.strip().split(", ")
        xaridor_id = int(values[0])
        mahsulot_nomi = values[1]
        narx = int(values[2])
        soni = int(values[3])
        if xaridor_id in xaridlar_malumotlari:
            xaridlar_malumotlari[xaridor_id] += narx * soni
        else:
            xaridlar_malumotlari[xaridor_id] = narx * soni

big_spenders = [(key, value) for key, value in xaridlar_malumotlari.items() if value > 100]

with open("big_spenders.txt", "w") as file:
    for xaridor in big_spenders:
        file.write(f"{xaridor[0]}, {xaridor[1]}\n")
