#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],t;
    int i,j;
    printf("enter string:");
    gets(s);
    for(i=0;i<strlen(s);i++)
        for(j=0;j<strlen(s)-i-1;j++)
        if(s[j]>s[j+1])
    {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
    }
    printf("sorted string:");
    puts(s);
}
