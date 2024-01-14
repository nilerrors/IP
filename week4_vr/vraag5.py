def print_previous_order(db, email):
    order = db.get(email)
    if order is None:
        print("Je hebt nog geen bestellingen geplaatst.")
    else:
        print("Je bestelde", order[0], "salade(s).")
        print("Je bestelde", order[1], "hamburger(s).")
        print("Je bestelde", order[2], "water(s).")

