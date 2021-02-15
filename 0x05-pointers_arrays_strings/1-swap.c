#include "holberton.h"
/**
 * swap_int - swap the value of two int
 *@a: Int to swap
 *@b: Int to swap
 */
void swap_int(int *a, int *b)
{
int temporaire = 0;

temporaire = *a;
*a = *b;
*b = temporaire;
}
