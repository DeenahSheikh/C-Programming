//avg salary and name of emp with min salary
#include <stdio.h>

struct employee{
    char name[100];
    int salary;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct employee s1[n];

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].salary);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=s1[i].salary;
    }
    float average= (float) sum/n;

    printf("%.2f\n",average);

    int min=s1[0].salary;
    int ind=0;
    for(int i=0;i<n;i++){
        if(s1[i].salary<min){
            min=s1[i].salary;
            ind=i;
        }
}
printf("%s",s1[ind].name);

    return 0;
}