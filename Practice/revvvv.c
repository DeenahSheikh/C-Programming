#include <stdio.h>
/* Include other headers as needed */
int main()
{int n;
 scanf("%d",&n);
 int rev=0;
 while(n>0){
     int digit=n%10;
     digit=digit+1;
     rev=rev*10+digit;
     n=n/10;
 }
 int resu=0;
 while(rev>0){
     int digit=rev%10;
     resu=resu*10 +digit;
     rev=rev/10;
 }
 printf("%d",resu);
 
 
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}