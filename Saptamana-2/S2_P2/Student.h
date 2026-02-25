#pragma once
class Student
{
    char *name;
    float mathGrade;
    float englishGrade;
    float historyGrade;
public:
    void SetName(const char* name); // ar fi mai usor sa fac si un constructor
    char* GetName();
    void SetMathGrade(float newGrade);
    float GetMathGrade();
    void SetEnglishGrade(float newGrade);
    float GetEnglishGrade();
    void SetHistoryGrade(float newGrade);
    float GetHistoryGrade();
    float GetAverageGrade();
    static int CompareByName(Student a, Student b);
    static int CompareByMathGrade(Student a, Student b);
    static int CompareByEnglishGrade(Student a, Student b);
    static int CompareByHistoryGrade(Student a, Student b);
    static int CompareByAverageGrade(Student a, Student b);
};
