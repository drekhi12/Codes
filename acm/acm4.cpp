#include<iostream>
#include<string>
using namespace std;
int dayofweek(int d,int m,int y);
int main()
{
    int t;
    cin>>t;
    while(t>0)
        {
    int n;
    cin>>n;
    int day = dayofweek(1, 1, n);
        string a[]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
    cout<<a[day-1]<<endl;
        t--;
    }
 
    return 0;
}
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

