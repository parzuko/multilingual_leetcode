def dutch_national_flag(array: list, first_element: int, middle_element: int, final_element: int) -> None:
    low = 0
    high = len(array) - 1
    mid = 0

    while mid <= high:
        if array[mid] == first_element:
            array[mid], array[low] = array[low], array[mid]
            mid += 1
            low += 1
            continue
        if array[mid] == middle_element:
            mid += 1
            continue
        if array[mid] == final_element:
            array[mid], array[high] = array[high], array[mid]
            high -= 1
            continue


def main():
    array = [0,1,2,1,2,0,1,0,1,2,1,1,1,0,0,2]
    dutch_national_flag(array, first_element=0, middle_element=1,final_element=2)
    print("Array Is Now Sorted!")
    print(array)


if __name__ == "__main__":
    main()