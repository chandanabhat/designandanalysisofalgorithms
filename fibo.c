#include<stdio.h>
int fib(int n)
{ 
int a = 0, b = 1, c, i; 
if( n == 0) 
return a; 
for (i = 2; i <= n; i++) 
{ 
c = a + b; 
a = b; 
b = c; 
} 
return b; 
} 
  
void main () 
{ 
int n; 
printf("enter the value of n\n");
scanf("%d",&n);
printf("%d", fib(n)); 
} 
