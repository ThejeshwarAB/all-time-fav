//factorial
#include <stdio.h>

long long int fact(long long int num)
{   if(num<0)
    return -1;
    if(num==1||num==0)
    return 1;
    else
    return num*fact(num-1);
}

main()
{
    long long int n;
    scanf("%lld",&n);
    printf("%lld\n",fact(n));
}
