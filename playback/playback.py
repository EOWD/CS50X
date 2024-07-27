def main():
   outPut= playback()
   print(outPut)



def playback():
    x=input()
    if  x.strip() != "":
       y= x.strip().replace(" ","...")
       return y
    else:
       return "Enter Input"

main()
