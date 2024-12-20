 #include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a=2;
 for(int i=0;i<n;i++){
     printf("%d ",a);
     a=(a*2)-i;
 }
	return 0;
}
