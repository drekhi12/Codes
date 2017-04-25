#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    unsigned long  int count=0,b,res_count=0;
    unsigned long int a[100000],res[100000];
    for(int i=0;i<n;i++){
        cin>>b;
        if(b==1){
            cin>>a[count];
            count++;
        }
        else if(b==2){
            count--;
        }
        else{
           res[res_count] = *max_element(a,a+count);
            res_count++;
        }
    }
    for(int i=0;i<res_count;i++){
        cout<<res[i]<<endl;
    }
    
    return 0;
}

