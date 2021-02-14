
class LinkedList():
    pass

def remove_nth_node_from_end(head: LinkedList, n: int):
    first = head
    second = head
    counter = 1

    while counter <= n:
        second = second.next
        counter += 1

    if second is None:
        head.value = head.next.value
        head.next = head.next.next
        return
    
    while second.next is not None:
        second = second.next
        first = first.next

    first.next = first.next.next    