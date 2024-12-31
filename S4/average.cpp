    #include <iostream>  
    #include <iomanip>  
    using namespace std;  
      
    int main() {  
      int N, M;  
      cin >> N >> M;  
      if (N <1 || M < 1 || N > 100 || M > 100) return 1;  
      double A[N][M];  
      
      for (int i = 0; i < N; i++) {  
        for (int j = 0; j < M; j++) {  
          cin >> A[i][j];  
        }  
        cin.ignore();  
      }  
      
      double mrow[N], mcol[M];  
      for (int i = 0; i < N; i++) {  
        double rsum = 0;  
        int j = 0;  
        for (j = 0; j < M; j++) rsum += A[i][j];  
        mrow[i] = rsum / j;   
      }  
      for (int j = 0; j < M; j++) {  
        double csum = 0;  
        int i = 0;  
        for (i=0;i < N; i++) csum += A[i][j];  
        mcol[j] = csum / i;  
      }  
      double linesum = 0;  
      double colsum = 0;  
      for (int i = 0; i < N; i++) linesum += mrow[i];  
      for (int i = 0; i < M; i++) colsum += mcol[i];  
      double mline = linesum / N;  
      double mcolumn = colsum / M;  
      
      cout << fixed << setprecision(3) << mline << endl;  
      cout << fixed << setprecision(3) << mcolumn << endl;  
    }
