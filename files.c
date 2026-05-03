#include <stdio.h>

int main(){
    FILE *fp;
    fp=fopen("a.txt","w");
    int data=5;
    fprintf(fp,"%d",data);
    fclose(fp);
    fp=fopen("a.txt","r");
    fscanf(fp,"%d",&data);
    printf("%d",data);
    fclose(fp);
}