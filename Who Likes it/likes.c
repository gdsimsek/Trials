#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *likes(size_t n, const char *const names[n]) {

	char *result;

	if (n == 0)
	{
		result = (char*)malloc(20 * sizeof(char));
		strcpy(result, "No one likes this");
	}
	else if (n == 1)
	{
		result = (char*)malloc((strlen(names[0]) + 15) * sizeof(char));
		sprintf(result, "%s likes this", names[0]);
	}
	else if (n == 2)
	{
		result = (char*)malloc((strlen(names[0]) + strlen(names[1]) + 20) * sizeof(char));
		sprintf(result, "%s and %s like this", names[0], names[1]);
	}
	else if (n == 3)
	{
		result = (char*)malloc((strlen(names[0]) + strlen(names[1]) + strlen(names[2]) + 30) * sizeof(char));
		sprintf(result, "%s, %s and %s like this", names[0], names[1], names[2]);
	}
	else {
        result = (char*)malloc((strlen(names[0]) + strlen(names[1]) + 50) * sizeof(char));
        sprintf(result, "%s, %s and %zu others like this", names[0], names[1], n - 2);
    }
	return result;
}