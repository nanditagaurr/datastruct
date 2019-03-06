#include<stdio.h>
void main()
{
    char s[100];
    int i,c=0;
    printf("enter string:");
    scanf("%[^\n]s",s);;
    for(i=0;s[i]!='\0';i++)
        if(s[i]=='\t')
        c++;
    printf("no of white spaces=%d",c);
}
