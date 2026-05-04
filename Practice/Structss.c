//2) input a struct student with name class and department and roll no in it and print it

#include <stdio.h>

struct student{
    char name[50];
    int class;
    char department[50];
    int roll;
};

int main(){
    int n;
    scanf("%d",&n);

    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].class);
        scanf("%s",s1[i].department);
        scanf("%d",&s1[i].roll);
    }

    for(int i=0;i<n;i++){
        printf("%s\n",s1[i].name);
        printf("%d\n",s1[i].class);
        printf("%s\n",s1[i].department);
        printf("%d\n",s1[i].roll);
    }

}