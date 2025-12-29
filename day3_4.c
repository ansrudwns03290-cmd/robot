#include<stdio.h>

float i_load, vel, r;
float v, c, eta;

int main(void)
{
    float e_usable, p, t, d;

    printf("----Prior Information----\n");
    printf("Input i_load(A): ");
    scanf("%f", &i_load);
    printf("Input vel(km/h): ");
    scanf("%f", &vel);
    printf("Input r: ");
    scanf("%f", &r);
    printf("----Batery Information---\n");
    printf("Input V(V): ");
    scanf("%f", &v);
    printf("Input C(Ah): ");
    scanf("%f", &c);
    printf("Input eta: ");
    scanf("%f", &eta);
    
    e_usable = v * c * eta * (1-r);
    p = v * i_load / eta;
    t = e_usable / p;
    d = vel * t;
    printf("----Result----\n");
    printf("Usable Energy:(Wh): %f\n", e_usable);
    printf("Power(W): %f\n", p);
    printf("Run Time(h): %f\n", t);
    printf("Mileage(Km): %f\n", d);
    return 0;
}