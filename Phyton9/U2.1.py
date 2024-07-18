class Talaba:
    def __init__(self, ism, familiya, baho):
        self.ismi = ism
        self.familiyasi = familiya
        self.baho = baho
       
    
t1 = Talaba('Otabek', 'Raxmatullayev', 4)
t2 = Talaba('Abdulaziz', 'Akbarov', 5)
t3 = Talaba('Barkamol', 'Raxmatullayev', 5)

talabalar = [t1, t2, t3]
past = talabalar[0]
for talaba in talabalar:
    if talaba.baho < past.baho:
        past = talaba

print(f"{past.ismi}")
    
