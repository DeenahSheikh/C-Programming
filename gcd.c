#include <stdio.h>
int gcd(int i,int j){
    if(j==0){
        return i;
    }
    else{
        return gcd(j,i%j);
    }
}
int main()
{
  int T, i, j;
  scanf("%d",&T);
  while(T--)
  {
    scanf("%d",&i);
    scanf("%d",&j);
    printf("%d\n",gcd(i, j));
  }
  return 0;
}