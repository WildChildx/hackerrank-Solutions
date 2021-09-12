#include <bits/stdc++.h>
using namespace std;

int valid(string x)
{
    int n = x.size();
    //if the ith char is equal to i-1th char return false else true
    for (int i = 1; i < n; i++)
        if (x[i] == x[i - 1])
            return false;
    return true;
}

int main()
{
    int ans = 0, n;
    cin >> n;
    string s;
    cin >> s;
    for (char a = 'a'; a <= 'z'; ++a)
        for (char b = 'a'; b <= 'z'; ++b)
            if (a != b)
            {
                //if a or b are located a end of the given string drop that iteration
                if (s.find(a) == string::npos)
                    continue;
                if (s.find(b) == string::npos)
                    continue;
                //if no then make a new string
                string x;
                for (char ch : s) //store the character in x
                    if (a == ch || b == ch)
                        x.push_back(ch);
                if (valid(x)) //print max size if the string is valid
                {
                    ans = max(ans, (int)x.length()); //check the max possible length between ans and length of string x and print it
                }
            }
    cout << ans;
}