#include <stdio.h>

struct emp{
    int id;
    char name[100];
    int salary;
};

int main(){
    int n;
    scanf("%d",&n);
    struct emp s1[n];

    int min=0;
    int total=0;
    int index=0;
    for(int i=0;i<n;i++){
        scanf("%d",&s1[i].id);
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].salary);

        total+=s1[i].salary;

        if(s1[i].salary<min){
            min=s1[i].salary;
            index=i;
        }
    }

    printf("%d %s %d",s1[index].id,s1[index].name,s1[index].salary);
    printf("%d",total);

    return 0;
}