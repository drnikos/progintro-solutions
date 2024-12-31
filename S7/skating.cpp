#include <iostream>  
#include <vector>  
using namespace std;  
  
int main() {  
  int n, a = 0;  
  cin >> n;  
  vector<int> kommatia;  
  for (int j = 0; j < n; j++) {  
    int m;  
    cin >> m;  
    kommatia.push_back(m);  
  }  
  
  int max_pieces = 0;  
  int temp_pieces = 0;  
  for (int i = kommatia.size() - 1; i >= 0; i--) {  
    temp_pieces += kommatia[i];  
    if (temp_pieces >= max_pieces) max_pieces = temp_pieces;  
  }  
  cout << max_pieces << endl;  
}
