// calc average (runs / matches) then print name of player with max avg and his avg
#include <stdio.h>

struct player{
    char name[100];
    int matches;
    int runs;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct player s1[n];

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].matches);
        scanf("%d",&s1[i].runs);
    }


    float max=s1[0].runs/s1[0].matches;
    int ind=0;
    for(int i=0;i<n;i++){
        float avg=s1[i].runs/s1[i].matches;
        if(max<avg){
            max=avg;
            ind=i;

        }
    }
    printf("%s\n",s1[ind].name);
    printf("%.2f",max);

    return 0;
}