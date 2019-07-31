#include<stdio.h>
#include<conio.h>
main()
{
int a[100],n,k,i,c=0;
//size of array
scanf("%d",&n);
//elements of array
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
//search element
scanf("%d",&k);
for(i=0;i<n;i++)
	if(a[i]==k)
	{
		c=1;
		printf("%d",i+1);
		break;
	}
if(!c)
	printf("Invalid key");
}
