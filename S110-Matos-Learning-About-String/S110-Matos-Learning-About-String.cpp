// S110-Matos-Learning-About-String.cpp :

#include <iostream>
#include <string>
using namespace std;
// ---------------------------------------------------------
void experiment01();
void experiment02();
void experiment03();

// ---------------------------------------------------------
int main()
{
    //experiment01();
    //experiment02();
    experiment03();
}

//----------------------------------------------------------
void experiment01()
{
    //extract individual character of a given string
    string s = "";
    string s2 = "";

    cout << "Enter a string" << endl;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        c = toupper(c);

        cout << i << "\t" << c << endl;
        s2 = c + s2 ;
    }

    cout << "New string s2 (reversed s1) is " << s2 << endl;
}
// --------------------------------------------------------------
void experiment02()
{
    //decide whether a sting is a palindrome 
    //(i.e. same text forward and backward)
    string s = "abaacaaba";
    cout << "Enter a string" << endl;
    getline(cin, s);

    char first, last;
    bool isPalindrome = true;

    for (int i = 0; i < s.size()/2; i++)
    {
        first = s[i];
        last = s[s.size() -1 - i];
        if (first != last)
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome == true)
        cout << s << " is a palindome! \n";
    else
        cout << s << " is NOT a palindrome \n";
}

//--------------------------------------------------------
void experiment03()
{
    //break dow a string into indivudual words
    string s = "Now is the time for all good men to come to the aid of the party";
    //cout << "Enter a string" << endl;
    //getline(cin, s);
    int pold = 0;
    string token = "";
    bool lastToken = false;

    while ( !lastToken && pold < s.size())
    {
        int pnew = s.find(' ', pold);
        if (pnew == -1)
        {
            token = s.substr(pold);
            lastToken = true;
        }
        else
        {
            token = s.substr(pold, pnew - pold);
        }
        cout << token << endl;
        pold = ++pnew;
    }
}