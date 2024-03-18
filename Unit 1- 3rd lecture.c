#include <stdio.h>
int main()
{
	int a=10;
	float pi= 3.14;
	char x= 'Y';
	double y= 3.43567;
	char g[25]="Ananya";
	printf("Value of a = %i \n",a);
	printf("Value of pi = %f \n",pi);
	printf("Value of x = %c \n",x);
	printf("Value of y = %lf\n",y);
	printf("Value of g = %s\n", g);
	printf("a= %i, pi= %f, x= %c, y= %lf, g= %s", a,pi,x,y,g);
	return 0;
}

