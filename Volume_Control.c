#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t); //number of test cases you want to run
	for(int i=0;i<t;i++)
	{
	    int x=0, y=0, a=0, b=0;
	    scanf("%d%d",&x,&y);
	    if (x>y){
            a=x-y;
	        printf("%d", a);
	    }
	    else{
            b=y-x;
	        printf("%d", b);
	    }
	}
	return 0;
}

