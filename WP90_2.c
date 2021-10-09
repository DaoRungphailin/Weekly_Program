#include <stdio.h> //*sqrt() don't use math.h
float sqrt(float num)
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
    float num;
    printf("Enter number : ");
    scanf("%f", &num);

    if (num > 0)
        printf("Result = %f", sqrt(num));

    if (num == 0)
        printf("Result = 0");

    if (num < 0)
        printf("Number must be Positive");

    return 0;
}