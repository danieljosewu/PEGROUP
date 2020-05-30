/*************************************************************************
	> File Name: strlen.c
	> Author: wujl
	> Mail: wujl@ziut.com 
	> Created Time: 2019年07月31日 星期三 22时56分45秒
 ************************************************************************/

#include<stdio.h>


int strlang(char *string)
{
    int a=0;
	while(*string++ != '\0')
		a++;
	return a;
}
void main()
{
	char *string="Hello World";
	int a=0;
	a=strlang(string);
    printf("i am rambo");
}
