#include <bits/stdc++.h>

using namespace std;

void swap_numbers(int *first, int *second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}

void print_array(int array[], int size) {
  for (int i = 0; i < size; i++) cout << array[i] << " ";

  cout << endl;
}

void reverse_array(int array[], int start_index, int end_index) {
  while (start_index < end_index) {
    swap_numbers(&array[start_index], &array[end_index]);
    start_index++;
    end_index--;
  }
}

void reverse_recursively(int array[], int start_index, int end_index) {
  if (start_index >= end_index) return;
  swap_numbers(&array[start_index], &array[end_index]);
  reverse_recursively(array, start_index + 1, end_index - 1);
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int start_index = 0;
  int end_index = sizeof(array) / sizeof(array[0]) - 1;
  reverse_array(array, start_index, end_index);
  cout << "Reverse Array Is:\n";
  print_array(array, end_index + 1);
  reverse_recursively(array, start_index, end_index);
  cout << "Rearranged Array Is:\n";
  print_array(array, end_index + 1);
}