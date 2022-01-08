#include <stdio.h>
#include <unistd.h>

void cough(void);  // 函数原型

int main( )
{
   // float x = 0.1+0.2;
   // double y = 0.1+0.2;
  
   // printf("Enter a value for x :\n");
   // scanf( "%f", &x);
   // printf( "x is %.50f\n", x);
   
   // printf("Enter a value for y :\n");
   // scanf( "%lf", &y);   // 注意这里是 lf
   // printf( "y is %.50f\n", y);
   // cough_times = scanf( "%lf", &y);
   for (int i=1; ; i *= 2)
   {
      printf("%i\n", i);
      sleep(1);
   }

   
}

void cough(void)
{
   printf("cough!\n");
}
