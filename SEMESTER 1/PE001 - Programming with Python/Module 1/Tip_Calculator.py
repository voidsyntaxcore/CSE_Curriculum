def main():
    amt = amount()
    tip = tip_percentage()
    print(f"Tip to leave: {amt * tip : .2f}")
    print(f"Total amount: {amt * (1+tip) : .2f}")

def amount():
    amt = input("Enter bill amount($ XX.XX): ")
    amt_float = float(amt[1:])
    return amt_float

def tip_percentage():
    tip = input("Enter percentage tip(XX.XX %): ")
    tip_float = (float(tip[:len(tip)-1])) / 100
    return tip_float

main()