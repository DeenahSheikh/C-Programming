#include <stdio.h>
/*int main()
{ int num, a, reverse=0, r;
    printf("Enter a number:");
    scanf("%d", &num);

    a= num;
    while (num!=0){
        r=num%10;
        reverse= reverse*10 +r;
        num=num/10;
    }
    if (a==reverse)
    printf("Pallindrome number");
    else
    printf("Not a pallindrome number");

    return 0;


}
*/


//for character
#define MAX 5
int main(){
    char Name[MAX]={'M','A','D','A','M'};
    int i,j;
    int flag=1;

    i=0;
    j=MAX-1;
    
    while(i<j){
        if(Name[i] != Name[j]){
            flag=0;
            break;
        }
        i++;
        j--;
    }

    if (flag==1)
        printf("Pallindrome");
    else
        printf("Not a Pallindrome");

    return 0;
}