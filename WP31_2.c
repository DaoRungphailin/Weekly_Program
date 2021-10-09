#include<stdio.h> //*position odd & even
int check_even(int x)
{
    return x%2==0; //check bool
}
int main()
{
   int n[10],even=0,odd=0;
   for(int i = 0 ; i<=9 ; i++)
    {
       scanf("%d" , &n[i]);
       if(check_even(n[i]))//true
       {
           even += i ;
       }
       else//false
       {
           odd += i ;
       }
    }
    printf("Result : %d", odd-even);
    return 0 ;
}