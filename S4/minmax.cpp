#include <iostream>  
#include <limits.h>  
using namespace std;  
  
int main() {  
  int N, M;  
  cin >> N >> M;  
  if (N <1 || M < 1 || N > 100 || M > 100) return 1;  
  int A[N][M];  
  
  for (int i = 0; i < N; i++) {  
    for (int j = 0; j < M; j++) {  
      cin >> A[i][j];  
    }  
    cin.ignore();  
  }  
  
  int min_n[N], max_m[M];  
  for (int i = 0; i < N; i++) {  
    int temp_min = INT_MAX;  
    for (int j = 0; j < M; j++) {if (A[i][j] < temp_min) temp_min = A[i][j];}  
    min_n[i] = temp_min;  
  }  
  for (int j = 0; j < M; j++) {  
    int temp_max = INT_MIN;  
    for (int i=0;i < N; i++) if (A[i][j] > temp_max) temp_max = A[i][j];  
    max_m[j] = temp_max;  
  }  
  int line = min_n[0];  
  int col = max_m[0];  
  for (int i = 0; i < N; i++) if (min_n[i] > line) line = min_n[i];  
  for (int i = 0; i < M; i++) if (max_m[i] < col) col = max_m[i];  
  
  cout << col << endl;  
  cout << line << endl;  
  
  
}
