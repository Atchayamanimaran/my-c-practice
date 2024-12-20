#include<stdio.h>
#include<math.h>
int main()
{

	int n,a,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    if(i%2==0){
	        a=pow(i,2);
	        printf("%d ",a);
	    }
	    else{
	        a=pow(i,3);
	        printf("%d ",a);
	    }
	}
	
	

	return 0;
}
