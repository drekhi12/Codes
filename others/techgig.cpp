#include <iostream>
#include <string.h>
using namespace std;
#include<locale>
main(){
	locale loc1,loc2;
        string a,b,c,d;
        cin>>a;
	cin>>b;
      
      for(int i=0;i<a.length();i++)
      {
          c+=tolower(a[i],loc1);
      }
      
      int len= b.length();
      for(int i=0;i<len;i++){
          d+=tolower(b[i],loc2);
      }
      
      int found=d.find(c,0);
      int count=0;
      while((d.find(c,found+1)!=-1)&&d.find(c,found+1)<len){
      	count++;
      	cout<<"ya";
      }
      cout<<count;

}/*
cAda
AbrAcadAbRa*/