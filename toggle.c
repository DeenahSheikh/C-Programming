#include <stdio.h>

int toggleKthBit(int n, int k)
{
   int m=1<<k;
   return m^n;

   /*
   1101
   0100

   1001
   */
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);

        printf("%d\n", toggleKthBit(n,k));
    }

    return 0;
}