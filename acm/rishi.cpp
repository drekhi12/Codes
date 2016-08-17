#include <string>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;
int main()
{	
	long long int t;
 	cin>>t;
 	while(t>0)
	{
    	unsigned long long  int n;cin>>n;
    	 if(n<2)
         {
         cout<<n<<endl;
     	}
     	else
		 	{
         
    			unsigned long long int power=1;
				
       			  	unsigned long long int sum=0;
                 unsigned long long int temp;
                 for(unsigned long long int i=1;i<=n;i++){
                 	power=power*10;
				 }
				 //cout<<power<<endl;
        		 //unsigned long long int d = pow(10,n);
				for(unsigned long long int i=1;i<power;i++)
				{
					std::stringstream str_stream;
				 std::string str;
					str_stream << i;
 					str = str_stream.str();
					 
					 
 					while(str.size()!=n)
 					{
 						str.insert(0,"0");
					 }
					 cout<<"str is "<<str<<endl;
					 temp=count(str.begin(),str.end(),'0');
					if(temp%2!=0)
						{
						sum++;
					}
					str.clear();
					}

         cout<<sum;}
     t--;
 }
}

