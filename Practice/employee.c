#include <stdio.h>

struct Employee{
    char name[80];
    int id;
    int salary;
};
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);

        struct Employee a[n],temp;
        for(int i=0;i<n;i++){
            scanf("%s",a[i].name);
            scanf("%d",&a[i].id);
            scanf("%d",&a[i].salary);
        }

        for(int i=0; i<n-1;i++){
            for(int j=i+1; j<n;j++){
                if(a[i].salary>a[j].salary){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }


         for(int i=0;i<n;i++){
            printf("%s ",a[i].name);
            printf("%d ",a[i].id);
            printf("%d\n",a[i].salary);
        }

    }
    return 0;}
