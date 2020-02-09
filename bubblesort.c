//sourcecode
#include<stdio.h>
#include<stdlib.h>

main()
{
int n,i,j,a[100];

scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

//bubble sort algo
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
{
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}

for(i=0;i<n;i++)
printf("%d",a[i]);
}
//ascending order

/*
Sample IP:
5
1 3 2 4 5

Sample OP:
1 2 3 4 5 
*/
