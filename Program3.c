/* CS261- HW1 - Program3.c*/
/* Name:  Jackson Perry
 * Date:  1/3/19
 * Solution description:
 */

#include <stdio.h>

void sort(int* number, int n){
     /*Sort the array of integeres of length n*/
     /*used bubble sort */
     int temp, i, j;
     for(i=0; i<n-1; i++){
       for(j=0; j<n-1; j++){
         if(number[j] > number[j+1]){
           temp= number[j];
           number[j]= number[j+1];
           number[j+1]=temp;
         }
       }
     }
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
    int n=20;
    /*Allocate memory for an array of n integers using malloc.*/
    int* arr= malloc(n* sizeof(int));
    /*Fill this array with random numbers, using rand().*/
    int i;
    for(i=0; i<n; i++){
      arr[i]= rand()%100;
    }
    /*Print the contents of the array.*/
    for(i=0; i<n; i++){
      printf("%d ", arr[i]);
    }
    /*Pass this array along with n to the sort() function of part a.*/
    sort(arr, n);
    /*Print the contents of the array.*/
    printf("\n");
    for(i=0; i<n; i++){
      printf("%d ", arr[i]);
    }
    if(arr!=NULL)
      free(arr);
    return 0;
}
