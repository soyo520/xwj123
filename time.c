#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int h1,min1;
    int h2,min2;
    printf("时刻1:");
    scanf("%dh%dmin",&h1,&min1);
    printf("时刻2:");
    scanf("%dh%dmin",&h2,&min2);
    int time1,time2;
    time1 = h1*60+min1;
    time2 = h2*60+min2;
    int t;
    t = time1 - time2; 
    printf("差值为:%dh%dmin",t/60,t%60);
    system("pause");
    return 0;
}