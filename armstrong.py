#armstrong
n=input()
l=len(n)
n=int(n)
m=n
s=0
while(m):
    r=m%10
    s=s+r**l
    m=m//10
if(s==n):
    print("Armstrong number")
else:
    print("Not an Armstrong number")
