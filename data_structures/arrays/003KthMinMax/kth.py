def find_kth_min_max(array: list, kth: int) -> list:
    # later we will define quick and merge sort on our own
    sorted_array = sorted(array)
    size = len(sorted_array)
    kth_max = sorted_array[size - kth]
    kth_min = sorted_array[kth - 1]
    return [kth_min, kth_max]
    
    

def main():
    array = [1, 141241, 15124, 53, 12412468, 8]
    kth = 3
    min_and_max = find_kth_min_max(array, kth)
    print(min_and_max)

if __name__ == "__main__":
    main()