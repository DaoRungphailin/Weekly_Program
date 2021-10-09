#include <stdio.h> //*sqrt() don't use math.h
float sqrt(int num)
{
    float x[10000], result = 0;
    for (int i = 0; i <= 10000; i++)
    {
        x[0] = 1;
        x[i + 1] = (x[i] + num / x[i]) / 2;
        result = x[10000];
    }
    return result;
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Result = %f", sqrt(num));
    return 0;
    return 0;
}