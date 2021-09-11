#include<stdio.h>
int main()
{
    int n[10],even=0,odd=0;
    for(int i = 0 ; i<=9 ; i++)
    {
       scanf("%d" , &n[i]);
       if(n[i]%2==0)
       {
           even += i ;
       }
       else
       {
           odd += i ;
       }
    }
       printf("Result : %d", odd-even);
    return 0 ;
}