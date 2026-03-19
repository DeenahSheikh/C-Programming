#include <stdio.h>

#define MAXN 100
#define MAXM 100

int N, M;
int grid[MAXN][MAXM];

int is_peak(int r, int c) {
    int dr[8]={-1,-1,-1,0,0,1,1,1};
    int dc[8]={-1,0,1,-1,1,-1,0,1};
    for(int k=0;k<8;k++){
        int nr=r+ dr[k];
        int nc=c+ dc[k];

        if(nr>=0 && nr< N && nc>=0 && nc<M){
            if(grid[nr][nc] >= grid[r][c]){
                return 0;
            }
        }
    }
    
    return 1; 
}

int main() {
    // Read dimensions
    if (scanf("%d %d", &N, &M) != 2) {
        return 1;
    }
    for(int i=0;i<N ;i++){
        for(int j=0; j<M;j++){
            scanf("%d",&grid[i][j]);
        }
    }

    int peak_r[MAXN * MAXM];
    int peak_c[MAXN * MAXM];
    int count=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M; j++){
            if(is_peak(i,j)){
                peak_r[count]=i;
                peak_c[count]=j;
                count++;
            }
        }
    }

    printf("%d\n", count);
    for(int i=0; i<count; i++){
        printf("%d %d\n", peak_r[i], peak_c[i]);
    }
    return 0;
}