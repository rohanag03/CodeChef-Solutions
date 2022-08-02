#include <stdio.h>
int main(void) {
	int a=0,b=0,c=0,d=0,s,i, x, y, z;
    
    scanf("%d",&s); //number of test cases you want to run
	for(i=1;i<=s;i++)
	{
        scanf("%d%d%d%d", &a, &b, &c, &d);
        x=(a>b) ? a : b;
        y=(c>d) ? c : d;
        z= x + y;
        printf("%d\n", z);

}
return 0;
}
