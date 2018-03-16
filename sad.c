#include<stdio.h>
void main()
{
char a[50],i,c=0;
printf("enter the word");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='0')&&(a[i]<='9')||(a[i]>='a')&&(a[i]<='z'))
{
continue;
}
else
{
    c++;
}
}


printf("%d",c);
}
