#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, i;
    vector<int> v, a;

    cin >> n;
    for (i = 0; n > 0; i++)
    {
        a.push_back(n % 2);
        n = n / 2;
    }

    int count = 0;
    for (int i = 0; i <= a.size(); i++)
    {

        if (a[i] == 1)
        {

            count++;
        }
        else if (a[i] == 0 || i == a.size())
        {
            v.push_back(count);
            count = 0;
        }
    }

    cout << *max_element(v.begin(), v.end());
    return 0;
}