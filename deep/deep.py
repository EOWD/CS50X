def main():
    user_input=input("what is the answer of the great question of life , the universe,and Everything?")
    new_input=user_input.lower().strip().replace(" ","").replace("-","")
    if "42" in new_input  or new_input=="fortytwo":
         print("YES")
    else:
        print( "no")



main()



