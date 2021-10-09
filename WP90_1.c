#include <stdio.h> //*sqrt() don't use math.h
int main()
{
    int num;
    float x[10000], result = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    for (int i = 0; i <= 10000; i++)
    {
        x[0] = 1;
        x[i + 1] = (x[i] + num / x[i]) / 2;
        result = x[10000];
    }
    printf("Result = %f", result);
    return 0;
}