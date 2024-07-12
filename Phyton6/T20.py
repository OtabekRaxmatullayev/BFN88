lst1 = [1,11,7,16,8]
lst2 = [4,9,19,13,2]
lst = []

for a in range(len(lst1)):
    tup = (lst1[a] + lst2[a],lst1[a] - lst2[a], lst1[a] * lst2[a] )
    lst.append(tup)

print(lst)
    