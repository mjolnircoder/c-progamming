#include<stdio.h>
#include<math.h>

int main(){

int a = 23;
int b = 32;
int z;
z = a*b; // legal
//b*a=z; illegal

printf("The value of z is %d\n", (z));
printf("The value of a+b is %d\n", (a+b));
printf("3 when divided by 2 leaves a remainder of %d\n", 3%2);


//no operators is assumed to be present
//for exponentiation use math.h library
printf("4 multiply by 2 is %d\n", 4*2);
printf("the value of 4 to power 5 is %f\n", pow(4,5));// usingfloat coz it returns double
return 0;
}