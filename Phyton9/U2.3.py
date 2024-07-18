class Notebook:
    def __init__(self,firma, model, CPU, DDR, price):
        self.firmasi = firma
        self.modeli = model
        self.CPU = CPU
        self.DDR = DDR
        self.narxi = price
        
    def info(self):
        print(f"""
Firmasi:         {self.firmasi}
Modeli:          {self.modeli}
CPU:             {self.CPU}
DDR:             {self.DDR}
Narxi:           {self.narxi}
""")

n1 = Notebook("HP", "HP Victus", "AMD Ryzen 5 7000 seriya", 48000, 7050000)
n2 = Notebook("Dell", "Dell G15", "Intel Core i5 11-chi avlod", 55000, 8192000)
n3 = Notebook("Asus", "Asus ROG Zephyrus", "AMD Ryzen 7 5800H", 80000, 16384000)
n4 = Notebook("Lenovo", "Lenovo Legion", "Intel Core i7 12-chi avlod", 75000, 16384000)
n5 = Notebook("Acer", "Acer Nitro 5", "AMD Ryzen 5 6000 seriya", 60000, 8192000)

nlar = [n1, n2, n3, n4, n5]

for n in nlar:
    n.info()