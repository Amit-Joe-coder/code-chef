#include <stdio.h>

int main(void) {
  int t,x;
  scanf("%d",&t);
  while(t)
    {
      scanf("%d",&x);
      if(x>7)
      {
       printf("Hot\n"); 
      }
      else if(x>=4&&x<=7)
      {
        printf("Medium\n");
      }
      else
      {
        printf("Mild\n");
      }
    }
  return 0;
}
