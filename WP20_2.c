#include <stdio.h>
int main()
{
    int n , i; //ดอกจันตาม input
    scanf("%d" ,&n);
    i=1;
    if(n>=0)
    do
    {
        printf("*"); 
        i++;
    } while (i<=n);
    return 0;
}