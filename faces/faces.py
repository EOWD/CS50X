def main():
    userInput= input("lets converts your smiles")
    outPut= convert(userInput.strip())
    print(outPut)

def convert(input):
    if input != "":
        outPut=input.replace(":)","🙂")
        outPut=outPut.replace(":(","🙁")
        return outPut

main()
