def main():
    user_input=input("please enter expression: ")
    res=interpreter(user_input)
    if res is not None:
        print(f"{res:.1f}")



def interpreter(user_input):
    x,y,z=user_input.strip().split()
    x=int(x)
    z=int(z)
    try:
        match y:
            case "+":
                return x+z
            case "-":
                return x-z
            case "/":
                return x/z
            case "*":
                return x*z
            case _:
                print("invalid Expression ")
                return None
    except err:
        return "match error"
main()
