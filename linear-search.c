#include<stdio.h>
#include<conio.h>

main()
{
int a[1000],n,k,i,c=0;
scanf("%d",&n);//size of array
for(i=0;i<n;i++)
scanf("%d",&a[i]);//array elements
scanf("%d",&k);//key element
for(i=0;i<n;i++)
if(a[i]==k)//linear search
{
print("%d",i+1);
c=1;
break;
}
if(!c)//flag value
printf("Invalid key");
}
