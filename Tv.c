#include <stdio.h>

int main() {
    // Write code here
    int num;
    int width = 0, height = 0;
    int firstRow = 1;

    while (1) {
        int count = 0;

        // read one row
        while (1) {
            scanf("%d", &num);
            count++;

            if (num == 3) {   // power button → stop
                if (firstRow) width = count;
                height++;
                printf("%d", height);
                printf(" %d\n", width);
                return 0;
            }

            char c = getchar(); // check if line ended
            if (c == '\n')
                break;
        }

        if (firstRow) {
            width = count;
            firstRow = 0;
        }

        height++;
    }

    return 0;
};