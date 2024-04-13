import hello 
import os 

def write_file(filename : str , text : str):
	if not os.path.exists(filename):
		hello.create_file(filename)
	with open(filename,'w') as file:
		file.write(text)

def read_file(filename : str):
	
	if not os.path.exists(filename):
		print(file not prea	
__name__ == '__main__':
	
	filename = 'yash.txt'
	text = 'yash is a bad boy'
	write_file(filename , text)
	print("helloworld")

