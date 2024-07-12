lst = [45,23,15,64,9]

def func():
    lst1 = sorted(lst)
    yigindi = sum(lst)
    maximal = lst1[-1]
    minimal = lst1[0]
    return yigindi - maximal, yigindi - minimal

natija = func()

print(f"{natija[0]}")
print(f"{natija[1]}")