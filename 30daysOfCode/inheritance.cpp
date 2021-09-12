#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    vector<int> temp;

    Student(string firstname, string lastname, int identification, vector<int> scores) : Person(firstname, lastname, identification) { temp = scores; };
    char calculate()
    {
        int avg = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            avg += temp[i];
        }

        avg = avg / temp.size();

        if (90 <= avg && avg <= 100)
        {
            return 'O';
        }
        else if (80 <= avg && avg < 90)
        {
            return 'E';
        }
        else if (70 <= avg && avg < 80)
        {
            return 'A';
        }
        else if (55 <= avg && avg < 70)
        {
            return 'P';
        }
        else if (40 <= avg && avg < 55)
        {
            return 'D';
        }
        else

        {
            return 'T';
        }
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}