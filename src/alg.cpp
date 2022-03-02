// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int l = 0;
  int r = size - 1;
  int mid;
  while (l <= r) {
    mid = (l + r) / 2;  
    if (arr[mid] == value) {
      int m = mid;
      while (arr[mid] == value) {
        count++;
        mid--;
      }
      while (arr[m+1] == value) {
        count++;
        m++;
      }
      return count;
    } else if (arr[mid] > value) {
      r = mid - 1; 
    } else {
      l = mid + 1;
    }
  }
  return count;
}
