/*
* Write a program in C to count the frequency of each element of an array. Go to the editor
* Test Data :
* Input the number of elements to be stored in the array :3
* Input 3 elements in the array :
* element - 0 : 25
* element - 1 : 12
* element - 2 : 43
* Expected Output :
* The frequency of all elements of an array :
* 25 occurs 1 times
* 12 occurs 1 times
* 43 occurs 1 times
*/

#include "stdio.h"
#include "stdint.h"

unsigned int arrsize = 0x00;
unsigned char arr[10];
unsigned u8Itr = 0x00;
unsigned u8Itr_i = 0x00;
unsigned u8Itr_j = 0x00;
unsigned marker = (unsigned int)0x1;
unsigned char occ_arr[10];

int main()
{
    printf("Please enter the number of array element to be scanned");
    scanf(" %d",&arrsize);

    /* @Pseudo: Get the array element */
    for(u8Itr = 0x00; u8Itr< arrsize; u8Itr++)
    {
        printf("Please enter element #%d : ", u8Itr+1);
        scanf(" %d", &arr[u8Itr]);
    }

    /* !Pseudo: Loop on the array to check the count of each element */
    for (u8Itr_i =0x00; u8Itr_i<arrsize; u8Itr_i++)
    {
        for(u8Itr_j = 0x00; u8Itr_j<arrsize; u8Itr_j++)
        {
            if (arr[u8Itr_i] == arr[u8Itr_j])
            {
                occ_arr[u8Itr_i] = marker;
                marker++;
            }
        }
        marker = 0x01;
    }

    for (u8Itr = 0x00; u8Itr<arrsize;u8Itr++)
    {
        /*printf("%d", occ_arr[u8Itr]); */
        printf("\n %d ocuured %d times", arr[u8Itr], occ_arr[u8Itr]);

    }
    
    
}