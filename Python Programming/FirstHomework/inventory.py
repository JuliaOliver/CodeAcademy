from items import Items
from exceptions import NotLocked, InvalidItemType, OutOfStock


class Inventory:
    def __init__(self):
        self.inventory = []
        self.not_locked = True

    def add_item(self, item):
        if item.name in map(lambda x: x.name, self.inventory):
            item.quantity += 1
        else:
            self.inventory.append(item)

    def lock(self, item_type):
        items = [i for i in self.inventory if i.name == item_type]
        if items:
            curr_item = items[0]
            self.not_locked = False
            print(f"Item {curr_item.name} locked!")

    def unlock(self, item_type):
        items = [i for i in self.inventory if i.name == item_type]
        if items and not self.not_locked:
            curr_item = items[0]
            self.not_locked = True
            print(f"Item {curr_item.name} unlocked!")
        else:
            print("This item is not locked!")

    def purchase(self, item_type):
        items = [i for i in self.inventory if i.name == item_type]
        if not items:
            raise InvalidItemType

        if items and items[0].quantity < 1:
            raise OutOfStock

        if self.not_locked:
            raise NotLocked

        curr_item = items[0]
        curr_item.quantity -= 1
        curr_quantity = curr_item.quantity
        if curr_quantity < 1:
            self.inventory.remove(curr_item)
        return curr_quantity


phone = Items("Phone", 3)
apple = Items("Apple", 2) # Тези двете ги създадох за да има различни неща
plane = Items("Plane", 1) # и да може да се тества по различен начин
item_name = "Phone"
wrong_name = "Wrong" # Използвах го за тест, ако подам нещо което го няма да ми влезе в ексепшъна за невалиден итем
shop = Inventory()
shop.add_item(phone) # За да може да е успешна поръчката първо трябва да lock-нем предмета

shop.lock(item_name)
try:
    quantity_left = shop.purchase(item_name)
except NotLocked:
    print("Sorry, you haven't lock this item!")
except InvalidItemType:
    print("Invalid item type!")
except OutOfStock:
    print("Sorry, this item is out of Stock!")
else:
    print(f"Purchase complete. There are {quantity_left} {item_name}s left")
finally:
    shop.unlock(item_name)
