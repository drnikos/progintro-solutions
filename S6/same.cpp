#include "pzhelp"  
#include <iostream>  
  
  
int partition (int a[], int first, int last) {  
  int x = a[(first+last)/2];  
  int k = first, l = last;  
  
  while (true) {  
    while (a[k] < x) k++;  
    while (x < a[l]) l--;  
    if (k >= l) break;  
    swap(a[k], a[l]); k++; l--;  
  }  
  return l;  
}  
  
void quicksort (int a[], int first, int last) {  
  int m;  
  if (first >=  last) return;  
  m = partition(a, first, last);  
  quicksort(a, first, m);  
  quicksort(a, m+1, last);  
}  
  
  
int main () {  
  
  int N = READ_INT();  
  int r = N-1;  
  int A[50000], B[50000];  
  int lowest = 0, highest = 0;  
  if (N>0 && N<=50000) {  
    for (int i=0; i<N; i++) {  
      A[i] = READ_INT();  
    }  
    for (int i=0; i<N; i++) {  
      B[i] = READ_INT();  
    }  
  
    quicksort(A, 0, N-1);  
    quicksort(B, 0, N-1);  
  
    int idia;  
  
    for (int i=0; i<N; i++) {  
      idia = 0;  
      if (A[i] == B[i]) {  
        idia = 1;  
      }  
      else {  
        break;  
      }  
    }  
  
    if (idia == 1) {  
      WRITELN ("yes");  
      return 0;  
    }  
    else if (idia == 0) {  
      for (int i=0; i<N; i++) {  
        if (A[i]==B[i]) { continue; }  
        else if (A[i]<B[i]) {  
          lowest = A[i];  
          break;  
        }  
        else {  
          lowest = B[i];  
          break;  
        }  
      }  
  
  
  
      for (int j=r; j>=0; j--) {  
        if (A[j]==B[j]) { continue; }  
        else if (A[j]>B[j]) {  
          highest = A[j];  
          break;  
        }  
        else {  
          highest = B[j];  
          break;  
        }  
      }  
      cout << "no " << lowest << " " << highest << endl;  
    }  
  }  
  
}
