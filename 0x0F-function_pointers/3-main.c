#include "3-calc.h"

int main(int ac, char **av)
{
	int num1, num2, res;
	int (*function)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	function = get_op_func(av[2]);

	res = function(num1, num2);

	printf("%d\n", res);

	return (0);

}
