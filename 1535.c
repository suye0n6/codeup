#include <stdio.h>

int n, d[110];


int f()
{
    int a, m = 0;
    while(n--)
    {
        if(d[n] >= m)
        {
            m = d[n];
            a = n + 1;
        }
        
    }
    
     return a;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}