#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void funct(char* p, int x){
	printf("The p is %s and the x is %i\n", p, x);
}

int main(){

printf("Hello World!\n");


/*just for me, not really concatenation
char str1[6]="Hello";
char str2[7]="World!";
printf("%s %s\n",str1, str2);*/

char* str1="Hello";
char* str2="World!";
char* str3= (char*) malloc(strlen(str1)+strlen(str2)+2);
strcpy(str3,str1);
str3[strlen(str1)]=' ';
strcpy(str3+strlen(str1)+1,str2);
printf("%s\n", str3);



funct("foo",7);
funct("error",23);
funct("Prog 1",100);

	return 0;
}