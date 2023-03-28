// this will take two numbers as input and give some basic operations
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    float addition,substraction,multiplication,division,modulo;
    addition=a+b;
    substraction=a-b;
    multiplication=a*b;
    division=a/b;
    modulo=a%b;
    int i;
    printf("entre the operation you wants to do\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n 5.modulo\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("the addition of the given no is %f",addition);
        break;
        case 2:
        printf("the substraction of the given no is %f",substraction);
        break;
        case 3:
        printf("the multiplication of the given no is %f",multiplication);
        break;
        case 4:
        printf("the division of the given no is %f",division);
        break;
        case 5:
        printf("the modulo of the given no is %f",modulo);
        break;
    }

    return 0;
}