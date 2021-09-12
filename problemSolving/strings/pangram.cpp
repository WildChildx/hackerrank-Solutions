#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string my_str, alpha = "abcdefghijklmnopqrstuvwxyz";
    set<char> count;
    getline(cin, my_str);
    transform(my_str.begin(), my_str.end(), my_str.begin(), ::tolower);
    for (auto i : alpha)
        for (auto j : my_str)
            if (j == i)
                count.insert(j);

    if (count.size() == 26)
        cout << "pangram";
    else
        cout << "not pangram";
    return 0;
}