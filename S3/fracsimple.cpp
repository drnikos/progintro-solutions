#include <iostream>  
using namespace std;  
  
int simplify(int a, int p) {  
  if (a == 0 || p == 0) {  
    return a + p;  
  }  
  else if (a > p) {  
    return simplify(a%p, p);  
  }  
  else {  
    return simplify(p%a, a);  
  }  
}  
  
int main() {  
  int times;  
  cin >> times;  
  for (int i = 1; i<=times; i++) {  
    char operation;  
    cin.ignore();  
    cin >> operation;  
    int a, b, c, d, arithmitis, paronomastis;  
    cin >> a >> b >> c >> d;  
    switch (operation) {  
      case '+': {  
        arithmitis = a * d + c * b;  
        paronomastis = b * d;  
        break;  
      }  
      case '-': {  
        arithmitis = a * d - c * b;  
        paronomastis = b * d;  
        break;  
      }  
      case '*': {  
        arithmitis = a * c;  
        paronomastis = b * d;  
        break;          
      }  
      case '/': {  
        arithmitis = a * d;  
        paronomastis = b * c;  
        break;          
      }  
      default: ;  
    }  
    int res =  simplify(arithmitis, paronomastis);  
    arithmitis /= res;  
    paronomastis /= res;  
      
    cout << arithmitis << " " << paronomastis << endl;  
  }  
}
