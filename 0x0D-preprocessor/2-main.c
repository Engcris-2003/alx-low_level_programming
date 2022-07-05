#include <stdio.h>
#include <stdlib.h>
/**
 * filename - name of the file
 * Description: prints filename
 * Return: nothing
 */
void filename(void)
{
	printf("%s\n", __FILE__);
}
/**
 * main - main point
 * Description: prints filename
 * Return: nothing
 */
int main(void)
{
	filename();
	return (0);
}
