#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    int age;

    printf("Please Enter your name ?");
    scanf("%s",name);
    printf("Enter your age");
    scanf("%d", &age);

    if (age>18)
    
        printf("%s is eligible to cast his/her vote", name);
    
    else
        
            printf("%s is not eligible to cast his/her vote", name);
        
}