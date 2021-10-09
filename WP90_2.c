#include<stdio.h> //*sqrt() don't use math.h
int main()
{
    int num ;
    printf("Enter number : ");
    scanf("%d" ,&num);
    for(int i = 0 ; i < num ; i++)
    {
        if(i*i == num)
        {
            printf("Result = %d",i);
        }
    }
    return 0;
}