#include "Math.h"
#include <stdio.h>
int main()
{
    printf("%d\n",Math::Add(1,3));
    printf("%d\n",Math::Add(2,3,4));
    printf("%f\n",Math::Add(3.5,6.4));
    printf("%f\n",Math::Add(1.2,2.4,3.4));
    printf("%d\n",Math::Mul(1,2));
    printf("%d\n",Math::Mul(2,3,4));
    printf("%f\n",Math::Mul(3.5,6.4));
    printf("%f\n",Math::Mul(1.2,2.4,3.4));
    printf("%d\n",Math::Add(10,1,2,3,4,5,6,7,8,9,10));
    printf("%s\n",Math::Add("Hello","world!"));
}