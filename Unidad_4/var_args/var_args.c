#include <stdio.h>
#include <stdarg.h>

double average(int count, ...){
  double sum = 0;
  va_list args;
  va_start(args, count);
  for( int i=0; i<count; i++){
    double num = va_arg(args, double);
    sum += num;
  }
  va_end(args);
  return sum/count;
}

int main(void)
{
    printf("%f\n", average(4, 25.0, 27.3, 26.9, 25.7));
}
