#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {

    int i=2384995;
    char buf[100];

    itoa(i, buf, 10); // 10 is the base decimal
	count(buf[0].begin(),buf[0].end(),'0');
    cout<<strlen(buf);


    return 0;
}
