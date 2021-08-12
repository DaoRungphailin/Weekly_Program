#include <stdio.h>
#include<math.h>
int main() //ตารางหมากรุก
{
    float n ;
    scanf("%f" ,&n);
    int m = round(n) ;
    n = n-m ;
    printf("%f" ,n);
  return 0 ;
}