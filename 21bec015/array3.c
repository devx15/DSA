#include <stdio.h>
int main()
{
    int min;
    int array[5];
    printf("enter the values of the array\n");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &array[i]);
    }

    min = array[0];

    for (int i = 1; i < 5; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    printf("the minimum value is %d", min);

    return 0;
}