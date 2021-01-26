def move_negatives(array: list) -> None:
    size = len(array)
    j = 0
    for i in range(size):
        if array[i] < 0 :
            array[j], array[i] = array[i], array[j]
            j += 1

def move_using_two_pointers(array: list, size: int) -> None:
    left = 0
    right = size - 1

    while left <= right:
        if (array[left] < 0 and array[right] < 0):
            left += 1
        elif (array[left] > 0 and array[right] < 0):
            array[left], array[right] = array[right], array[left]
            left += 1
            right -= 1
        elif (array[left] > 0 and array[right] > 0):
            right -= 1
        else:
            left += 1
            right -= 1
            
def main():
    array = [1,1,24,51,51,215,125,6451,-12,-89]
    move_negatives(array)
    print("Modified Array Is:")
    print(array)

if __name__ == "__main__":
    main()