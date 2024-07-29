def main():
    fileName=input('Give filename: ')
    fileExtention= checkFileExtention(fileName)
    print(fileExtention)

def checkFileExtention(fileName):

    types={
        '.gif': 'image/gif',
        '.jpg': 'image/jpeg',
        '.jpeg': 'image/jpeg',
        '.png': 'image/png',
        '.pdf': 'application/pdf',
        '.txt': 'text/plain',
        '.zip': 'application/zip'
    }
    x,y,z="1 + 1"
    print (y)
    name = fileName.lower().strip()
    for key in types:
        if key in name:
            return(types[key])
    return "application/octet-stream"




main()


