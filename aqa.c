#include<stdio.h>
#include<string.h>
void main()
{
char str[50],i,c=0,len;
printf("enter the word");
len=strlen(str);
for(i=1;i<len;i++)
{
    scanf("%s",&str[i]);
if((str[i]>='0') && (str[i]<='9'))
{
c++;
}
}
printf("%d",c);
}
