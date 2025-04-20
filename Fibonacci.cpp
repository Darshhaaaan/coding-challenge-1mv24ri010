#include <iostream>
#include "primenumber.h" 
#include "vowconst.h"
#include "startext.h"
using namespace std;

int main() {
    int a, b, n;
    cout<<"enter the number of iteratives for fibonacci series ";
    cin>> n;
    if (n > 0)
    {
        a = 0;
        b = 1;
        for (int i = 0; i < n; i++)
        {
            cout<< a << '\t';
            int c = a + b;
            a=b;
            b=c;
        }
    }
    else {
        cout<<"enter a number greater than 0!"<<endl;
    }
    cout<<" "<<endl;
    getPrimenumber();
    countChar();
    createStar();
    return 0;
}
