#include<stdio.h>
main()
{
    int a,b[10000],i=0,n;
    while(scanf("%d",&a)==1)
    {b[i++]=a;}
    n=i;
    for(i=n-1;i>0;i--)
    printf("%d ",b[i]);
}
//prints array in reverse

/*
Sample IP:
1 2 3 4

Sample OP:
4 3 2 1
*/
