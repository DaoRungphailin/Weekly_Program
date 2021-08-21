#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int count = 2*a-1;
    for (int y = 1; y <= count; y++)
    {
        for (int x = 1; x <= count; x++)
        {
            if ((y <= x || y >= count-x+1) && !(y < x && y > count-x+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
