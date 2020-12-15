fun main(args: Array<String>) {
    val numbers: IntArray = intArrayOf(900, 20, 34, 8, 54)
    println("Before sorting, numbers are:")
    println(numbers.joinToString(separator = " "))
    bubbleSort(numbers)
    println("After sorting: ")
    println(numbers.joinToString(separator = " "))
}

fun bubbleSort(numbers: IntArray) {
    for (pass in 0 until (numbers.size - 1)) {
        for (currentPosition in 0 until (numbers.size - pass - 1)) {
            if (numbers[currentPosition] > numbers[currentPosition + 1]) {
                val tmp = numbers[currentPosition]
                numbers[currentPosition] = numbers[currentPosition + 1]
                numbers[currentPosition + 1] = tmp
            }
        }
    }
}

fun bubbleSortSinglePass(numbers: IntArray) {
    for (currentPosition in 0 until (numbers.size - 1)) {
        if (numbers[currentPosition] > numbers[currentPosition + 1]) {
            val tmp = numbers[currentPosition]
            numbers[currentPosition] = numbers[currentPosition + 1]
            numbers[currentPosition + 1] = tmp
        }
    }
}