#include <stdio.h>

struct Citizen{
    char name[80];
    int age;
    char city[80];
};

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);

        struct Citizen a[n],temp;
        for(int i=0; i<n;i++){
            scanf("%s",a[i].name);
            scanf("%d",&a[i].age);
            scanf("%s",a[i].city);

            if(i==0 || a[i].age>temp.age){
                temp=a[i];
            }
        }
        printf("%s %d\n",temp.name,temp.age);
    }

    return 0;
}


//oldest
