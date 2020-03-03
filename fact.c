#include<stdio.h>
int fact(int n);
void main() {
int n;
printf("Enter a positive integer: ");
scanf("%d",&n);
printf("Factorial of %d = %d \n", n,fact(n));
}
int fact(int n) {
if (n>=1)
return n*fact(n-1);
else
return 1;
}
