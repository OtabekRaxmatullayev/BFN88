import sys

a = int(input("Qatorni kiriitng: "))
b = int(input("Ustunni kiriting: "))

if a<1 or a>8 or b<1 or b>8:
    print("1 va 8 oralig'ida son kiriting!")
    sys.exit()
 
if a%2==1 and b%2==1 or a%2==0 and b%2==0:
    print("Oq")
elif a%2==0 and b%2==1 or a%2==1 and b%2==0:
    print("Qora")