    #include <iostream>  
    using namespace std;  
      
    int main()  
    {  
        int n;  
        cin >> n;  
        if (n % 7 == 0 && n % 6 != 0)  
            cout << "yes" << endl;  
        else  
            cout << "no" << endl;  
    }
