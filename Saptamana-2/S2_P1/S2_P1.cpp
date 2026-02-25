#include "NumberList.h"
#include <stdio.h>
int main()
{
    NumberList a;
    a.Init();
    a.Add(19);
    a.Add(23);
    a.Add(12);
    a.Add(1);
    a.Add(4);
    a.Print();
    a.Sort();
    a.Print();
}