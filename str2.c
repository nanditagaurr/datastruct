#include<stdio.h>
void main()
{
    char s[100], ch;
    int c=0,i;
    printf("enter any string:");
    gets(s);
    printf(" enter character of which u wanna check.occurences:");
    scanf("%c",&ch);
    for(i=0;s[i]!='\0';i++)
        if(s[i]==ch)
        c++;
    printf("%c has occurred %d times..",ch,c);
}
