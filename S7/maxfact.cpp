#include <iostream>  
using namespace std;  
int fact(int n)  
{  
    if (n <= 1)  
        return 1;  
    return fact(n - 1) * n;  
}  
int main()  
{  
    int n;  
    cin >> n;  
    if (n == 1)  
        cout << 1 << endl;  
    else if (n == 2)  
        cout << 2 << endl;  
    else  
        for (int i = 0; i < n; i++)  
        {  
            if (fact(i) <= n && fact(i + 1) > n)  
            {  
                cout << i << endl;  
                break;  
            }  
        }  
}
