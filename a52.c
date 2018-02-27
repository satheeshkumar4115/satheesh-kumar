


#include<stdio.h>
void main()
{
int d,temp,i,j,a[20];
printf("enter the array of numbers");
scanf("%d",&d);
printf("enter the numbers");
for(i=0;i<=d;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<=d;i++)
{
    printf("%d%d",a[i],i);
}
}
