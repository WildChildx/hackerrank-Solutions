/*
Logic for the program
here n and p are normal numbers found on pages
Let p/2 is page number of pageP
Let n/2 is page number of pageN

if we want to check from where p lies from behind
fromBehind=pageN - pageP

if we want to check where p lies from front it is p/2 which is pageP
let fromfront = pageP

compare minimum between fromBehind and fromFront and print minimum
 */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p)
{
    int fromBehind = 0, pageNumberP = p / 2, pageNumberN = n / 2, fromFront = 0;
    fromBehind = pageNumberN - pageNumberP;
    fromFront = pageNumberP;
    return (fromFront, fromBehind);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
