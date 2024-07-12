son = int(input("Son kiriitng: "))
a = 0
b = 1
while b<=son//2:
    if son%b==0:
        a += 1
    b += 1    
if a==1:
    print("Tub son")
else: print("Tub son emas")         