#include<stdio.h>
#define N 20

int main()
{
    int n,j,m=1,i=0,a[N];
    for(j=0;j<N;j++)
    {
        scanf("%d",&a[j]);
        if(a[j]==0)
        {
            break;
        }
    }
    for(j=0;j<N;j++)
    {
        n=a[j];
        if(n==0)
        {
            break;
        }
        while(i!=m)
        {
            if(n%m!=1)
            {
                m++;
                i=0;
                n=a[j];
            }
            else
            {
                n=n-n/m-1;
                i++;
            }
            if(m==n)
            {
                printf("no solution ");
                break;
            }
        }
        if(n%m==0&&i==m)
        {
            printf("%d ",m);
        }
        i=0;
        m=1;
    }
    
    return 0;
}


    

