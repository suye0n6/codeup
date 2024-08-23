#include <stdio.h>

int n;

#include "stdbool.h"
bool zero(int N){
    if (N==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}