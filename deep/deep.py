def main():
    user_input=input("What is the answer of the great question of Life, the Universe, and Everything?")
    new_input=user_input.lower().strip()
    if "42" in new_input  or ("forty" in new_input and "two" in new_input):
         print("Yes")
    else:
        print( "No")



main()



