#include<string>
#include<iostream>
using namespace std;
int main()
{
string a,b,c;
int N,i,k;
cin>>N;
while(N>0)
{k=0;
int sum=0;

    cin>>a>>b;
    int sum2=b.length();
    if(a.compare(b)==0)
        printf("YES\n");
    else if(a.length()<b.length())
        printf("NO\n");
    else
    {
        for(i=0;i<(a.length());i++)
        {
            if(i==0)
            {
                if(a[i]!=a[i+1])
            sum++;
            
            }
            else if(a[i-1]==a[i]||a[i]==a[i+1])
            {sum++;
            i++;}
        }
        if(sum==sum2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    N--;
}
}
