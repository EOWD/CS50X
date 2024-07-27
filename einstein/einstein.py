def main():
    M = input("M: ")
    if M:
        outPut= findE(int(M))
        print(f"E: {outPut}")
        return
    else:
        return "none"




def findE(input):
    if input:
        C =300_000_000
        outPut= input * C ** 2
        return outPut
    else:
        return input




main()
