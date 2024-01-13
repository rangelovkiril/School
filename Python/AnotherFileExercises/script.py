from pathlib import Path
import re

def read_file (path: str) -> str:
    with open(path, 'r') as f:
        return f.read()
    
def write_file (path: str, data: str) -> None:
    with open(path, 'w') as f:
        return f.write(data)
    
def does_file_exist(path: str) -> bool:
    _path = Path(path)
    return _path.exists()

def find_unique_words(words: list) -> list:
    pass

if __name__ == "__main__":

    filename = input("Please, enter filename: ") 
    while(does_file_exist(filename)):
        filename = input(("This file already exists. Please provide another name: ")) 


    
