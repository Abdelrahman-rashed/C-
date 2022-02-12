/* 
* Write a program in C to read n number of values in an array and display it in reverse order.
* Test Data :
* Input the number of elements to store in the array :3
* Input 3 number of elements in the array :
* element - 0 : 2
* element - 1 : 5
* element - 2 : 7
* Expected Output :
* The values store into the array are :
* 2 5 7
* The values store into the array in reverse are :
* 7 5 2
 */
#include <stdio.h>
#include <stdint.h>

/* Local variables */
unsigned char u8_arrsize = (unsigned char)0x00;
unsigned u8Iterator;
unsigned arr[10];

int main()
{
    printf("Input the numerb of elements to store in the array");
    /*!Pseudo: Scan the number of elements to be part of array */
    scanf(" %d", &u8_arrsize);

    /*Pseudo: For loop by the size of the array to construct the array */
    for (u8Iterator = 0; u8Iterator<u8_arrsize; u8Iterator++)
    {
        printf(" element - %d :",u8Iterator);
        scanf(" %d", &arr[u8Iterator]);
    }

    /*!Pseudo: Print the array in reverse order */
    for (u8Iterator = u8_arrsize; u8Iterator > 0; u8Iterator--)
    {
        printf("%d", arr[u8Iterator-1]);
    }
}