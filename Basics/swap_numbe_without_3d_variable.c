/* Swap two numbers without using 3rd variable */
#include<stdio.h>
int main(void)
{
	int a=1;
	int b=2;
	printf("The origional a is %d, and the origional b is %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After switching, a is %d, and b is %d\n",a,b);
	return 0;
}
