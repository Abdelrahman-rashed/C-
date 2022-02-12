/*
* Write a program in C to merge two arrays of same size sorted in decending order. Go to the editor
* Test Data :
* Input the number of elements to be stored in the first array :3
* Input 3 elements in the array :
* element - 0 : 1
* element - 1 : 2
* element - 2 : 3
* Input the number of elements to be stored in the second array :3
* Input 3 elements in the array :
* element - 0 : 1
* element - 1 : 2
* element - 2 : 3
* Expected Output :
* The merged array in decending order is :
3 3 2 2 1 1
*/

#include "stdio.h"
#include "stdint.h"

unsigned char u8NumSize = (unsigned char)0x00;
unsigned char u8NumSize2  = (unsigned char)0x00;
unsigned char u8Itr;
unsigned char u8Itr_j;

unsigned char arr1[10];
unsigned char arr2[10];

unsigned char swap(unsigned char* x, unsigned char* y)
{
    unsigned char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    /*------------------ For 1st array -----------------------------------*/
    printf("Input the number of elements to be stored in the first array");
    scanf(" %d",&u8NumSize);

    /*!Intro Message */
    printf("Input %d elements in the array :", u8NumSize);

    /* !Pseudo: Scanning the array funtion */
    for(u8Itr = 0x00; u8Itr<u8NumSize; u8Itr++)
    {
        printf("Please enter the element number %d = ", (u8Itr+1));
        scanf(" %d", &arr1[u8Itr]);
    }

    /*------------------ For 2nd array -----------------------------------*/
    printf("Input the number of elements to be stored in the Second array");
    scanf(" %d",&u8NumSize2);

    /*!Intro Message */
    printf("Input %d elements in the array :", u8NumSize2);

    /* !Pseudo: Scanning the array funtion */
    for(u8Itr; u8Itr<(u8NumSize+ u8NumSize2); u8Itr++)
    {
        printf("Please enter the element number %d = ", (u8Itr+1));
        scanf(" %d", &arr1[u8Itr]);
    }

    /* @Pseudo: Sorting in descending order */
     for (u8Itr =0x00; u8Itr<(u8NumSize+u8NumSize2); u8Itr++)
     {
         for(u8Itr_j = u8Itr+ 1; u8Itr_j< (u8NumSize+u8NumSize2); u8Itr_j++)
         {
             if (arr1[u8Itr] < arr1[u8Itr_j])
             {
                 swap(&arr1[u8Itr], &arr1[u8Itr_j]);
             }
         } 
     }
    /*------------------ Print the array -------------------------------*/
        /* !Pseudo: Print the array code */
    for(u8Itr = 0x00; u8Itr<(u8NumSize+ u8NumSize2); u8Itr++)
    {
        printf("%d\n", arr1[u8Itr]);
    }
}