//arange in decreasing order of marks
//if marks same smaller roll no comes first
#include <stdio.h>

struct student{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct student s1[n],temp;

    for(int i=0;i<n;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].roll);
        scanf("%d",&s1[i].marks);
    }

    // write your code here
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s1[i].marks<s1[j].marks){
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            else if( s1[i].marks==s1[j].marks)
            { if(s1[i].roll<s1[j].roll){
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            }
            
        }
    }

    for(int i=0;i<n;i++){
        printf("\n%s ",s1[i].name);
        printf("%d ",s1[i].roll);
        printf("%d\n",s1[i].marks);
    }
    return 0;
}