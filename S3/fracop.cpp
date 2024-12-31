#include <iostream>  
#include <cmath>  
using namespace std;  
int gcd(int a, int b) {  
  if (a == 0 || b == 0) return a+b;  
  else if (a > b) {  
    return gcd(a % b, b);  
  }  
  else {  
    return gcd(b % a, a);  
  }  
  
}  
void simplify(int arithm, int paron) {  
  bool arnitikos = false;  
  if (arithm < 0 && paron < 0) {  
    arithm = -arithm;  
    paron = -paron;  
  } else if (arithm < 0 && paron > 0) {  
    arnitikos = true;  
    arithm = -arithm;  
  } else if (arithm > 0 && paron < 0) {  
    arnitikos = true;  
    paron = -paron;  
  }  
  int res = gcd(arithm, paron);  
  arithm /= res;  
  paron /= res;  
  // Akeraio meros  
  int akeraio_meros = floor(arithm / paron);  
  arithm = arithm - akeraio_meros * paron;  
  if (arnitikos) {  
    cout << "-" << akeraio_meros << " " << arithm << " " << paron << endl;  
  } else {  
    cout << akeraio_meros << " " << arithm << " " << paron << endl;  
  }  
  
}  
  
int main() {  
  bool error = false;  
  int no_replays;  
  cin >> no_replays;  
  for (int i=1; i<= no_replays; i++) {  
    int a, b, c, d, arithmitis, paronomastis;  
    char operation;  
    cin >> operation;  
    cin >> a >> b >> c >> d;  
    switch (operation) {  
      case '+': {  
        arithmitis = (a * d) + (c * b);  
        paronomastis = b * d;  
        break;  
      }  
      case '-': {  
        arithmitis = (a * d) - (c * b);  
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
        if (d == 0){ cout << "error" << endl;error = true;}  
        break;  
      }  
    }  
   if (paronomastis == 0) {cout << "error" << endl;error = true;}  
   if (error) continue;  
   simplify(arithmitis, paronomastis);  
  }  
}
