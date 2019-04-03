/* CS261- HW1 - Program2.c*/
/* Name:  Jackson Perry
 * Date:  1/3/2019
 * Solution description:
 */

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
	char initials[2];
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
     struct student* st= malloc(10 * sizeof(struct student));
     /*return the pointer*/
     return st;
}

void generate(struct student* students){
     /*Generate random initials and scores for ten students.
	The two initial letters must be capital and must be between A and Z.
	The scores must be between 0 and 100*/
	int i;
  for(i=0; i<10; i++){
    students[i].initials[0]= rand()%26 + 'A';
    students[i].initials[1]= rand()%26 + 'A';
    students[i].score= rand()%101;
  }

}

void output(struct student* students){
     /*Output information about the ten students in the format:
              1. Initials  Score
              2. Initials  Score
              ...
              10. Initials Score*/
    int x=0, i;
    for(i=0; i<10; i++){
      x=i+1;
      printf("%d. %c%c %d\n", x, students[i].initials[0], students[i].initials[1], students[i].score);
    }
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/
     int min=101, max=-1, average;
		 int i;
     for(i=0; i<10; i++){
      if(students[i].score >max)
        max= students[i].score;
      if(students[i].score <min)
        min= students[i].score;
      average+= students[i].score;
     }
     average/=10;

     printf("max is %d, min is %d, and average is %d\n", max, min, average);
}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
     free(stud);
}

int main(){
    struct student* stud = NULL;

    /*call allocate*/
    stud=allocate();

    /*call generate*/
    generate(stud);
    /*call output*/
    output(stud);
    /*call summary*/
    summary(stud);
    /*call deallocate*/
    deallocate(stud);
    return 0;
}
