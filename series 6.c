#include<stdio.h>
#include<math.h>
int main()
{
  int n,a;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      a=pow(i,i);
      printf("%d ",a);
  }
	return 0;
}
