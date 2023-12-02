import readfile 

def copyfile(file_name, new_file_name):
    with open(new_file_name, 'w') as copy:
        copy.write(readfile(file_name))

if __name__ == "__main__":
    copyfile("test.txt", "copy_test.txt")