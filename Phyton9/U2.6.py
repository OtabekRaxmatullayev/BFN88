class Car:
    def __init__(self, brands):
        self.brands = brands
        
        
    def brand_exists(self, brand):
        if brand in self.brands:
            return True
        else:
            return False
car = Car(["a", 'b', 'v'])
print(car.brand_exists("acls"))