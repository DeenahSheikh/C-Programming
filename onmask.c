/* Set the kth bit (0-based indexing) of n
   and return the updated number */

#include <stdio.h>
int setKthBit(int n, int k)
{
    int m=1<<k;
    return m|n;
    /*n=5
    k=1
    o=7*/
}
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);

        printf("%d\n", setKthBit(n,k));
    }

    return 0;
}