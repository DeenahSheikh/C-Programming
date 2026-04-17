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
        int n;
        scanf("%d",&n);

        struct Student a[n],temp;
        for(int i=0; i<n ; i++){
            scanf("%s",a[i].name);
            scanf("%d",&a[i].rollno);
            scanf("%d",&a[i].marks);
        
        }

        for(int i=0; i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i].marks<a[j].marks){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }


        for(int i=0; i<n ; i++){
            printf("%s ",a[i].name);
            printf("%d ",a[i].rollno);
            printf("%d\n",a[i].marks);
        }
    }


    return 0;
}