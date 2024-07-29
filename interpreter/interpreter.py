def main():
    user_input=input("Expression")
    res=interpreter(user_input)
    print(f"{res}")

def interpreter(user_input):
    x,y,z=user_input.spilt()
    int(x)
    int(y)
    

