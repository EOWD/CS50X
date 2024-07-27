def main():
    greeting=input("Greeting:")
    lowerCase=greeting.lower().strip()
    if  (lowerCase.startswith("h")):
        print ("$20")
    elif (lowerCase.startswith("hello")):
        print("$0")
    else:
        print("$0")

main()

