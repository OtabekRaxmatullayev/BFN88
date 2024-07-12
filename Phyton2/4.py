for son in range(100, 1000):
    a = son % 10
    b = (son // 10) % 10
    c = son // 100
    if ((a == b and a != c) or (a == c and a != b) or (b == c and b != a)) and not (a == b == c):
        print(son)
