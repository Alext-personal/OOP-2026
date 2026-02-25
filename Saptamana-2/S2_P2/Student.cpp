#define DEFAULTGRADE 5
#include "Student.h"
#include <cstring>
void Student::SetName(const char *name)
{
    this -> name = new char[strlen(name)];
    strcpy(this->name, name);
}

char* Student::GetName()
{
    return this->name;
}

void Student::SetMathGrade(float newGrade)
{
    if (newGrade < 1 || newGrade > 10)
    {
        this -> mathGrade = DEFAULTGRADE;
        return;
    }
    this -> mathGrade = newGrade;
}

float Student::GetMathGrade()
{
    return this -> mathGrade;
}

void Student::SetEnglishGrade(float newGrade)
{
    if (newGrade < 1 || newGrade > 10)
    {
        this -> englishGrade = DEFAULTGRADE;
        return;
    }
    this -> englishGrade = newGrade;
}

float Student::GetEnglishGrade()
{
    return this -> englishGrade;
}

void Student::SetHistoryGrade(float newGrade)
{
    if (newGrade < 1 || newGrade > 10)
    {
        this -> historyGrade = DEFAULTGRADE;
        return;
    }
    this -> historyGrade = newGrade;
}

float Student::GetHistoryGrade()
{
    return this -> historyGrade;
}

float Student::GetAverageGrade()
{
    float avg = this -> mathGrade + this -> englishGrade + this -> historyGrade;
    avg /= 3.0;
    return avg;
}

int Student::CompareByName(Student a, Student b)
{
    return strcmp(a.GetName(), b.GetName());
}

int Student::CompareByMathGrade(Student a, Student b)
{
    float aGrade = a.GetMathGrade();
    float bGrade = b.GetMathGrade();
    if (aGrade > bGrade)
        return 1;
    if (aGrade < bGrade)
        return -1;
    return 0;
}

int Student::CompareByEnglishGrade(Student a, Student b)
{
    float aGrade = a.GetEnglishGrade();
    float bGrade = b.GetEnglishGrade();
    if (aGrade > bGrade)
        return 1;
    if (aGrade < bGrade)
        return -1;
    return 0;
}

int Student::CompareByHistoryGrade(Student a, Student b)
{
    float aGrade = a.GetHistoryGrade();
    float bGrade = b.GetHistoryGrade();
    if (aGrade > bGrade)
        return 1;
    if (aGrade < bGrade)
        return -1;
    return 0;
}

int Student::CompareByAverageGrade(Student a, Student b)
{
    float aGrade = a.GetAverageGrade();
    float bGrade = b.GetAverageGrade();
    if (aGrade > bGrade)
        return 1;
    if (aGrade < bGrade)
        return -1;
    return 0;
}
