#include <stdio.h>

typedef struct{
    /* data */
    int a[2];
    double d;
} struct_t;

double fun(int i){
    volatile struct_t s;
    s.d = 3.14;
    s.a[i] = 1435;
    return s.d;
}

int main()
{
    printf("hello, wowrld??\n");
    double c = fun(0);
    printf( "Max value is : %f\n", c );
    printf( "输入 : %f\n", fun(1) );
    // printf( "Max value is : %f\n", fun(2) );
    // printf( "Max value is : %f\n", fun(3) );
    // printf( "Max value is : %f\n", fun(4) );
    // printf( "Max value is : %f\n", fun(5) );
    // printf( "Max value is : %f\n", fun(6) );

    printf("%f\n", .875);

    int a;
    a = sizeof(char);
    printf("%d", a);


    return 0;
}