#include <bits/stdc++.h>

using namespace std;

class LinkedList {
 public:
  int value;
  LinkedList *next;

  LinkedList(int value);
};

void removeNthNodeFromEnd(LinkedList *head, int n) {
  int counter = 1;
  LinkedList *first = head;
  LinkedList *second = head;

  while (counter <= n) {
    second = second->next;
    counter++;
  }
  if (second == NULL) {
    head->value = head->next->value;
    head->next = head->next->next;
    return;
  }
  while (second->next != NULL) {
    first = first->next;
    second = second->next;
  }
  first->next = first->next->next;
}