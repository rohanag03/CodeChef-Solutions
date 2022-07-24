#include <stdio.h>
int main(void) {
	int s;
	scanf("%d",&s); //number of test cases you want to run
	for(int i=0;i<s;i++)
	{
	    int x=0,y=0;
	    scanf("%d%d",&x,&y);
	    if(x<y)
	        printf("FIRST\n");
	    else if(y<x)
	        printf("SECOND\n");
	    else if(x==y)
	        printf("ANY\n");
	}
	return 0;
}