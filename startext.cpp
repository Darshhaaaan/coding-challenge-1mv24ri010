#include <iostream>
#include <string>

using namespace std;

int createStar() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>> n;
    for (int i = 1; i < n+1; i++)
    {
        int o = n-i;
        int p = 2*i-1;
        string spc, star;
        for (int j = 0; j < o; j++)
        {
            spc += ' ';
        }
        for (int k = 0; k < p; k++)
        {
            star += '*';
        }
     cout<< spc + star<< endl;
    }
    return 0;
}