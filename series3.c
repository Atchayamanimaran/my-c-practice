#include<stdio.h>

int main()
{
    int n;
	scanf("%d ",&n);
	int first=6,help=3;
	for(int i=1;i<=n;i++){
	    printf("%d ",first);
	    first+=help;
	    help+=2;
	}

	return 0;
}
