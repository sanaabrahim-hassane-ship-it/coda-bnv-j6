#include <stdlib.h>
#include <stdio.h>

void swap_ptr(int *ptr1, int *ptr2);
void swap_ptr(int *ptr1, int *ptr2)
{
	int nb1 = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = nb1;
}
int main()
{
	int val1 = 42;
	int val2 = 21;

	printf("val1 : %d, val2 : %d\n", val1, val2);

	swap_ptr(&val1, &val2);

	printf("val1 : %d, val2 : %d\n", val1, val2);

	exit(0);
}
