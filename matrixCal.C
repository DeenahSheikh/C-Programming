#include <stdio.h>

void processMatrix(int matrix[][3], int size) {
    int sum=0;
    int maind=0;
    int anti=0;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sum+=matrix[i][j];

            if(i==j){
                maind+=matrix[i][j];
            }
            if(i+j==size-1){
                anti+=matrix[i][j];
            }
        }
    }
    
    printf("Sum of all elements: %d\n", sum);
    printf("Sum of main diagonal: %d\n", maind);
    printf("Sum of anti-diagonal: %d\n", anti);

}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    processMatrix(matrix, 3);
    
    return 0;
}