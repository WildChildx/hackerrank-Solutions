#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    int time = 0;
    //take first two digits
    string timeString = s.substr(0, 2);
    //convert into int and store in time
    time = stoi(timeString);
    //if PM is entered
    if (s.at(8) == 'P' && time < 12)
    {
        //add 12 to convert into 24 hr format
        time += 12;
        //move to timestring
        timeString = to_string(time);
        //append the remaining substring
        timeString.append(s.substr(2, 6));
        return timeString;
    }
    else if (s.at(8) == 'A' && time >= 12)
    {
        time -= 12;
        //move to timestring
        timeString = to_string(time);
        //append the remaining substring
        timeString.append(s.substr(2, 6));
        return timeString;
    }
    else
    {
        ;
        return s.substr(0, 8);
    }
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);
    std::cout << std::setw(8) << std::setfill('0') << std::right;
    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
