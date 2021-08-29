#include <stdio.h>
int main() 
{
    int a[3]; //เรียงเลข 3 ตัว
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for (int i = 0; i <= 2; i++)
    {
      if(a[i]>a[i+1])
      {
          int temp = a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
          i = -1 ;
      }
    }
    printf("%d",a[1]+a[2]);
    return 0;
}