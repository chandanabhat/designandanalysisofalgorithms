#include<stdio.h>
void main()
{
int a[20],i,n;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("elements in the array are\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
