#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> phoneBook;
    string name;
    long int num, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> num;
        phoneBook.insert(pair<string, int>(name, num));
    }

    while (cin >> name) //taking unknown number of inputs
    {
        if (phoneBook.find(name) == phoneBook.end())
        {
            cout << "Not found" << endl;
        }
        else
        {
            auto it = phoneBook.find(name);
            cout << it->first << '=' << it->second << endl;
        }
    }

    return 0;
}