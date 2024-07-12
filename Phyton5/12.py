def func(lst):
    juft = [i for i in lst if i % 2 == 0]
    
    if juft:
        return max(juft)
    else:
        return -1

lst = [1, 3, 5, 7, 8, 10, 12]

natija = func(lst)

print(natija) 