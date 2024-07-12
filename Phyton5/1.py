def func(list):
    
    func = sorted(list)
    
    return func[-2]


list = [10, 5, 8, 12, 15, 3, 6, 3, 10, 12, 14]
result = func(list)
print("Ikkinchi maksimal son:", result)
