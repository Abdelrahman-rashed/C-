/* Write a program in C to find the maximum and minimum element in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/

/* Write a program in C to separate odd and even integers in separate arrays. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/ 
/*
Write a program in C to sort elements of array in ascending order and descending order. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9
*/  

/*
Write a program in C to delete an element at desired position from an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/

/*
Write a program in C to find the second largest and second largest element in an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/
/*
* Write a program in C to print the elements of an array in reverse order. Go to the editor
* Test Data :
* Input the number of elements to store in the array (max 15) : 5
* Input 5 number of elements in the array :
* element - 1 : 2
* element - 2 : 3
* element - 3 : 4
* element - 4 : 5
* element - 5 : 6
* Expected Output :

 * The elements of array in reverse order are :                                                                 
 * element - 5 : 6                                                                                              
 * element - 4 : 5                                                                                              
 * element - 3 : 4                                                                                              
 * element - 2 : 3                                                                                              
 * element - 1 : 2
*/

#include "stdio.h"
#include "stdint.h"



/* @Comment: Function to get the maxumum in array */
int arr_max(unsigned char* ar, unsigned char size )
{
    unsigned char i;
    unsigned char max;
    max = ar[0];
    for (i = 0; i< size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    return max;
}

/* @Comment: Function to get the minimum in array */
int arr_min(unsigned char* ar, unsigned char size )
{
    unsigned char i;
    unsigned char min;
    min = ar[0];
    for (i = 0; i< size; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    return min;
}

/* !Comment: Function to separate the odd element from the even elements */
void even_odd_separate(unsigned char* ar, unsigned char size)
{
    unsigned char u8Itr;
    unsigned char even_arr[10];
    unsigned char odd_arr[10];
    unsigned char u8Itr_even = (unsigned char)0x00;
    unsigned char u8Itr_odd = (unsigned char)0x00;

    /* !Comment: Dispatch the array into even and odd arrays */
    for (u8Itr = 0x00; u8Itr < size; u8Itr++)
    {
        if(ar[u8Itr] %2 == 0)
        {   
            /*!pseudo: In case of even parameters */
            even_arr[u8Itr_even] = ar[u8Itr];
            u8Itr_even++;
        }
        else
        {
            /* !Pseudo: In case of odd parameters */
            odd_arr[u8Itr_odd] = ar[u8Itr];
            u8Itr_odd++;
        }
    }

    /* !Commment: Print the two created arrays */
    /* !Comment: Print the even array */
    if (u8Itr_even != (unsigned char) 0x00)
    {
        printf("The even elements are : ");
        for (u8Itr = 0x00; u8Itr< u8Itr_even; u8Itr++)
        {
            printf(" %d ", even_arr[u8Itr]);
        }
    }
    else
    {
        printf("\nThe array does not contain any even elements");
    }

    /* !Comment: Print the odd elements */
    if (u8Itr_odd != (unsigned char)0x00)
    {   
        /* !Comment: In case there are elements inside */ 
        printf("\nThe odd elements are : ");
        for (u8Itr = 0x00; u8Itr< u8Itr_odd; u8Itr++)
        {
            printf(" %d ", odd_arr[u8Itr]);
        }
    }
    else
    {
        printf("\nThe array does not contain odd elements");
    }
}

void swap_func(unsigned char* x, unsigned char* y)
{
    unsigned char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* !Comment: Bubble sort function - ascending  */
void bubble_sort_asc(unsigned char* ar,  unsigned char size)
{
    unsigned char u8Itr_i, u8Itr_j;
    /* !Comment: sorting block */
    for(u8Itr_i = 0x00; u8Itr_i< size; u8Itr_i++)
    {
        for(u8Itr_j = u8Itr_i +1 ; u8Itr_j<size; u8Itr_j++)
        {
            if (ar[u8Itr_i] > ar[u8Itr_j])
            {
              swap_func(&ar[u8Itr_i], &ar[u8Itr_j]);  
            }
        }
    }
    /* !Comment the array */
    printf("\nElements after sorting in ascending order : ");
    for (u8Itr_i = 0x00; u8Itr_i<size; u8Itr_i++)
    {
        printf(" %d ", ar[u8Itr_i]);
    }

}

/* !Comment: Bubble sort function - descending  */
void bubble_sort_desc(unsigned char* ar,  unsigned char size)
{
    unsigned char u8Itr_i, u8Itr_j;
    /* !Comment: sorting block */
    for(u8Itr_i = 0x00; u8Itr_i< size; u8Itr_i++)
    {
        for(u8Itr_j = u8Itr_i +1 ; u8Itr_j<size; u8Itr_j++)
        {
            if (ar[u8Itr_i] < ar[u8Itr_j])
            {
              swap_func(&ar[u8Itr_i], &ar[u8Itr_j]);  
            }
        }
    }
    /* !Comment the array */
    printf("\nElements after sorting in descending order : ");
    for (u8Itr_i = 0x00; u8Itr_i<size; u8Itr_i++)
    {
        printf(" %d ", ar[u8Itr_i]);
    }

}

/* !Comment: Function to delete certain position in the array */
void del_element(unsigned char*ar , unsigned char size, unsigned char pos)
{
    unsigned char u8Itr;

    if(pos >= size)
    {
        /* !Comment: Position out of boundary */
        printf("Required position is out of boundary");
    }
    else
    {
        /* !Comment: a valid position */
        for(u8Itr = 0x0; u8Itr <size; u8Itr++)
        {
            /* !Pseudo: If I reached the required element  */
            if (u8Itr >= pos)
            {
                ar[u8Itr] = ar[u8Itr+1];
            }
        }
    }
    /* !Comment: Print the array */
    printf("\nThe array after removing the deleted item is : ");
    for(u8Itr = 0x00; u8Itr < size -1; u8Itr++)
    {
        printf(" %d ", ar[u8Itr]);
    }
}

/* !Comment: FUnction to get the second largest element in the array */
char arr_sec_largest(unsigned char* ar, unsigned char size)
{
    static unsigned char u8Itr;
    static unsigned char u8max;
    static unsigned char sec_max;
    static unsigned char max_loc;
    u8max = ar[0];
    /* !Comment to get the maximum element location */
    for (u8Itr = 0x00; u8Itr < size; u8Itr++)
    {
        if(u8max < ar[u8Itr])
        {
            u8max = ar[u8Itr];
            max_loc = (unsigned char)u8Itr;
        }
    }

    sec_max = 0;
    for (u8Itr = 0x00; u8Itr < size; u8Itr++)
    {
        if (u8Itr == max_loc)
        {
                /* Do nothing */
                u8Itr++;
                u8Itr--;

        }
        else
        {
            if (sec_max < ar[u8Itr])
            {
                sec_max = ar[u8Itr];
            }
        }
    }
    return sec_max;
}

/* !Comment: Function to reverse arrays */
void reverse_array(unsigned char* ar, unsigned char size)
{
    static char u8Itr;
    static unsigned char rev_arr[10];
    static unsigned char u8Itr_x = 0x00;

   /* !Comment: Using the second array to copy the data from input array to the local one */
    for( u8Itr = size -1; u8Itr >= 0; u8Itr--)
    {
        rev_arr[u8Itr_x] = ar[u8Itr];
        u8Itr_x++;
    }
    
    /* !Comment: print the output array */
    printf("\nThe array after been reversed : ");
    for(u8Itr = 0x00; u8Itr< size; u8Itr++)
    {
        printf(" %d ", rev_arr[u8Itr]);
    }
    
}

/* !Comment: Reverse array without using new array */
void reverse_array_opt(unsigned char* ar, unsigned char size)
{
    char u8Itr;
    for (u8Itr = 0x00; u8Itr<size/2; u8Itr++)
    {
        swap_func(&ar[u8Itr], &ar[size -u8Itr -1]);
    }
    /* !Comment: print the output array */
    printf("\nThe array after been reversed : ");
    for(u8Itr = 0x00; u8Itr< size; u8Itr++)
    {
        printf(" %d ", ar[u8Itr]);
    }
}
int main()
{
    unsigned char arr[10];
    unsigned char u8Itr_i;
    unsigned char u8Itr_j;
    unsigned char arrsize;
    
    printf("Please enter the number of elements to be scanned ");
    scanf(" %d", &arrsize);

    /*!Pseudo: Scan the array */
    for(u8Itr_i = 0x00; u8Itr_i <arrsize; u8Itr_i++)
    {
        printf("Please Enter element #%d : ", u8Itr_i+1);
        scanf(" %d", &arr[u8Itr_i]);
    }

    /* !pseudo: Print the maximum number in the array */
    printf("The maximum element in the array is %d\n", arr_max(arr, arrsize));

    /* !pseudo: Print the min number in the array */
    printf("The minimum element in the array is %d\n", arr_min(arr, arrsize));

    /* !Pseudo: Print the even and odd elements separatey */
    even_odd_separate(arr, arrsize);

    /* !Pseudo: Sort the input array in ascending order */
    bubble_sort_asc(arr, arrsize);

    /* !Pseudo: Sort the input array in descending order */
    bubble_sort_desc(arr, arrsize);
 
    /* !Pseudo: Get the second largest element in the array */
    printf("\nThe second largest element in the array : %d", arr_sec_largest(arr,arrsize));

    /* !Pseudo: Reverse the input array */
    //reverse_array(arr, arrsize);

    /* !Pseudo: Reverse the input array - optimized */
    reverse_array_opt(arr, arrsize);

    /* !Pseudo: Delete element from the array in the second position */
    del_element(arr, arrsize, (unsigned char)0x01);

   
}