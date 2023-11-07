# Implement a function, called group, which 
# takes a list of things and returns a list of group, where each group is formed by
# all equal consecutive elements in the list.
# For example:
# group([1, 1, 1, 2, 3, 1, 1]) == [[1, 1, 1], [2], [3], [1, 1]]
# group([1, 2, 1, 2, 3, 3]) == [[1], [2], [1], [2], [3, 3]]

# Implement the function max_consecutive(items), which takes a list of things and
# returns an integer - the count of elements in the longest subsequence of equal
# consecutive elements.
# For example, in the list [1, 2, 3, 3, 3, 3, 4, 3, 3], the result is 4, where the longest
# subsequence is formed by 3, 3, 3, 3

def group(arr):
    
    group = []
    result = []

    for i in range(len(arr)):
        group.append(arr[i])

        if arr[i] != arr[i + 1]:
            arr.append(group)
            group = []

    for i in range(len(arr)):
        if type(arr[i]) is list:
            result.append(arr[i])

    return result


def max_consecutive(arr):
    
    arr = group(arr)
    max_count = 0

    for i in range(len(arr)):
        if len(arr[i]) > max_count:
            max_count = len(arr[i])

    return max_count

if __name__ == "__main__":

    a = [1, 2, 3, 3, 3, 3, 4, 3, 3]
    print(max_consecutive(a))


