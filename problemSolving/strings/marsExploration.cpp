#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string expectedString = "SOS";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != expectedString[i % 3])
            count++;
    }
    cout << count;
    return 0;
}