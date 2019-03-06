#include<stdio.h>
void main()
{
    char s[100];
    int i,c=0;
    printf("enter any string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        c++;
    printf("total no of vowels:%d",c);
}
