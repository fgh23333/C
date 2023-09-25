#include <stdio.h>
#include <math.h>

int main() {
    double pi = M_pi;
    int h;
    float r;
    double c, s, surface, v1, v2;
    scanf("%f", &r);
    scanf("%d", &h);
    c = pi * 2 * r;
    s = pi * r * r;
    surface = 4 * pi * r * r;
    v1 = 4 * pi * r * r * r / 3;
    v2 = s * h;
    printf("圆周长为：%lf", c)
    return 0;
}