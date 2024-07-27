def main():
   outPut= playback()
   print(outPut)



def playback():
    x=input()
    if input != "":
       y= x.strip().replace(" ","...")
       return y

main()
