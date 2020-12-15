package main

import "fmt"

func linearSearch(numbers []int, target int) int {
	index := 0
	for _, item := range numbers {
		if item == target {
			return index
		}
		index++
	}
	return -1
}

func main() {
	numbers := []int{2, 3, 4, 10, 20}
	target := 10
	result := linearSearch(numbers, target)
	if result == -1 {
		fmt.Println("Couldn't find target :(")
	} else {
		fmt.Println("Found target at index:", result)
	}

}
