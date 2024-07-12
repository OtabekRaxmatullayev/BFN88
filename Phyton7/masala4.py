file1 = open("books.txt", "w")
file1.write("Harry Potter and the Philosopher's Stone, J.K. Rowling, 1997, 25\nHarry Potter and the Chamber of Secrets, J.K. Rowling, 1998, 20\nHarry Potter and the Prisoner of Azkaban, J.K. Rowling, 1999, 22\nThe Hobbit, J.R.R. Tolkien, 1937, 15\n")
file1.close()

file2 = open("expensive_rowling_books.txt", "w")
file2.close()

with open("books.txt", "r") as f:
    kitoblar_malumotlari = []
    for line in f:
        values = line.strip().split(", ")
        kitob_nomi = values[0]
        muallif = values[1]
        yil = int(values[2])
        narx = int(values[3])
        kitoblar_malumotlari.append((kitob_nomi, muallif, yil, narx))

expensive_rowling_books = list(filter(lambda x: x[1] == "J.K. Rowling" and x[3] > 20, kitoblar_malumotlari))

with open("expensive_rowling_books.txt", "w") as file:
    for kitob in expensive_rowling_books:
        file.write(f"{kitob[0]}, {kitob[1]}, {kitob[2]}, {kitob[3]}\n")
