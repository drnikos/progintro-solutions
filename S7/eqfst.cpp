#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main()  
{  
    long double a, b;  
    cin >> a >> b;  
    if (a == 0.0 && b != 0.0) cout << "impossible" << endl;  
    else if (a == 0.0) cout << "trivial" << endl;  
    else  
    {  
        long double res = (-b) / a;  
        if (res == 0) cout << fixed<< setprecision(6) << -res << endl;  
        else cout << fixed<< setprecision(6) << res << endl;  
    }  
}
