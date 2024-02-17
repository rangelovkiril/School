def iterate (list1, list2):
    list2.reverse()

    for el in range(len(list1)):
        print(f'{list1[el]} {list2[el]}')


if __name__ == "__main__":

    list1 = [10, 20, 30, 40]
    list2 = [100, 200, 300, 400]
    
    iterate(list1, list2)