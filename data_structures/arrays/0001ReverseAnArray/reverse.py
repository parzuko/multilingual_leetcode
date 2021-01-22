def reverse_list(array: list, start_index: int, end_index: int) -> None:
    while start_index < end_index:
        array[start_index], array[end_index] = array[end_index], array[start_index]
        start_index += 1
        end_index -= 1  


def main():
    array = [1, 2, 3, 4, 5]
    start_index = 0
    end_index = len(array) - 1
    print("The Original Array Is: ", array)
    reverse_list(array, start_index, end_index)
    print("Reversed Array Is: ", array)

if __name__ == "__main__":
    main()
