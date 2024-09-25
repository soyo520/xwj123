#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b;
    printf("你好，很高兴为你服务！\n");
    scanf("现在是%d点%d，一天过得太快了。",&a,&b);
    int c = a*60+b;
    const int day = 24*60;
    int d = day-c; 
    printf("是的，今天还有%dh%dmin。\n",d/60,d%60);
    int e;
    getchar();
    scanf("请告诉我%d小时后是几点。",&e);
    printf("是%d点%d。\n",++a,b);
    system("pause");
    return 0;
}