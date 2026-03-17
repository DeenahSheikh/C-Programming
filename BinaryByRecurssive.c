#include <stdio.h>

int bs(int a[], int l, int h, int x) {
    if (l > h) return -1;
    int m = (l + h) / 2;
    if (a[m] == x) return m;
    if (x < a[m]) return bs(a, l, m - 1, x);
    return bs(a, m + 1, h, x);
}

int main() {
    int a[] = {2,5,7,10,14};
    int n = 5, x = 10;
    int r = bs(a, 0, n - 1, x);

    if (r != -1) printf("Found at %d", r);
    else printf("Not found");
}