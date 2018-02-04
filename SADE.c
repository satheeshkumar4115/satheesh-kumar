#include<stdio.h>
void main()
{
    char ch;
    printf("enter the letter");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z' || ch>='A'&&ch<='Z'))
    {
    printf("it is  alphabet");
    }
    else
    {
    printf("it is NOT alphabet");
    }
}
