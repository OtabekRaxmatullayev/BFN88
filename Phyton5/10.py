def main(dct, key):
    if key in dct:
        del dct[key]
    return dct

dct = {'a': 1, 'b': 2, 'c': 3}

keys = 'c'

natija = main(dct, keys)

print(natija)
