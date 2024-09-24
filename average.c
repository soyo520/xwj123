#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("请输入两个数");
    int a,b;
    scanf("%d,%d",&a,&b);
    double c;
    c=(a+b)/2.0;
    printf("这两个数的平均值是%f\n",c);
    system("pause");
    return 0;
}