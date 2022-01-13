#include <stdio.h>

void echo()
{
  char buf[4];   // stored on the stack
  gets(buf);
  puts(buf);
}

int main()
{
  printf("type a string:");
  echo();
  return 0;

}
