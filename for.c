#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("请输入一个非负数：");
    int a,b=1;
    int n=0,i=1;
    scanf("%d",&a);
    int c=a;
    if(a<0){printf("error\n");}
    else{
        do{c/=10;n++;}
        while(c>0);
        printf("是%d位数\n",n);
        if(a==0){printf("0!=1\n");}
    else{
        for(i=1;i<=a;i++){
            b*=i;
        }
        printf("%d!=%d\n",a,b);
    }
    }
   
   system("pause");
   return 0;
}