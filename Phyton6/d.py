from os import system
from colorama import init, Fore, Back

system('cls')

init(autoreset=True)

def digitIncludeStr(word: str) -> bool:
    for i in word:
        if i.isdigit():
            return True
    return False


def alphaIsUpper(word: str) -> bool:
    for i in word:
        if i.isupper():
            return True
    return False


try:
    password = input("Parol kiriting: ")

    if len(password) < 8 or len(password) > 32:
        raise NameError("Parol uzunligi [8;32] orasi bo'lishi kerak")

    if not digitIncludeStr(password):
        raise NameError("Parol ichida eng kamida bitta raqam qatnashishi kerak")

    if not alphaIsUpper(password):
        raise NameError("Eng kamida bitta katta harf bo'lishi kerak!")

    print(Back.GREEN + "Huuh, qo'yil o'ttiz!")

except NameError as message:
    print(Fore.RED + str(message))
