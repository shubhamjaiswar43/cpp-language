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
    Person() {}
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << " " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string fname, string lname, int idNumber, vector<int> score)
    {
        firstName = fname;
        lastName = lname;
        id = idNumber;
        testScores = score;
    }
    char calculate()
    {
        int average = 0;
        for (int i = 0; i < testScores.size(); i++)
        {
            average += testScores[i];
        }
        average /= testScores.size();
        if (average <= 100 && average >= 90)
        {
            return 'O';
        }
        else if (average < 90 && average >= 80)
        {
            return 'A';
        }
        else if (average < 80 && average >= 70)
        {
            return 'B';
        }
        else if (average < 70 && average >= 55)
        {
            return 'C';
        }
        else if (average < 55 && average >= 40)
        {
            return 'D';
        }
        else if (average < 40)
        {
            return 'F';
        }
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cout << "Enter first Name : ";
    cin >> firstName ;
    cout << "Enter last Name : ";
    cin >> lastName ;
    cout << "Enter id No. : ";
    cin >> id ;
    cout << "Enter No. of subject : ";
    cin >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cout<<"Enter Marks of subject no."<<i+1<<" : ";
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}