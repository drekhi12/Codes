#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main()
{
   FILE *fp;
   char ch;

   fp = fopen(__FILE__,"r");
   if( fp == NULL){
    printf("File is not opened successfully");
   }else{
    do{
        ch = fgetc(fp);
        putchar(ch);
    }while(ch != EOF);

    fclose(fp);
   }
	cout<<"hey";
    return 0;
}
