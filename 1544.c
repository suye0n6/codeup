#include <stdio.h>

int n;

void f(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("*", n);
    }
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}