class Raqam:
    def __init__(self, numbers):
        self.numbers = numbers
    def delete_last_item(self):
        if self.numbers:
            self.numbers.pop(0)
    def info(self):
        print(f"Numbers:    {self.numbers}")

lst = Raqam([2, 4, 8, 16, 32, 64])

lst.delete_last_item()

lst.info()