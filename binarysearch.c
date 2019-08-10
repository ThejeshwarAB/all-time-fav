//binary search
#include<stdio.h>
main()
{
int a[100],n,k,u,l,c=0;
//size of array
scanf("%d",&n);
//elements of array
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
//search element
scanf("%d",&k);
u=n-1;
l=0;
while(l<=u)
	{
	//binary search
		mid=(u+l)/2;
		if(a[mid]==k)
		{
			c=1;
			printf("%d",i+1);
			break;
		}
		else if(a[mid]>k)
		{
			l=mid+1;
		}
		else
		{
			u=mid-1;
		}
	}
if(!c)
	printf("Invalid key");
}

 
 
