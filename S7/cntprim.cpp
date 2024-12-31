#include <iostream>  
using namespace std;  
  
int main()  
{  
    int n, res = 0;  
    cin >> n;  
    if (n == 1)  
    {  
        cout << 0 << endl;  
        return 0;  
    }  
    bool primes[n + 1];  
    primes[0] = primes[1] = false;  
    for (int a = 2; a < n + 1; a++)  
        primes[a] = true;  
  
    for (int i = 2; i * i < n + 1; i++)  
    {  
        if (primes[i])  
        {  
            for (int j = i; i * j < n + 1; j += 1)  
            {  
                primes[(i * j)] = false;  
            }  
        }  
    }  
    for (auto prime : primes)  
    {  
        prime ? res++ : res = res;  
    }  
  
    cout << res << endl;  
}
