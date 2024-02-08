def sort_by_values(tuple):
    return sorted(tuple, key = lambda x: x[1])

if __name__ == "__main__":
    tuple = (('a', 23), ('b', 37), ('c', 11), ('d', 29))
    print(sort_by_values(tuple))