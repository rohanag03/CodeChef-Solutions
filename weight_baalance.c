#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    int w1,w2,x1,x2,m;
	    scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
	    if((w2-w1)>=(x1*m) && (w2-w1)<=(x2*m)){
	        printf("1\n");
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}