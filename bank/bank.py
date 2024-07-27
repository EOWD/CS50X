def main():
    greeting=input("Greeting:")
    lowerCase=greeting.lower().strip()
    if (lowerCase.startswith("hello")):
        print("$0")
    elif  (lowerCase.startswith("h")):
        print ("$20")

    else:
        print("$100")

main()

"""
def main():
    greeting = input("Greeting: ").strip().lower()
# NOTE: can also access string in python similare to arrays in js
    if greeting[:5] == "hello":
        print("$0")
    elif greeting[:1] == "h":
        print("$20")
    else:
        print("$100")

main()
"""
