def readfile(file_name):
    with open(file_name, 'r') as f:
        return f.read()
    
def read_nth_row(file_name, n, new_file_name):
    data = readfile(file_name)
    rows = data.split('\n')
    return rows
if __name__ == "__main__":

    print(read_nth_row("test.txt", 2, "s"))