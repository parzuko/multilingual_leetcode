def main():
    numbers = [2, 3, 4, 10, 20]
    target = 10
    minimum = 0
    maximum = len(numbers) - 1
    result = binary_search(numbers, target, minimum, maximum)
    if result == -1:
        print(f"Couldn't find {target} :(")
    else:
        print(f"Found {target} at index {result}!") 

def binary_search(numbers: list, target: int, minimum: int, maximum: int) -> int:
    if maximum >= minimum:
        mid = (maximum + minimum)// 2
        if numbers[mid] > target:
            return binary_search(numbers, target, minimum, mid)
        if numbers[mid] < target:
            return binary_search(numbers, target, mid+1, maximum)
        else:
            return mid
    return -1

if __name__ == "__main__":
    main()