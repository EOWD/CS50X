def main():
    greeting=input("Greeting:")
    lowerCase=greeting.lower().strip()
    if (lowerCase.startswith("hello")):
        print("$0")
    elif  (lowerCase.startswith("h")):
        print ("$20")

    else:
        print("$0")

main()

