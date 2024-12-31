#include <iostream>  
using namespace std;  
  
void fail() {  
  cout << "no" << endl;  
  exit(0);  
}  
  
int main() {  
  int dimentions;  
  cin >> dimentions;  
  int arr[dimentions][dimentions];  
  
  for (int i = 0; i < dimentions; i++) {  
    for (int j = 0; j < dimentions; j++) {  
      cin >> arr[i][j];  
    }  
  }  
  
  int checksum = 0;  
  for (int i = 0; i < dimentions; i++) {  
    checksum += arr[0][i];  
  }  
  
  int res1 = 0, res2 = 0;  
  for (int i = 0; i < dimentions; i++) {  
    int rowSum = 0, colSum = 0;  
  
    for (int j = 0; j < dimentions; j++) {  
      if (arr[i][j] > (dimentions * dimentions) - 1) {  
        fail();  
      }  
      rowSum += arr[i][j];  
      colSum += arr[j][i];  
    }  
  
    if (rowSum != checksum || colSum != checksum) {  
      fail();  
    }  
  
    res1 += arr[i][i];  
    res2 += arr[i][dimentions - 1 - i];  
  }  
  
  if (res1 != res2) {  
    fail();  
  }  
  if (arr[0][1] == arr[0][2]) fail();  
  cout << "yes" << endl;  
}

