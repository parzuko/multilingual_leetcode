package main

import "fmt"

func main() {
	numbers := []int{2, 3, 4, 10, 23, 140}
	target := 10
	result := iterativeBinarySearch(numbers, target)

	if result == -1 {
		fmt.Println("Couldn't find", target, ":(")
	} else {
		fmt.Println("Found", target, "at index", result, "!")
	}
}

func iterativeBinarySearch(numbers []int, target int) int {
	min := 0
	max := len(numbers) - 1
	mid := len(numbers) / 2

	for min <= max {
		value := numbers[mid]
		if value == target {
			return min
		}
		if value > target {
			max = mid - 1
			mid = (min + max) / 2
			continue
		}
		min = mid + 1
		mid = (min + max) / 2
	}
	return -1
}
