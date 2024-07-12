list1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

list2 = []
for i in range(len(list1)):
    if i % 2 == 0 and i + 1 < len(list1):
        list2.append(list1[i + 1])
    elif i % 2 != 0:
        list2.append(list1[i - 1])
    else:
        list2.append(list1[i])

print(list2)
