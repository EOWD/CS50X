def main():
    user_input=input("Expression")
    res=interpreter(user_input)
    print(f"{res}")

def interpreter(user_input):
    x,y,z=user_input.spilt()
    int(x)
    int(z)

    if not (y == "+","-","/","*" ):
        return "please give a valid expression "

    match y:
        case "+":
            return x+z
        case "-":
            return x-z
        case "/":
            return x/z
        case "*":
            return x*z


main()





