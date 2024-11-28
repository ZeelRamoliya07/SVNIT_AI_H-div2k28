#include<stdio.h>
int main()
{
    int N,M,a,b,k,sum=0; //a=starting index,b=last index,k=number of candy has to be entered in selected jars
    scanf("%d %d",&N,&M);
    for(int i=1;i<=M;i++)
    {
        scanf("%d %d %d",&a,&b,&k);
        sum+=(b-a+1)*k;
    }
    printf("%d",sum/N);
    return 0;
}