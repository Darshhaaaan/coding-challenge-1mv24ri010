#include <iostream>
using namespace std;

int getPrimenumber() {
    int n, count;
    cout<<"enter a number to check prime or not"<<endl;
    cin>> n;
    if (n <= 1)
    {
        cout<<"The number "<<n<<" is not a prime number";
    }
    else {
        for (int i = 1; i < n; i++)
        {
            if (n%i == 0) {
                count++;
            }
        }
        if (count < 3)
        {
            cout<<"The number "<<n<<" is a prime number";
        }
        else {
            cout<<"The number "<<n<<" is not a prime number";
        }
    }
    cout<<" "<<endl;
    return 0;
}