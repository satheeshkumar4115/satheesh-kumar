#include<stdio.h>
void main()
{
int m,A,D,i,sum=0;
scanf("%d %d %d",&m,&A,&D);
for(i=m;i>1;i--)
{
sum=sum+(A+(m-1)*D);
}
return 0;
}
