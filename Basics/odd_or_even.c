/* To print a given number is Odd or Even */
#include<stdio.h>
int main(void)
{
	int i;
	printf("Plear Enter An Arbitrary Number: ");
	scanf("%d",&i);
	if(i%2==0)
		printf("The Number Entered Is An Odd Number\n");
	else
		printf("The Number Entered Is An Even Number\n");
	return 0;
}
