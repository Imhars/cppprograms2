#include<stdio.h>
int main()
{
    int num1,num2,add,sub,mult,div;
    char option;
    printf("enter  option\nA,B,C,D\n");
    scanf("%c",&option);
    if(option=='a')
    {
        printf("enter 2 numbers\n");
        scanf("%d %d",&num1,&num2);
        add=num1 +num2;
        printf("the addition is %d \n",add);
    }
    else if(option=='b')
    {
        printf("enter 2 number\n ");
        scanf("%d %d",&num1,&num2);
        sub= num1-num2;
        printf("the sub is %d\n",sub);
    }
    else if(option=='c')
    {
        printf("enter 2 numbers\n");
        scanf("%d %d",&num1,&num2);
        mult=num1*num2;
        printf("the mult is  %d\n ",mult);       
    }
    else if(option=='d')
    {
        printf("enter 2 numebers\n");
        scanf("%d %d",&num1,&num2);
        div=num1%num2;
        printf("the div is %d\n",div);
    }
    return 0;
}