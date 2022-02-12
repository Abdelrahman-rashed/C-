/*
* Write a program in C to count a total number of duplicate elements in an array. Go to the editor
* Test Data :
* Input the number of elements to be stored in the array :3
* Input 3 elements in the array :
* element - 0 : 5
* element - 1 : 1
* element - 2 : 1
* Expected Output :
* Total number of duplicate elements found in the array is : 1
*/

#include <stdio.h>
#include <stdint.h>

unsigned char u8arrNum = (unsigned int)0x00;
unsigned char u8Itr = (unsigned int)0x00;
unsigned char u8Itr2 = (unsigned int)0x00;

unsigned char arr[10];
unsigned char arr2[10];
unsigned char u8flag = 0x01;
unsigned counter = 0x00;

int main()
{
    printf("Please enter the number of element of the array = ");
    scanf(" %d", &u8arrNum);

    for (u8Itr = 0x00; u8Itr<u8arrNum; u8Itr++)
    {
        printf("Enter element number %d = ", u8Itr+1);
        scanf(" %d", &arr[u8Itr]);
    }

    /* Create an array where the data of zeros  */
    for (u8Itr = 0x00; u8Itr < u8arrNum; u8Itr++)
    {
        arr2[u8Itr] = 0x00;
    }
    /* Create an array where each element shows do  */
    for(u8Itr = 0x00; u8Itr < u8arrNum; u8Itr++)
    {
        for (u8Itr2 = 0x00; u8Itr2 < u8arrNum; u8Itr2++)
        {
            if (arr[u8Itr] == arr[u8Itr2])
            {
                arr2[u8Itr2] = u8flag;
                u8flag++;
            }   
            
        }
        u8flag = 0x1;
    }

    for (u8Itr = 0x0; u8Itr < u8arrNum; u8Itr++)
    {
        printf("%d", arr2[u8Itr]);
    }

    for (u8Itr = 0x0; u8Itr < u8arrNum; u8Itr++)
    {
        if (arr2[u8Itr] == (unsigned char)3 )
        {
            counter++;
            printf("%d", arr[u8Itr]);
        }
    }
    printf("Total number of duplicated elements = %d", counter);}
