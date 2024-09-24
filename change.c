#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int AMOUNT=100;
    int price,change;
    printf("钱包余额(元):100\n");
    printf("商品价格(元):");
     scanf("%d",&price);
    change = AMOUNT - price;
    printf("余额(元)：%d\n",change);
    system("pause");
    return 0;

}
