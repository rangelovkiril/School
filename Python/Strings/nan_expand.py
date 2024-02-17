def nan_expand(num):
    
    if not num:
        return ""

    output = "Not a " * num
    output += "NaN"
    
    return output

if __name__ == "__main__":
    
    print(nan_expand(0))

