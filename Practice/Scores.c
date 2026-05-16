// for every team find total points (3 point for win and 1 for draw) and
// goal difference(scored-conceded)
// then print team name with max point,max points,goal diff

// rules for tie
// if max point are same choose on basis of goal diff,
// if that also same then higher goal scoring
// if that also same then the team which comes first in order.

#include <stdio.h>

struct team{
    char name[100];
    int won;
    int draw;
    int lost;
    int goals_scored;
    int goals_conceded;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct team s1[n];

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].won);
        scanf("%d",&s1[i].draw);
        scanf("%d",&s1[i].lost);
        scanf("%d",&s1[i].goals_scored);
        scanf("%d",&s1[i].goals_conceded);
    }
    // for every team find total points (3 point for win and 1 for draw) and
// goal difference(scored-conceded)
// then print team name with max point,max points,goal diff

// rules for tie
// if max point are same choose on basis of goal diff,
// if that also same then higher goal scoring
// if that also same then the team which comes first in order.

    int gd=0;
    int max=0;
    int ind=0;
    int g=s1[0].goals_scored;
    for(int i=0;i<n;i++){
        int temppt=3*s1[i].won + s1[i].draw;
        int tempgd=s1[i].goals_scored-s1[i].goals_conceded;
        if(max<temppt){
            max=temppt;
            ind=i;
            gd=tempgd;
            g=s1[i].goals_scored;

        }
        else if(max==temppt){
            if(tempgd>gd){
                gd=tempgd;
                ind=i;
                g=s1[i].goals_scored;
            }
        else if(tempgd==gd){
            int tempG=s1[i].goals_scored;
            if(tempG>g){
                g=tempG;
                ind=i;
            }
        }        }
    }
    // then print team name with max point,max points,goal diff

printf("%s\n %d\n %d\n",s1[ind].name,max,gd);


    return 0;
}
//tough question
