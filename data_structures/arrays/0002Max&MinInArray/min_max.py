# Iterative O(n)
def find_min_and_max(array: list) -> list:
    min_number = float('inf')
    max_number = float('-inf')
    for each in array:
        min_number = min(min_number, each)
        max_number = max(max_number, each)
    min_and_max = [min_number, max_number]
    return min_and_max
    

def find_min_max_recursively(array: list, low: int, high: int) -> list:
    min_max = [0, 0]

    if low == high:
        min_max[0] = array[low]
        min_max[1] = array[low]
        return min_max
    
    elif high == low + 1:
        if array[low] > array[high]:
            min_max[0] = array[high]
            min_max[1] = array[low]
        else:
            min_max[0] = array[low]
            min_max[1] = array[high]
        return min_max
    else:
        mid = (low + high) // 2 
        left_min_max = find_min_max_recursively(array, low, mid)
        right_min_max = find_min_max_recursively(array, mid + 1, high)

    min_max[0] = min(left_min_max[0], right_min_max[0])
    min_max[1] = max(left_min_max[1], right_min_max[1])
    return min_max

def main():
    array = [14,141,512,125,551,11,5]
    
    print("Iterative Answer:")

    min_and_max = find_min_and_max(array)
    print(min_and_max)

    print("Now Using Recursion:")

    min_and_max = find_min_max_recursively(array, 0, len(array) - 1)
    print(min_and_max)

if __name__ == "__main__":
    main()