#include <iostream>  
#include <string>  
#include <iomanip>  
#include <limits>  
using namespace std;  
  
int main() {  
  
  string str_sequence;  
  bool palindrome;  
  int str_lenght;  
  int palindromes=0, all=0;  
  double percentage;  
  
  int N;  
  cin >> N;  
  cin.ignore(numeric_limits<streamsize>::max(), '\n');  
  
  for (int i = 0; i < N; i++) {  
  
    getline(cin, str_sequence);  
    str_lenght = str_sequence.length();  
  
    if (str_lenght == 0) cout << "empty" << endl;  
    else if (str_lenght > 20) cout << "error" << endl;  
    else if (str_lenght == 1) {  
      palindromes++;  
      cout << "yes" << endl;  
    }  
    else {  
      for (int j = 0; j < str_lenght/2; j++){  
        palindrome = str_sequence[j] == str_sequence[str_lenght - (1 + j)];  
        if (!palindrome) break;  
      }  
  
      if (palindrome) {  
        palindromes++;  
        cout << "yes" << endl;  
      }  
      else cout << "no" << endl;  
    }  
    all++;  
  }  
  
  percentage = (static_cast<double>(palindromes)/all)*100;  
  cout << setprecision(3) << fixed;  
  cout << percentage << endl;  
  
  return 0;  
}
