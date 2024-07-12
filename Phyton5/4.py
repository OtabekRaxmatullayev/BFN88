import os
os.system("cls")

def func(royxat):
    dct = {}
    
    for i in royxat:
        if i in dct:
            dct[i] += 1
        else:
            dct[i] = 1
    
    N = 0
    M = None
    
    for i, j in dct.items():
        if j > N:
            N = j
            M = i
    
    return M, N

lst = [1, 3, 5, 2, 3, 3, 4, 3, 4, 5, 3, 4, 8, 6, 10, 4, 3, 5, 5]
M, N = func(lst)

print(f"{M} soni {N} martda takrorlangan")
