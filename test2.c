#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("输入3个100内的正整数：");
    int a,b,c;
    int d = 0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>100||b>100||c>100)
    {printf("error\n");}
    else
    {
        printf("公因数有：");
        while(d<100)
        {
            d++;
            if(a%d==0 && b%d==0 && c%d==0)
            {printf("%d ",d);}
        }
    }

system("pause");
return 0;
}