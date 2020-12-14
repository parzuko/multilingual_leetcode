def linear_search(numbers: list, target: int) -> int:
    for i in range(len(numbers)):
        if numbers[i] == target:
            return i
    return -1

def main():
    numbers = [2, 3, 4, 10, 40]
    target = 10
    result = linear_search(numbers, target)
    if result == -1:
        print("The element doesn't exist :(")
    else:
        print(f"{target} exists at index {result}!")

if __name__ == "__main__":
    main()