//ascii values of upper case characters ranges from 65 ('A') to 90 ('Z')
//ascii values of lower case characters ranges from 97 ('a') to 122 ('z')

//logic
/*
    store the ascii value in a variable 
    char c = s[i]
    If k is a multiple of 26, then rotating the alphabets in the string by k has no effect on the string.
    take k= k % 26(this will wrap up the value of k within 26)

    add the value then check if the value is greater than 122
    c + k;

    if c = uppercase then 65<=c<=90
       c = lowercase then 97<=c<=122

    if the value is greater than 122 wrap it up with 122 itself 
    if(c>122)        (here c is lowercase)
        c=96+(c%122);


*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int k;
    cin >> k;

    k %= 26;
    for (int i = 0; i < n; i++)
    {
        int c = s[i];
        if (c >= 'a' && c <= 'z')
        { // Lowercase characters
            c += k;
            if (c > 'z')
            {                       // C exceeds the ascii range of lowercase characters.
                c = 96 + (c % 122); // wrapping from z to a
            }
        }
        else if (c >= 'A' && c <= 'Z')
        { // Uppercase characters
            c += k;
            if (c > 'Z')
            {                      // C exceeds the ascii range of uppercase characters.
                c = 64 + (c % 90); //wrapping from Z to A
            }
        }
        cout << (char)c;
    }
    cout << endl;
    return 0;
}