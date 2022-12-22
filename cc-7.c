#include <stdio.h>
int main(void) {
  int t,x;
  scanf("%d",&t);
  while(t--)
    {
      scanf("%d",&x);
      if(x%2==0)
      {
        printf("yes\n");
      }
      else
      {
        printf("no\n");
      }
    }
  return 0;
}
