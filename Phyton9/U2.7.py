class Ok:
    def get_string(self):
        abc = input("Nimadir kiriting: ")
        self.matn = abc
    def update_string(self):
        if len(self.matn) == 1:
            return self.matn.upper()
        else:
            birinchi = self.matn[0].upper()
            ortasi = self.matn[1:-1]
            oxiri = self.matn[-1].upper()
            return birinchi + ortasi + oxiri
    
natija = Ok()
natija.get_string()
print(natija.update_string())