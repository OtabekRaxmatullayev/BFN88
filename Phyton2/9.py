son = int(input("Son kiriting: "))
j = 0
t = 0
for a in range(1,son+1):
    if a%2==1:
        t += 1
    else: j += 1
print("Juftlar soni = ", j)
print("Toqlar soni = ", t)    