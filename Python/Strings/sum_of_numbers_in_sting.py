# You are given a string, where there can be numbers. Return the sum of all numbers
# in that string (not digits, numbers)

def sum_of_numbers(str):
    
    total = 0

    for char in str:
        if char.isdigit():
            total += int(char)
    
    return total

if __name__ == "__main__":
    
    str = input("Enter: ")
    result = sum_of_numbers(str)
    print(result)


