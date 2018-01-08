#include <Stdio.h>
#include <stdint.h>
#include <math.h>

// --- Global variables --- // 

uint8_t array1[50];
uint8_t size;
uint8_t location;

// -- global Functions ----//
uint8_t* Scan_aray(uint8_t *array, uint8_t size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("Enter element (%d)", i + 1);
		scanf_s("%d", &array[i]);
	}
	return array;
}

uint8_t* delete_element(uint8_t* array, uint8_t size, uint8_t location)
{
	uint8_t i;
	for (i = 0; i < size; i++)
	{
		if (i+1 >= location)
		{
			array[i] = array[i+1];
		}
	}
	return array;
}

void main(void)
{
	printf("Please enter the size of the array1\n");
	scanf_s("%d", &size);
	printf("Please enter the location of element you want to delete\n");
	scanf_s("%d", &location);
	uint8_t* array_ptr;
	array_ptr = Scan_aray(array1, size);
	int i, j;
	for (i = 0; i < size; i++)
	{
		printf("The inserted array is %d\n", array_ptr[i]);
	}
	uint8_t* new_array = delete_element(array_ptr, size,location );
	for (j = 0; j < size -1; j++)
	{
		printf("The modified array is after deletation of new element %d\n", new_array[j]);
	}
	getchar();
	getchar();
}