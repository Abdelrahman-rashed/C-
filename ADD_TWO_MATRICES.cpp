/*/ --------------------------//
Write a program in C to take a 2D array and print it
//----------------------------//*/

#include <Stdio.h>
#include <stdint.h>
#include <math.h>

// --- Global variables --- // 

uint8_t array_2D[3][3];
uint8_t array1[3][3];
uint8_t array2[3][3];
uint8_t result[3][3];
uint8_t row_number;
const uint8_t column_number = 3;

// ---- Global Functions ---- // 
void print_2D_array(uint8_t array[][column_number], uint8_t row_number)
{
	uint8_t i, j;
	for (i = 0; i < row_number; i++)
	{
		for (j = 0; j < column_number; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	return;
}



void scan_2D_array(uint8_t row_number, uint8_t column_number)
{
	uint8_t i, j;
	for (i = 0; i < row_number; i++)
	{
		for (j = 0; j < column_number; j++)
		{
			printf("Element array[%d][%d]=", i + 1, j + 1);
			scanf_s("%d", &array_2D[i][j]);

		}
	}
	print_2D_array(array_2D, row_number);
	return;
}

void Add_matrics()


void main(void)
{
	printf("please enter the size of the rows");
	scanf_s("%d", &row_number);
	scan_2D_array(row_number, column_number);

	//print_2D_array(array_2D, row_number);
	getchar();
	getchar();

}