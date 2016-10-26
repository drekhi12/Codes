#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int printDivisors(int n);
int main() {
  long long int n;
  cin>>n;
  long long int a[n];
  for(long long int i=0;i<n;i++){
  	cin>>a[i];
  }
  long long int noofdays;
  cin>>noofdays;
  long long int res[n];
  for(long long int i=0;i<n;i++){
  	res[i]=printDivisors(a[i]);
  }
  long long int count=0,sum=0;
  sort(res,res+n);
  for(long long int i=0;i<n;i++){
  	sum+=res[i];
  	if(sum<=noofdays){
  		count++;
	  }
  }
  cout<<count;
  return 0;
}

int printDivisors(int n)
{
	int sum=0;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                sum++;
 
            else // Otherwise print both
                sum=sum+2;
        }
    }
    return sum;
}
