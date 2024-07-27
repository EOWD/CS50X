def main():
    greeting=input("Greeting:")
    lowerCase=greeting.lower().strip()
    if not ("h" in lowerCase):
        print ("$100")
    elif ("hello" in lowerCase):
        print("$0")
    else:
        print("$20")

main()

