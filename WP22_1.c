#include <stdio.h>
#include<math.h>
int main() //ตารางหมากรุก
{
    int n ;
    scanf("%d" ,&n);
    n = n/2 ;
    int m = round(n) ;
    m = m+1 ;
    for(int i = 1 ; i<=m ; i++)
    {
      for(int j = 1 ; j<=n ; j++)
      {
        printf("*");
      }
    }
  return 0 ;
}