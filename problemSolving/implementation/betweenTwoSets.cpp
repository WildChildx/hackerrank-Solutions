#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int getTotalX(vector<int> a, vector<int> b)
{
    bool isfactor;
    vector<int> factors;
    // check for all the natural numbers from 1 to smallest value of b array
    for (int i = 1; i <= b[0]; i++)
    {
        if (b[0] % i == 0)
        {
            // check if it is factor of other elements of B array
            isfactor = true;
            for (int j = 1; j < b.size(); j++)
            {
                // If not don't push it
                if (b[j] % i != 0)
                {
                    isfactor = false;
                    break; //breaks the inner loop and enters the outer for loop
                }
            }
            // If it passes all tests, add it to the vector
            if (isfactor)
                factors.push_back(i);
        }
    }

    // check if the factors recieved above are divisible by elements of A array
    for (int i = 0; i < a.size(); i++)
    {
        // check if it is the factor of each A values
        for (int j = 0; j < factors.size(); j++)
        {
            // If the factor is not divisible by A-value, remove it from vector
            if (factors[j] % a[i] != 0)
            {
                factors.erase(factors.begin() + j);
                j--;
            }
        }
    }

    return factors.size();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++)
    {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    getTotalX(arr, brr);

    fout << total << "\n";

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

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
