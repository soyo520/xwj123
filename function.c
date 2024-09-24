#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c;
    scanf("%lfx+%lf=%lf",&a,&b,&c);
    printf("x = %f",(c-b)/a);
    system("pause");
    return 0;
}