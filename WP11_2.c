#include <stdio.h>
int main()
{
    int a[3], max, mid=0 , min;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    max = a[0];
    min = a[0];
    for (int i = 0; i <= 2; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
        mid += a[i]; //เอาเลขทุกตัวมาบวกกัน
    }
    printf("result = %d", max+(mid-max-min));
    //mid=เลขทุกตัวมาบวกกันแล้วลบออกด้วย max กับ min
    return 0;
}