#include <stdio.h>
int main(void) {
	int s, i;
	scanf("%d",&s); //number of test cases you want to run
	for(i=0;i<s;i++)
	{
	    int x=0;
	    scanf("%d",&x);
	    if(x<20)
	        printf("COLD\n");
	    else
	        printf("HOT\n");
}
return 0;
}