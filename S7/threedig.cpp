#include <iostream>  
using namespace std;  
  
int main()  
{  
    int n;  
    cin >> n;  
    if (n / 100 >= 1 && n / 1000 == 0)  
        cout << "yes" << endl;  
    else  
        cout << "no" << endl;  
}
