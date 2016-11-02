#include<stdio.h>
#include<stdlib.h>
main(){
	char a[20];
	int i,length=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		if((int)a[i]>=0&&(int)a[i]<11){
			printf("Please put digits instead of characters\n");
			exit(0);
		}
		length++;
	}
	if(length>10){
		printf("Put a 10 digit number\n");
		exit(0);
	}
	if(a[0]=='7'||a[0]=='8'||a[0]=='9')
	printf("Number Excepted\n");
	else
	printf("Number Not Excepted\n");
}
