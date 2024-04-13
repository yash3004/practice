import os 

def create_file(filename:str):
	if os.path.isfile(filename):
		print('file is present')
	else :
		os.open(filename, os.O_CREAT)
		print("file is created")


if __name__ == '__main__':

	filename = 'yash.txt'
	create_file(filename)


# so out of this what we know : 
""" o : for inserting text in next line , 
    i : for inseting text in that pos: , 
    a for inserting text after that pos , 

	[capital]
    O : for inseting the txt in the above line snapping the line

    I : for inserting the line at the last line
    A : for inseting the text at the last of the line




   
