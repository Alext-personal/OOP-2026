#include "Math.h"
#include <cstring>
#include <stdarg.h>
int Math::Add(int a, int b)
{
    return a+b;
}
int Math::Add(int a, int b, int c)
{
    return a+b+c;
}
double Math::Add(double a , double b)
{
    return a+b;
}

double Math::Add(double a, double b, double c)
{
    return a+b+c;
}

int Math::Mul(int a, int b)
{
    return a*b;
}

int Math::Mul(int a, int b, int c)
{
    return a*b*c;
}

double Math::Mul(double a, double b)
{
    return a*b;
}

double Math::Mul(double a, double b, double c)
{
    return a*b*c;
}

int Math::Add(int count, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++)
        sum += va_arg(args, int);
    va_end(args);
    return sum;
}

char* Math::Add(const char* a, const char* b)
{
    int cSize = std::strlen(a) + std::strlen(b)+1;
    char* ret = new char[cSize];
    std::strcpy(ret, a);
    std::strcat(ret, b);
    return ret;
}
