
#include <stdio.h>
int main(void) 
{
int a,end,i=0;
printf("enter the  starting value");
scanf("%d",&a);
printf("enter the ending value");
scanf("%d",&end);
for(i=a;i<=end;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
}
