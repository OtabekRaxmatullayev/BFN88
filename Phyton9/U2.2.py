class Bino:
    def __init__(self, balandligi, rangi):
        self.balandligi = balandligi
        self.rangi = rangi


b1 = Bino(30, 'qizil')
b2 = Bino(60, "ko'k")
b3 = Bino(45, 'yashil')
b4 = Bino(70, 'oq')
b5 = Bino(55, 'sariq')

binolar = [b1, b2, b3, b4, b5]

for bino in binolar:
    if bino.balandligi > 50:
        print(f"{bino.rangi}")
