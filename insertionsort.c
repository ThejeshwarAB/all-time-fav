//sourcecode
#include<stdio.h>
#include<stdlib.h>

main()
{
int n,i,j,a[100];

scanf("%d",*n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

//insertion sort algo
for(i=1;i<n;i++)
{
int min=a[i];
for(j=i-1;j>=0&&a[j]<min;j--)
a[j+1]=a[j];
a[j+1]=min;
}

for(i=0;i<n;i++)
printf("%d",a[i]);
}
//ascending order


/*
Sample IP:
5
6 7 5 4 2

Sample OP:
2 4 5 6 7 
*/
