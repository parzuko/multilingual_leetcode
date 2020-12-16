void main() {
  List<int> numbers = [2, 3, 4, 10, 20];
  int target = 10;
  int min = 0;
  int max = numbers.length - 1;
  int result = binarySearch(numbers, target, min, max);
  if (result == -1){
    print("Couldn't find $target :(");
  } else{
    print("Found $target at index $result!");
  }
}

int binarySearch(List<int> numbers, int target, int min, int max) {
  if (max >= min) {
    int mid = ((max + min) / 2).floor();
    if (numbers[mid] > target){
      return binarySearch(numbers, target, min, mid);
    } else if(numbers[mid] < target){
      return binarySearch(numbers, target, mid+1, max);
    }else{
      return mid;
    }
  }
  return -1;
}
