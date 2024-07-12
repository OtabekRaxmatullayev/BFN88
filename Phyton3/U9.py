list1 = [1, 2, 3, 4, 5, -2, 16]

list2 = []
for i in range(len(list1) - 1):
    list2.append(list1[i] + list1[i+1])

print(list2)
