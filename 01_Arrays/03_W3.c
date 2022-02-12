/*
* Write a program in C to print all unique elements in an array. Go to the editor
* Test Data :
* Print all unique elements of an array:
* ------------------------------------------
* Input the number of elements to be stored in the array: 4
* Input 4 elements in the array :
* element - 0 : 3
* element - 1 : 2
* element - 2 : 2
* element - 3 : 5
* Expected Output :
* The unique elements found in the array are:
* 3 5
*/

#include <stdio.h>
#include <stdint.h>

unsigned char u8arrsize;
unsigned char  arr[10];
unsigned char arr2[10];

unsigned counter = 0x00;
unsigned char u8Itr;
unsigned char u8Itr2;
unsigned char flag = 0x00;
unsigned u8flag = 1;

int main()
{
    /* !Pseudo: Get the number of the element to be stored in array */
    printf("Enter the number of the array elemets = ");
    scanf(" %d",&u8arrsize);

    /* !Pseudo: Scanning the array funtion */
    for(u8Itr = 0x00; u8Itr<u8arrsize; u8Itr++)
    {
        printf("Please enter the element number %d = ", (u8Itr+1));
        scanf(" %d", &arr[u8Itr]);
    }

    /* !Pseudo: Resetting the array for calculating the unique number */
    for(u8Itr = 0x00; u8Itr<u8arrsize; u8Itr++)
    {
        arr2[u8Itr] = 0x00;
    }

    /* !Pseudo: Check each element with the other elements in the array */
    for(u8Itr = 0x00; u8Itr<u8arrsize; u8Itr++)
    {   
        for(u8Itr2 = 0x00; u8Itr2<u8arrsize; u8Itr2++)
        {
            if(arr[u8Itr] == arr[u8Itr2])
            {
                arr2[u8Itr] = u8flag;
                u8flag++;
            }
        }
        u8flag = 1;
    }
    for(u8Itr = 0x00; u8Itr<u8arrsize; u8Itr++)
    {
        if (arr2[u8Itr] == 1)
        {
            counter++;
            printf("This is an unique element = %d \n", arr[u8Itr]);
        }
    }
    printf("Number of unique element in the array = %d \n", counter);
}