//sourcecode
#include<stdio.h>
#include<stdlib.h>

main()
{
int n,i,j,min,a[100];

scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

//selection sort algo
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
if(a[j]>a[min])
min=j;
int t=a[i];
a[i]=a[min];
a[min]=a[i];
}

for(i=0;i<n;i++)
printf("%d",a[i]);
}
//ascending order

/*
Sample IP:
5
1 2 2 4 2

Sample OP:
1 2 2 2 4
*/
