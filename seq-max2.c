/* Program: seq-max2.c
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
* The second uses pointers and pointer arithmetic (no [ ]’s) to 
* access the numbers stored in the array.
*/

#include <stdio.h>
 

int main()
{
    int i,n,max;
    int pta[1000];
   
    printf("Enter size of the array: ");
    scanf("%d",&n);
 
    printf("Enter elements in array \n");
    for(i=0; i<n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d",pta + i);
    }
 
    max= *(pta);

    for(i=1; i<n; i++){
		if(max< *(pta + i))
		max= *(pta + i);       
    }
    
    printf("\nmaximum of array is : %d \n",max);
 
    return 0;
}