#include <stdio.h>
//scan a struct and print it
struct abc{
    char name[50];
    int roll;
};
 int main(){
    struct abc s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.roll);

    printf("%s\n%d",s1.name, s1.roll);

 }