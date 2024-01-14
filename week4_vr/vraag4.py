def place_order(db, email, order):
    db[email] = item_order(order)

