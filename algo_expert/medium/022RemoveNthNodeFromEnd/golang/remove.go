package golang

// LinkedList Data Class
type LinkedList struct {
	Value int
	Next  *LinkedList
}

//RemoveNthNodeFromEnd implementation
func RemoveNthNodeFromEnd(head *LinkedList, nth int) {
	counter, first, second := 1, head, head

	for counter <= nth {
		second = second.Next
		counter ++
	}

	if second == nil {
		head.Value = head.Next.Value
		head.Next = head.Next.Next
	}
	for second.Next != nil {
		second = second.Next
		first = first.Next
	}
	first.Next = first.Next.Next
}
