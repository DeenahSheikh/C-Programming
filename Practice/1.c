#include <stdio.h>

struct Student{
    char name[80];
    int rollno;
    int marks;

};


int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);

        struct Student s[N],temp;
        for(int i=0; i<N; i++){
            scanf("%s", s[i].name);
            scanf("%d", &s[i].rollno);
            scanf("%d",&s[i].marks);

            if(i==0||s[i].marks>temp.marks){
                temp=s[i];
            }
        
        }
        printf("%s %d\n", temp.name, temp.marks);
    }

    return 0;
}