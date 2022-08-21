#include <stdio.h>


void main(void){

int x,y,z;
x = 3, y = 7, z = 9;
int *p = &x;
int *q = &y;
int *r = &z;

printf("\nthe value of x is:%d", x);
printf("\nthe value of z is:%d", z);
printf("\nthe value of y is:%d", y);

printf("\nthe value of p is:%x", p);
printf("\nthe value of q is:%x", q);
printf("\nthe value of r is:%x", r);


printf("\nthe value of *p is:%d", *p);
printf("\nthe value of *q is:%d", *q);
printf("\nthe value of *r is:%d", *r);

r = p;

p = q;
q = r;

printf("\nSwapping pointers....");

printf("\nthe value of x is:%d", x);
printf("\nthe value of z is:%d", z);
printf("\nthe value of y is:%d", y);

printf("\nthe value of p is:%x", p);
printf("\nthe value of q is:%x", q);
printf("\nthe value of r is:%x", r);


printf("\nthe value of *p is:%d", *p);
printf("\nthe value of *q is:%d", *q);
printf("\nthe value of *r is:%d", *r);

}
