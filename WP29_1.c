#include<stdio.h> //*average high
int main()
{
    int h[10] ;
    float total=0 ;
    for(int i = 0 ; i<10 ; i++)
    {
        scanf("%d",&h[i]);
        if(h[i]<0)
        {
            printf("error");
            return 0 ;
        }
    }
    for(int i = 0 ; i<10 ; i++)
    {
        printf("High %d = %d\n",i+1,h[i]);
        total += h[i];
    }   
    printf("Avg = %.3f" , total/10);
    return 0 ;
}