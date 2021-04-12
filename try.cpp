#include<stdio.h>
#include<string.h>
int main(){
	char s[] = " this is a string";
	int i =0;
	for(i=0;i<strlen(s);i++){
		printf("%c",s[i]);
	}
}
