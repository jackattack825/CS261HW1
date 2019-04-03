/* CS261- HW1 - Program4.c*/
/* Name:
 * Date:
 * Solution description:
 */

#include <stdio.h>
#include <stdlib.h>

struct student{
	char initials[2];
	int score;
};

void sort(struct student* stud, int n){
     /*Sort n studdents based on their initials*/
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n=10;
    /*Allocate memory for n stud using malloc.*/
    int* stud= (int) malloc(n* sizeof(int));
    /*Generate random IDs and scores for the n stud, using rand().*/
    for(int i=0; i<n; i++){
      stud[i].initials[0]= (char) rand()%26 + 65;
      stud[i].initials[0]= (char) rand()%26 + 65;
      stud[i].score= rand()%101;
    }
    /*Print the contents of the array of n stud.*/
    for(int i=0; i<n; i++){
      x=i+1;
      printf("%d. %c%c %d\n", x, stud[i].initials[0], stud[i].initials[1], stud[i].score);
    }
    /*Pass this array along with n to the sort() function*/
    sort(stud, n);
    /*Print the contents of the array of n stud.*/
    for(int i=0; i<n; i++){
      x=i+1;
      printf("%d. %c%c %d\n", x, stud[i].initials[0], stud[i].initials[1], stud[i].score);
    }
    return 0;
}
