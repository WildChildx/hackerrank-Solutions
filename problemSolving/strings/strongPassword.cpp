#include <bits/stdc++.h>

using namespace std;

int main()
{
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    //now use stl map and write logic for when every you encounter a specific type of character
    map<char, int>
        m;

    //write conditions
    for (auto c : numbers) //if encountered by numbers return 0 and so on...
        m[c] = 0;
    for (auto c : lower_case)
        m[c] = 1;
    for (auto c : upper_case)
        m[c] = 2;
    for (auto c : special_characters)
        m[c] = 3;

    int n;
    string s;
    cin >> n >> s;

    //declare a set so that the values don't repeat
    set<int> types;

    for (auto c : s)
    {
        types.insert(m[c]);
    }
    cout << max(6 - n, (4 - (int)types.size()));
    return 0;
}