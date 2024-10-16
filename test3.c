#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    const int a = 10;
    int score;
    scanf("%d",&score);
    double b = score/75.0;
    printf("%f\n",b);
    if(b<6){
        printf("common\n");
    }else if(b>=6&&b<8){
        printf("nice\n");
    }else if(b>=8&&b<10){
        printf("excellent\n");
    }else {printf("genius\n");}
    
    printf("%f\n",a-b);
    system("pause");
    return 0;

}