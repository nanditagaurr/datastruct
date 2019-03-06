#include<stdio.h>
void main()
{
    char s[100];
    int i;
    printf("enter any string:");
    gets(s);
    printf("alternate characters:");
    for(i=0;s[i]!='\0';i=i+2)
    printf("%c ",s[i]);
}
