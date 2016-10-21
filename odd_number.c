#include<stdio.h>
#include<stdbool.h>

bool is_odd(int x)
{
  return (x % 2 != 0);
}

int main()
{
  int i = 0;
  while (i < 100)
  {
    i++;
    if (is_odd(i))
    {
      printf("%d\n", i);
    }
  }
  return 0;
}
