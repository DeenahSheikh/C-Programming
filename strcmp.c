#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char username[100];
    char password[100];
    int successful_logins = 0;
    
    for(int i=0; i<n; i++){
        scanf("%s", username);
        scanf("%s",password);
        if (strcmp(username, "admin")==0){
            if(strcmp(password, "secret123")==0){
                printf("Login successful\n");
                successful_logins++;
            }
            else{
                printf("Invalid password\n");
            }
        }
        else if(strcmp(username,"admin")!=0){
            if(strcmp(password, "secret123")==0){
                printf("Invalid username\n");
            }
            else{
                printf("Invalid credentials\n");
            }
        }
    }
    
    printf("Total successful logins: %d\n", successful_logins);
    
    return 0;
}