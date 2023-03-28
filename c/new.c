#include<stdio.h>
int main(){
    int a;
    printf("enter the value:");
   scanf("%d",&a);
   while (a<=100)
   {
       if (a<0)
       {
           printf("error - negative value for x");
           break;
       }
       else{
           printf("f");
           break;
       }
   }
    return 0;
}
