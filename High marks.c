//name of stud with highest marks
#include <stdio.h>

struct student{
    char name[100];
    int marks;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct student s1[n];

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[n].marks);
    }

    int high=s1[0].marks;
    int ind=0;
    for(int i=0;i<n;i++){
        if(high<s1[i].marks){
            high=s1[i].marks;
            ind=i;
        }
    }

    printf("%s",s1[ind].name);

    return 0;
}