/*Consider a -slot combination lock where each slot contains a dial numbered with the ten sequential decimal integers in the inclusive range from  to . In one operation, you can choose a slot and rotate the dial by one click, either in the positive direction (to increase the displayed number by ) or the negative direction (to decrease the displayed number by ). Note that, due to the cyclical nature of the dial, the next number after  is  and the number before  is ). For example, if the number  is currently displayed on the dial, you can rotate the dial to either  (positive direction) or  (negative direction) in a single operation.

combination lock

Given the initial configuration of numbers in each slot and some desired configuration of numbers, determine the minimum number of operations you must perform to change the lock's slots to the desired configuration.

Input Format

The first line contains  space-separated integers denoting the current slot configuration. 
The second line contains  space-separated integers denoting the desired slot configuration.

Constraints

Each number in a slot is .
Output Format

Print a single integer denoting the minimum number of moves to change this configuration to the correct one.

Sample Input

1 2 9 5 7
1 3 2 0 7  
Sample Output

9
Explanation

We perform the following operations on each slot:

Slot : We rotate the dial  times because this slot is already displaying the desired number (i.e., ).
Slot : We rotate the dial  time, changing it from .
Slot : We rotate the dial  times, changing it from .
Slot : We rotate the dial  times, changing it from .
Slot : We rotate the dial  times because this slot is already displaying the desired number (i.e., ).
Finally, we sum the number of operations performed at each slot: . Thus, we print  as our answer.*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n=5;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int sum=0,val=0;
	for(int i=0;i<5;i++){
		 if(abs(a[i]-b[i])<=5){
			val=abs(a[i]-b[i]);
			sum+=val;
		}
			else if(abs(a[i]-b[i])>5){
				val=abs(abs(a[i]-b[i])-10);
			sum+=val;
	}
	}
	cout<<sum;
}
