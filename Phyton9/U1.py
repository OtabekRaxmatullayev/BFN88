class Book:
    def __init__(self, name, authers, price, genre, page):
        self.nomi = name
        self.muallifi = authers
        self.narx = price
        self.janri = genre
        self.sahifa = page
        
    def info(self):
        print(f"Nomi:             {self.nomi}")
        print(f"Muallifi:         {self.muallifi}")
        print(f"Narxi:            {self.narx}")
        print(f"Janri:            {self.janri}")
        print(f"Sahifa soni:      {self.sahifa}\n")
        
    def newnarxi(self, newnarx: int):
        self.narx = newnarx
    

k1 = Book("Shaytanat", "Tohir Malik", 34000 , "Roman" , 350 )
k2 = Book("Farhod va shirin", "Alisher Navoiy", 43000 , "Doston" , 250 )
k3 = Book("Ko'klam", "Mirtemir", 21000 , "She'riy to'plam" , 100 )

kitoblar = [k1, k2, k3]
print("Dastlabki ro'yxat\n")
for kitob in kitoblar:
    kitob.info()
    
k2.newnarxi(45230)
k1.newnarxi(36640)
print("O'zgartirilgandan keyingi ro'yxat\n")
for kitob in kitoblar:
    kitob.info()