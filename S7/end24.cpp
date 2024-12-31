#include <iostream>  
using namespace std;  
  
int main()  
{  
    int n;  
    cin >> n;  
    int sq = n * n;  
    int last = sq % 10;  
    sq /= 10;  
    int nlast = sq % 10;  
    if (last == 4 && nlast == 2)  
        cout << "yes" << endl;  
    else  
        cout << "no" << endl;  
}
