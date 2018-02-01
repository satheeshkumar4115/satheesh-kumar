#include<stdio.h>
void main()
{
    char ch;
    printf("enter trhe word");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("it is a alphabet");
    else
    printf("it is not alphabet");
    
}
