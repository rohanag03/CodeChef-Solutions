#include<stdio.h>
#include<math.h>
int main()
{
 int t,x,y;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d",&x,&y);
  if(x<y)
  {
      printf("NO\n");
  }
  else
  {
      printf("YES\n");
  }
 }
}
