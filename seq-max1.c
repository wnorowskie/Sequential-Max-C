/* Program: seq-max1.c
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
* The first uses arrays with array indexing (subscripts) to access the elements of the array. 
*/

#include <stdio.h>
 

int main()
{
    int a[1000],i,n,max;
   
    printf("Enter size of the array: ");
    scanf("%d",&n);
 
    printf("Enter elements in array \n");
    for(i=0; i<n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d",&a[i]);
    }
 
    max=a[0];

    for(i=1; i<n; i++){
		if(max<a[i])
		max=a[i];       
    }
    
    printf("\nmaximum of array is : %d \n",max);
 
    return 0;
}