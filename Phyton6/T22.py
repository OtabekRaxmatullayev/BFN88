def funcfloat(s):
    try:
        float(s)
        return True
    except ValueError:
        return False
    
lst = ["13.1", "salom", "5", "alik", "-12.28", "Aymoq", "51.94"]

abc = list(map(lambda x: int(float(x)) if funcfloat(x) else 0, lst ))

print(abc)
