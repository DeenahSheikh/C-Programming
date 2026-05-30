#include <stdio.h>
#include <math.h>


//calcualte total compound interest 
// if principal amount is more than 50000 than add 1 to rate;
// else print normal CI
double calculateCompoundInterest(double P, double R, int T) {
    float temp;
    double CI;

    if(P>50000){
        temp=(1+(R+1)/100);
        CI=P*pow(temp,T)-P;
    }
    else{
        temp=(1+ R/100);
        CI=P*pow(temp,T)-P;
    }
}

int main() {
    double P, R;
    int T;

    scanf("%lf %lf %d", &P, &R, &T);

    double result = calculateCompoundInterest(P, R, T);

    printf("%.2f\n", result);

    return 0;
}