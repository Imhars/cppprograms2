#include<stdio.h>

int main()

{

int a;

int *b;

b=&a;

printf("enter number\n");

scanf("%d",&a);


printf("%u",&b);

return 0;

}