#include <stdio.h>
/**
 * premain - fonction executed before the main
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my
back!\n");
}
