#include <cstdio>

#include "Student.h"
int main()
{
    Student s1,s2;
    s1.SetName("Andrei");
    s2.SetName("Andreea");
    s1.SetMathGrade(10);
    s2.SetMathGrade(200);
    s1.SetHistoryGrade(2);
    s2.SetHistoryGrade(10);
    s1.SetEnglishGrade(6);
    s2.SetEnglishGrade(6);
    printf("Numele lui s1 : %s\n" , s1.GetName());
    printf("Numele lui s2 : %s\n" , s2.GetName());
    printf("Nota la mate a lui s1 : %f \n" , s1.GetMathGrade());
    printf("Nota la mate a lui s2 : %f \n" , s2.GetMathGrade());
    printf("Nota la engleza a lui s1 : %f \n" , s1.GetEnglishGrade());
    printf("Nota la engleza a lui s2 : %f \n" , s2.GetEnglishGrade());
    printf("Nota la istorie a lui s1 : %f \n" , s1.GetHistoryGrade());
    printf("Nota la istorie a lui s2 : %f \n" , s2.GetHistoryGrade());
    printf("Media lui s1 : %f \n" , s1.GetAverageGrade());
    printf("Media lui s2 : %f \n" , s2.GetAverageGrade());
    printf("%d\n",Student::CompareByName(s1,s2));
    printf("%d\n",Student::CompareByMathGrade(s1,s2));
    printf("%d\n",Student::CompareByEnglishGrade(s1,s2));
    printf("%d\n",Student::CompareByHistoryGrade(s1,s2));
    printf("%d\n",Student::CompareByAverageGrade(s1,s2));
}