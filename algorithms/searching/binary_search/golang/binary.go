package main

import "fmt"

func main() {
	numbers := []int{2, 3, 4, 10, 23, 140}
	target := 10
	// iterative method
	iterativeResult := iterativeBinarySearch(numbers, target)
	if iterativeResult == -1 {
		fmt.Println("Couldn't find", target, ":(")
	} else {
		fmt.Println("Found", target, "at index", iterativeResult, "!")
	}
	// recursive method
	recusiveResult := recursiveBinarySearch(numbers, target, 0, len(numbers)-1)
	if recusiveResult == -1 {
		fmt.Println("Couldn't find", target, ":(")
	} else {
		fmt.Println("Found", target, "at index", recusiveResult, "!")
	}
}

func recursiveBinarySearch(array []int, target int, lowIndex int, highIndex int) int {
	if highIndex < lowIndex {
		return -1
	}
	mid := int((lowIndex + highIndex) / 2)
	if array[mid] > target {
		return recursiveBinarySearch(array, target, lowIndex, mid)
	} else if array[mid] < target {
		return recursiveBinarySearch(array, target, mid+1, highIndex)
	} else {
		return mid
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
