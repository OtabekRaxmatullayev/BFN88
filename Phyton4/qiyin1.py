lst = [1, 2, 3, 4, 5, 6]
juft_sonlar = [x for x in lst if x % 2 == 0]
toq_sonlar = [x for x in lst if x % 2 != 0]
print((juft_sonlar, toq_sonlar))  
