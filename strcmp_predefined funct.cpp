#include <stdio.h>
#include <string.h>

int main()
{
	char ls[20];
	char rs[20];
	
	printf("Enter the 1st string-");//left string
	gets(ls);
	printf("Enter the 2nd  string-");//right string
	gets(rs);

int res=strcmp(ls,rs);//Take two string argument and compare them lexographically and return a integer
	
	if(res==0)
	printf("Strings are equal");//Identical
	if(res>0)
	printf("String are Unequal and the  unmatched char of ls ASCII code is greter than rs ");
	if(res<0)
	printf("String are Unequal and the unmatched char of ls ASCII code is lesser than rs ");
return 0;
}

		
	
