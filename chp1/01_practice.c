#include<stdio.h>

int main(){
int r = 2;
float pi = 3.14;
printf("The area of circle is %f\n", pi*r*r);
int height = 34;
printf("The volume of cylinder is %f\n", pi*r*r*height);



float c = 3;
float far = (c*9/5)+32;
printf("the value of c in far is %f\n", far);



int principle = 180, rate = 4, years = 2;
int simpleInterest;
simpleInterest = (principle*rate*years)/100;
printf("the simple interest is %d\n", simpleInterest);
return 0;
}