#include <stdio.h>
#include <stdlib.h>

#include "vector.c"

int main(int argc, char **argv) {
	vector_t *v;
	
	printf("Calling vector_new()\n");
	v = vector_new();
	
	printf("Calling vector_delete()\n");
	vector_delete(v);
	
	printf("vector_new() again\n");
	v = vector_new();

	printf("These should all return 0 (vector_get()): ");
	printf("%d ", vector_get(v, 0));
	printf("%d ", vector_get(v, 1));
	printf("%d\n", vector_get(v, 2));

	printf("Doing a bunch of vector_set()s\n");
	vector_set(v, 0, 98);
	vector_set(v, 11, 15);
	vector_set(v, 15, -23);
	vector_set(v, 24, 65);
    vector_set(v, 500, 3);
	vector_set(v, 12, -123);
	vector_set(v, 15, 21);
	vector_set(v, 25, 43);

	printf("These should be equal:\n");
	printf("loc is %lu, 98 = %d\n", 0, vector_get(v, 0));
	printf("loc is %lu, 15 = %d\n", 11, vector_get(v, 11));
	printf("loc is %lu, 65 = %d\n", 24, vector_get(v, 24));
	printf("loc is %lu, -123 = %d\n", 12, vector_get(v, 12));
	printf("loc is %lu, 21 = %d\n", 15, vector_get(v, 15));
	printf("loc is %lu, 43 = %d\n", 25, vector_get(v, 25));
	printf("loc is %lu, 0 = %d\n", 23, vector_get(v, 23));
	printf("loc is %lu, 0 = %d\n", 1, vector_get(v, 1));
	printf("loc is %lu, 0 = %d\n", 501, vector_get(v, 501));
	printf("loc is %lu, 3 = %d\n", 500, vector_get(v, 500));

    vector_delete(v);

	printf("Test complete.\n");
	
	return 0;
}
