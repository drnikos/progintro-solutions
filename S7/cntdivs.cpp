#include <iostream>  
using namespace std;  
  
int gcd(int a, int b)  
{  
    if (a == b)  
        return a;  
    if (a < b)  
        return gcd(a, b - a);  
    else  
        return gcd(b, a - b);  
}  
int main()  
{  
    int n, res = 0;  
    cin >> n;  
    for (int i = 2; i <= n; i++)  
    {  
        if (gcd(i, n) > 1)  
            res++;  
    }  
    cout << res << endl;  
}
