#include <stdio.h>
void fun1(int arr[])
{
    int i=0,j=0,t=0;
    for(t=3;t>0;t--){
        for(i=0;i<t;i++){
            if(arr[i]>arr[i+1]){
                j=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=j;
            }
        }
    }    
}

int main(void)
{
    
    int i,l,k,q,r,j,t;
    int arr[4]={0};
    int s=0;
    int n=0;
    scanf("%d",&n);
    for(r=n;s<8;s++){
        for(i=0;i<4;i++){
            arr[i]=r%10;
            r/=10;
        } 
        fun1(arr);
        j=arr[0];
        t=arr[3];
        for(i=1;i<4;i++){
            k=arr[i];
            q=arr[3-i];
            for(l=1;l<=i;l++){
                k*=10;
                q*=10;
            }
            j+=k;
            t+=q;
        }
        r=j-t;
        printf("%d-%d=%d\n",j,t,r);
    }  

    return 0;
}