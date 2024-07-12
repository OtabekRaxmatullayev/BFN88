son = int(input("Kun boshlanganiga necha soat, necha minut va necha sekund bo'ldi?\n"))
soat=son//3600
minut=(son-soat*3600)//60
sekund=son-soat*3600-minut*60
print(soat,"soat",minut,"minut", sekund,"sekund")