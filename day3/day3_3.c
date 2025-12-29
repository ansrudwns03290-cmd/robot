#include<stdio.h>

int main(void)
{
    int N, m, G, W;
    float t, R, SF, DM;
    float c = 0.018, g = 9.81;
    float f_min, f_motor;

    printf("Input N: ");
    scanf("%d", &N);
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input SF: ");
    scanf("%f", &SF);
    printf("Input DM: ");
    scanf("%f", &DM);
    printf("Input R: ");
    scanf("%f", &R);
    printf("Input t: ");
    scanf("%f", &t);
    printf("Input G: ");
    scanf("%d", &G);
    W = m * g;
    f_min = c * W * SF * DM;
    f_motor = t * G * N / R;

    printf("총 하중(kg): %d\n", m);
    printf("구동 바퀴 수: %d\n", N);
    printf("모터 정격 토크(N*m): %f\n", t);
    printf("감속비: %d\n", G);
    printf("바퀴 반지름(m): %d\n\n", m);
    printf("필요한 최소 견인력: %f\n", f_min);
    printf("모터가 낼 수 있는 견인력: %f\n", f_motor);
    
    if(f_min <= f_motor)
        printf("판정: 만족\n");
    else
        printf("판정: 불만족 (더 큰 모터나 감속비가 필요합니다.)\n");
}