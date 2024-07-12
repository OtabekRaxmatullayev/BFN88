import os
os.system("cls")

def func(royxat):
    dct = {}
    
    for i in royxat:
        if i in dct:
            dct[i] += 1
        else:
            dct[i] = 1
    
    N = float('inf')  
    M = None
    
    for i, j in dct.items():
        if j < N:
            N = j
            M = i
    
    return M, N

lst = [1, 3, 1, 5, 11, 2, 3, 4, 17, 4, 30, 5, 8, 4, 4, 5, 5]
M, N = func(lst)

print(f"{M} soni {N} martda takrorlangan")
