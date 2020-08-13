#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	
	printf("Enter a String:");
	gets(s);
printf("The Reverse of String %s:%s",s,strrev(s));//REVERSES THE STRING AND RETUR IT
return 0;
}

