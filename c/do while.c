
#include <stdio.h>
int main()
{
    int num, i=5;
    printf("enter the number");
    scanf("%d",&num);

    do
    {
        printf("%d\n",i);
        i=i+1;
    } while (i<num);
    
return 0;
}
