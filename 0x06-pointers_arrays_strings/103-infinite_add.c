#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - add numbers
 * @n1: nubmer 1
 * @n2: number 2
 * @r: buffer to store result
 * @size_r: size of the buffer
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
		int len1 = strlen(n1);
		int len2 = strlen(n2);
		int max = len1 > len2 ? len1 : len2;
		int carry = 0;
		int i = len1 - 1;
		int j = len2 - 1;

		if (max+1 >= size_r)
				return 0;

		r[max] = '\0';
		while (i >= 0 || j >= 0 || carry)
		{
				int sum = carry;
				if (i >= 0)
						sum += n1[i--] - '0';
				if (j >= 0)
						sum += n2[j--] - '0';
				carry = sum / 10;
				r[--max] = sum % 10 + '0';
		}

		return r + max;
}
