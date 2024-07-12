import sys

son = int(input("5 xonali son kiriting: "))
a = 0

if son > 99999 or son < 10000:
    print("5 xonali son kiriting!")
    sys.exit()  
while son > 0:
    a += son % 10
    son = son // 10

print(a)
