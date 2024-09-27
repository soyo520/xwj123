#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b;
    printf("请输入两个数");
    scanf("%d %d",&a,&b);
    int max;
    if(a>=b){printf("大的是%d\n",a);}
    else{printf("大的是%d\n",b);}
    
    system("pause");
    return 0;
}