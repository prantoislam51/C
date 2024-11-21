

#include <stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    // Input
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    // Number of Toast from Drink
    int toastD = (k * l) / nl;
    // Number of Toast from Limes
    int toastL = (c * d) / 1;
    // Number of Toast from Salt
    int toastS = p / np;
    // Minimum of toastD, toastL, toastS
    int minOfToastDLS = (toastD < toastL) ? (toastD < toastS ? toastD : toastS) : (toastL < toastS ? toastL : toastS);
    // Number of Toast each friend can make
    int toastPerHead = minOfToastDLS / n;
    // Output
    printf("%d\n", toastPerHead);
    return 0;
}
