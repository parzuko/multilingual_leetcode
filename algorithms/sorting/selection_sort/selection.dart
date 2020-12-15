void main(){
  List<int> numbers = [412, 41513,223,90,2, 1];
  print("While unsorted, numbers are: ${numbers}");
  selection(numbers);
  print("After Sorting, numbers are: ${numbers}");

}



// Selection Sort
void selection(List _array) async {
  for (int i = 0; i < _array.length - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < _array.length - 1; j++) {
      if (_array[minIdx] > _array[j]) {
        minIdx = j;
      }
    }
    int temp = _array[i];
    _array[i] = _array[minIdx];
    _array[minIdx] = temp;
  }
}