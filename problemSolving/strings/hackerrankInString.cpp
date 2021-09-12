#include <bits/stdc++.h>

using namespace std;

int main()
{
    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        string s;
        cin >> s;
        string hr = "hackerrank";
        int st = 0;
        for (int j = 0; j < s.size() && st < hr.size(); j++)
        {
            if (s[j] == hr[st])
            {
                st++;
            }
        }
        if (st == hr.size())
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}