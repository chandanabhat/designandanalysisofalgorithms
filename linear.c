#include <stdio.h>
int linear(int *a, int n, int pos);
int main()
{
int a[8], i,pos;
printf("Enter the array elements: ");
for(i = 0; i < 8; i++)
scanf("%d", &a[i]);
printf("Enter element to search: ");
scanf("%d", &pos);
i = linear(a, 8,pos );
if(i == -1)
printf("element not found.\n");
else
printf("element is at index: %d\n", i);
return 0;
}
int linear(int *a, int n, int pos)
{
int i;
for(i = 0; i <= n-1; i++)
{
if(a[i] == pos)
 return i;
}
return -1;
}
