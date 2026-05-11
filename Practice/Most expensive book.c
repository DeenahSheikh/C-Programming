//most expensive book name and total pagea of all books

#include <stdio.h>

struct book{
    char title[100];
    int pages;
    int price;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct book s1[n];
    for(int i=0;i<n;i++){
        scanf("%s",s1[i].title);
        scanf("%d",&s1[i].pages);
        scanf("%d",&s1[i].price);
    }

    int max=s1[0].price;
    int ind=0;
    for(int i=0;i<n;i++){
        if(s1[i].price>max){
            max=s1[i].price;
            ind=i;
        }
    }
    printf("%s\n",s1[ind].title);

    int total=0;
    for(int i=0;i<n;i++){
        total+= s1[i].pages;
    }
    printf("%d",total);


    return 0;
}