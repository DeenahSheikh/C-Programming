#include <stdio.h>
void main(){
    FILE *fp;
    char Name[10][10];
    fp=fopen("a.txt","w");
    strcpy(Name[0],"First");
    strcpy(Name[1],"Second");
    strcpy(Name[2],"Third");

    fprintf(fp,"%s",Name[0]);
    fprintf(fp,"%s",Name[1]);
    fprintf(fp,"%s",Name[2]);

    fclose(fp);
    fp=fopen("a.txt","r");

    fscanf(fp,"%s",Name[0]);
    printf("%s",Name[0]);

    fscanf(fp,"%s",Name[1]);
    printf("%s",Name[1]);

    fscanf(fp,"%s",Name[2]);
    printf("%s",Name[2]);

    fclose(fp);
}