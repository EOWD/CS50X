def main():
    userInput= input("lets converts your smiles: ")
    outPut= convert(userInput.strip())
    print(f"converted out put: {outPut}")

def convert(input):
    if input != "":
        return input.replace(":)", "🙂").replace(":(", "🙁")
    else:
        return input


main()
