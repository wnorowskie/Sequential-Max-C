/* Program: seq-max3.c
* Author: Eric Wnorowski
*
* Description:
* Write a program that finds the max of N numbers. The program will
* prompt the user for a list of numbers, which will be read from
* stdin using the C library function, scanf().
*
* This is a first program in C. While the problem is simple, many
* core features of the language will be mastered along the way.
*
* The third version should dynamically allocate the array based on the user’s
* input size specified. You must use malloc() or calloc() –it’s your choice which—and be sure to
* free the memory you allocate before end of execution—there’s no garbage collection in C.
*/
#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    int i,n,max;
   
    printf("Enter size of the array: ");
    scanf("%d",&n);
 
    int* ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL) {
    printf("ERROR: memory not allocated");
    exit(0);
    }

    printf("Enter elements in array \n");
    for(i=0; i<n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", ptr + i);
    }
 
    max=ptr[0];

    for(i=1; i<n; i++){
		if(max < *(ptr + i))
		max = *(ptr + i);       
    }
    
    printf("\nmaximum of array is : %d \n",max);

    free(ptr);
 
    return 0;
}