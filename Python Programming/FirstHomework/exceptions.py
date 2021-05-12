class NotLocked(Exception):
    """You haven't lock this item!"""


class InvalidItemType(Exception):
    """Item type doesn't exist!"""


class OutOfStock(Exception):
    """Item out of stock!"""

