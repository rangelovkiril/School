if __name__ == "__main__":

    set1 = {"Yellow", "Orange", "Black"}
    list = ["Blue", "Green", "Red"]
    
    set1 |= set(list)

    print(set1)