#include <stdio.h>
#include <string.h>


int main() 
{
	char s1[]="Hello";
	char s2[]="World";
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	for(int i=0;i<length1;i++)
	 printf("%c",s1[i]);
	for(int i=0;i<length2;i++)
	 printf("%c",s2[i]);
}
