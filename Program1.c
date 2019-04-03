/* CS261- HW1 - Program1.c*/
/* Name: Jackson Perry
 * Date: 1/3/2019
 * Solution description:
 */

#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b, int c){
    /* Increment a */
    *a++;
    /* Decrement  b */
    *b--;
    /* Assign a-b to c */
    c=*a-*b;
    /* Return c */
    return c;
}

int main(){
    /* Declare three integers x,y and z and initialize them randomly to values in [0,10] */
    int x= rand()%11, y= rand()%11, z= rand()%11;
    /* Print the values of x, y and z */
    printf("x is %d, y is %d, z is %d", x, y, z);
    /* Call foo() appropriately, passing x,y,z as parameters */
    int a= foo(&x,&y,z);
    /* Print the values of x, y and z */
    printf("x is %d, y is %d, z is %d", x, y, z);
    /* Print the value returned by foo */
    printf("value returned by foo is %d", a);
    /* Is the return value different than the value of z?  Why? */
    //yes z is different because its value in the function goes away after it goes out of scope
    return 0;
}
