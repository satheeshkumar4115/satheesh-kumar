#include<stdio.h>
void main()
{
void n,sum=0,i,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("median  %d",sum/n;
}
