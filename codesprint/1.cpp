/*Anna and Brian order  items at a restaurant, but Anna declines to eat any of the  item (where ) due to an allergy. When the check comes, they decide to split the cost of all the items they shared; however, Brian may have forgotten that they didn't split the  item and accidentally charged Anna for it.

You are given , , the cost of each of the  items, and the total amount of money that Brian charged Anna for her portion of the bill. If the bill is fairly split, print Bon Appetit; otherwise, print the amount of money that Brian must refund to Anna.

Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of items ordered) and  (the -based index of the item that Anna did not eat). 
The second line contains  space-separated integers where each integer  denotes the cost, , of item  (where ). 
The third line contains an integer, , denoting the amount of money that Brian charged Anna for her share of the bill.

Constraints

Output Format

If Brian did not overcharge Anna, print Bon Appetit on a new line; otherwise, print the difference (i.e., ) that Brian must refund to Anna (it is guaranteed that this will always be an integer).

Sample Input 0

4 1
3 10 2 9
12
Sample Output 0

5
Explanation 0 
Anna didn't eat item , but she shared the rest of the items with Brian. The total cost of the shared items is  and, split in half, the cost per person is . Brian charged her  for her portion of the bill, which is more than the  dollars worth of food that she actually shared with him. Thus, we print the amount Anna was overcharged, , on a new line.

Sample Input 1

4 1
3 10 2 9
7
Sample Output 1

Bon Appetit
Explanation 1 
Anna didn't eat item , but she shared the rest of the items with Brian. The total cost of the shared items is  and, split in half, the cost per person is . Because this matches the amount, , that Brian charged Anna for her portion of the bill, we print Bon Appetit on a new line.*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n,k,ch;
	int a[n];
	cin>>n;cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>ch;
	int sum=0;
	for(int i=0;i<n;i++){
		if(i!=k)
		{
			sum+=a[i];
		}
	}
	sum=sum/2;
	if(sum==ch){
		cout<<"Bon Appetit\n";
	}
	else{
		cout<<abs(ch-sum);
	}
}
