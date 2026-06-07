//print total as product * qty and name of product with max qty
#include <stdio.h>
struct product{
    char name[100];
    int price;
    int qty;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct product s1[n];

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].price);
        scanf("%d",&s1[i].qty);
    }
    int max=s1[0].qty;
    int ind=0;
    int total=0;
    for(int i=0;i<n;i++){
        total=s1[i].price * s1[i].qty;

        if(s1[i].qty>max){
            max=s1[i].qty;
            ind=i;
        }
    }

    printf("%d\n", total);
    printf("%s",s1[ind].name);

    return 0;
}