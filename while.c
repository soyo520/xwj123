#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,n=0;
    printf("请输入一个两位数以上的数");
    scanf("%d",&a);
   
    if(a<100)
    {printf("error\n");}
    else
    {
    while(a>0){a /= 10;n++;}
    printf("是%d位数\n",n);
    }
    
    system("pause");
    return 0;
}