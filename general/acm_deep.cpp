#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
unsigned long long T;
unsigned long long sum,x,y,z;
sum=0;
x=0;
y=1;
scanf("%lld",&T);
while((T-2)>0)
{
    z=x+y;
    //printf("%lld",z);
    sum+=(z%10);
    sum=sum%10;
    x=y;
    y=z;
    T--;
}
sum=(sum+1)%10;
printf("%lld",sum);
}
