// #include <stdio.h>

//1.
// int average(int x, int y, int z);
// int main()
// {
//     int a = 1;
//     int b = 4;
//     int c = 5;
//     printf("Average of a,b and c is %d", average(a,b,c));
//     return 0;
// }

// int average(int x, int y, int z){
//    int d = (x+y+z)/3;
//    return d;

// }

//2.
// #include <stdio.h>
// float force(float mass);
// int main()
// {
//     float m;
//     printf("The value of mass in kg\n");
//     scanf("%f", &m);
//     printf("The result is %.2f", force(m));
//     // printf("The result is %f", force(m));
//     return 0;
// }
// float force(float mass)
// {
//     float result = mass * 9.8;
//     return result;
// }

//3.
#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}