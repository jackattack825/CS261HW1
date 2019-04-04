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
		 struct student temp;
		 int i, j;
		 for(i=0; i<n-1; i++){
			 for(j=0; j<n-1; j++){
				 if(stud[j].initials[0] > stud[j+1].initials[0]){
					 temp= stud[j];
					 stud[j]= stud[j+1];
					 stud[j+1]=temp;
				 }
				 else if(stud[j].initials[0] == stud[j+1].initials[0]){
					 if(stud[j].initials[1] > stud[j+1].initials[1]){
						 temp= stud[j];
						 stud[j]= stud[j+1];
						 stud[j+1]=temp;
					 }
				 }
			 }
		 }
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n=10;
    /*Allocate memory for n stud using malloc.*/
    struct student* stud= malloc(n* sizeof(struct student));
		int i, x;
    /*Generate random IDs and scores for the n stud, using rand().*/
    for(i=0; i<n; i++){
      stud[i].initials[0]= rand()%26 + 'A';
      stud[i].initials[1]= rand()%26 + 'A';
      stud[i].score= rand()%101;
    }
    /*Print the contents of the array of n stud.*/
    for(i=0; i<n; i++){
      x=i+1;
      printf("%d. %c%c %d\n", x, stud[i].initials[0], stud[i].initials[1], stud[i].score);
    }
    /*Pass this array along with n to the sort() function*/
    sort(stud, n);
    /*Print the contents of the array of n stud.*/
    for(i=0; i<n; i++){
      x=i+1;
      printf("%d. %c%c %d\n", x, stud[i].initials[0], stud[i].initials[1], stud[i].score);
    }
    return 0;
}
