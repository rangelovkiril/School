def concat(list1, list2):
    result_list = []

    for el in range(len(list1)):
        result_list.append(f'{list1[el]} {list2[el]}')

    return result_list


if __name__ == "__main__":
    
    list1 = ["Hello", "take"]
    list2 = ["Dear", "Sir"]

    print(concat(list1, list2))
