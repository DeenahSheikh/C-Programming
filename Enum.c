#include <stdio.h>

enum TrafficLight{
    RED,
    YELLOW,
    GREEN
};
int main() {

    int input;
    scanf("%d", &input);
    

    enum TrafficLight currentLight;
    if(input==0){
        currentLight=RED;
    }
    else if(input==1){
        currentLight=YELLOW;
    }
    else if(input==2){
        currentLight=GREEN;
    }


    if(currentLight==RED){
        printf("Current light: RED\n");
    }
    else if(currentLight==YELLOW){
        printf("Current light: YELLOW\n");
    }
    else if(currentLight==GREEN){
        printf("Current light: GREEN\n");
    }


    printf("Numeric value: %d\n", currentLight);


        if(currentLight==RED){
        printf("Action: Stop\n");
    }
    else if(currentLight==YELLOW){
        printf("Action: Caution\n");
    }
    else if(currentLight==GREEN){
        printf("Action: Go\n");
    }


    int nextlight;
    if(currentLight==RED){
        nextlight=GREEN;
        printf("Next light: GREEN\n");
    }
    else if(currentLight==YELLOW){
        nextlight=RED;
        printf("Next light: RED\n");
    }
    else if(currentLight==GREEN){
        nextlight=YELLOW;
        printf("Next light: YELLOW\n");
    }
    return 0;
}