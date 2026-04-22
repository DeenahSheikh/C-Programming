#include <stdio.h>

typedef float Temperature;
typedef int SensorID;
typedef int Status;

int main() {
    SensorID sensor;
    Temperature currentTemp;
    Temperature threshold;
    Status alertStatus;

    scanf("%d", &sensor);
    scanf("%f", &currentTemp);
    scanf("%f", &threshold);
    scanf("%d", &alertStatus);
    
    printf("Sensor ID: %d\n", sensor);
    printf("Current Temperature: %.1f\n", currentTemp);
    printf("Threshold: %.1f\n", threshold);
    printf("Alert Status: %d\n", alertStatus);

    Temperature difference= currentTemp-threshold;
    printf("Temperature Difference: %.1f\n", difference);

    if(currentTemp<0.0){
        printf("Category: Freezing\n");
    }
    else if(currentTemp>=0.0 && currentTemp<=25.0){
        printf("Category: Normal\n");
    }
    else if(currentTemp>25.0){
        printf("Category: Hot\n");
    }

    if(currentTemp>threshold && alertStatus==1){
        printf("Alert: Temperature exceeded threshold!");
    }
    else{
        printf("Alert: No alert triggered");
    }

    return 0;
}