#include <stdio.h>

struct Product{
    char name[80];
    int id;
    int price;
};
int main(){

    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);

        struct Product p[N],temp;

        for(int i=0; i<N; i++){
            scanf("%s",p[i].name);
            scanf("%d",&p[i].id);
            scanf("%d",&p[i].price);

            if(i==0||p[i].price<temp.price){
                temp=p[i];
            }
        }
        printf("%s %d\n",temp.name,temp.id);

    }

    return 0;
}