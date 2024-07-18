class Nomsiz:
    def   __init__(self, my_list):
        self.my_list = my_list
    def delete_last_item(self):
        if self.my_list:
            self.my_list.pop()
    def info(self):
        print(f"My list:   {self.my_list}")
        
lst = Nomsiz([10, 20, 30, 40, 50])

lst.delete_last_item()

lst.info()
