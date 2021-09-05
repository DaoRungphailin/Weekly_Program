#include<stdio.h>
int main()
{
    int h ;
    float total=0 ;
    for(int i = 0 ; i<10 ; i++)
    {
        scanf("%d",&h);
        if(h<0)
        {
            printf("error");
            return 0 ;
        }
        printf("High %d = %d\n",i+1,h);
        total += h;
    }
        printf("Avg = %.3f" , total/10);
    return 0 ;
}