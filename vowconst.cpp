#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countChar() {
    int vow = 0, con = 0;
    string alp;
    cout<<"Enter the string to count the number of vowels and consonents"<<endl;
    cin.ignore();
    getline(cin, alp);
    for (char ap: alp)
    {
        ap=tolower(ap);
        if (isalpha(ap))
        {
            if (ap == 'a'||ap == 'e'|| ap == 'i'|| ap == 'o'|| ap == 'u')
            {
                vow++;
            }
            else {
                con++;
            }
        }
        
    }
    cout<<"Vowels: "<<vow<<endl<<"Consonants: "<<con<<endl;    
    return 0;
}