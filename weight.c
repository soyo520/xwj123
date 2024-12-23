#include<stdio.h>
#define N 1000

void fun(int lo,int hi,int k)
{
    int i,j,a,b,c,d,q=0,t=0;
    int a1[N],a2[N];
    for(i=lo;i<=hi;i++)
    {
        j=i;
        while(j!=1)
        {
            if(j%2==0)
            {
                j/=2;
            }
            else
            {
                j=j*3+1;
            }
            t++;
        }
        a1[q]=t;
        a2[q]=i;
        q++;
        t=0;
    }
    for(a=0;a<hi-lo;a++)
    {
        for(b=0;b<hi-lo-a;b++)
        {
            if(a1[b]>a1[b+1])
            {
                c=a1[b];
                a1[b]=a1[b+1];
                a1[b+1]=c;
                d=a2[b];
                a2[b]=a2[b+1];
                a2[b+1]=d;
            }
        }
    }
    printf("%d\n",a2[k-1]);
}

int main()
{
    int lo,hi,k;
    scanf("%d%d%d",&lo,&hi,&k);
    fun(lo,hi,k);

    return 0;
}