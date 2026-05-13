// arrange in increasing order of age
// if age same then higher salary comes first

#include <stdio.h>

struct worker{
    char name[100];
    int age;
    int salary;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct worker s1[n],temp;

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].age);
        scanf("%d",&s1[i].salary);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s1[i].age>s1[j].age){
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            else if(s1[i].age==s1[j].age){
                if(s1[i].salary<s1[j].salary){
                    temp=s1[i];
                    s1[i]=s1[j];
                    s1[j]=temp;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("\n%s ",s1[i].name);
        printf("%d ",s1[i].age);
        printf("%d\n",s1[i].salary);
    }

    return 0;
}