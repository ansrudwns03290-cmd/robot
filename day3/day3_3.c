#include <stdio.h>

int main(void){
    double mass, torque, gear, radius, SF, margin;
    int wheels;

    const double g = 9.81;
    const double c = 0.018;

    printf("총 하중(kg) : ");
    scanf("%lf", &mass);
    printf("구동 바퀴 수 : ");
    scanf("%d", &wheels);
    printf("안전계수 : ");
    scanf("%lf", &SF);
    printf("설계마진(20% == 1.2로 입력) : ");
    scanf("%lf", &margin);

    printf("모터 정격 토크(N*m) : ");
    scanf("%lf", &torque);
    printf("감속비 : ");
    scanf("%lf", &gear);
    printf("바퀴 반지름(m) : ");
    scanf("%lf", &radius);

    double W = mass * g;
    double F_min = c * W * SF * margin;
    double F_motor = (torque * gear / radius) * wheels;

    printf("\n필요한 최소 견인력 : %.2f [N]\n", F_min);
    printf("모터가 낼 수 있는 견인력 : %.2f [N]\n", F_motor);

    if (F_motor >= F_min){
        printf("판정 : 만족 (모터 견인력이 충분합니다.)\n");
    } else {
        printf("판정 : 불만족 (더 큰 모터나 감속비가 필요.)\n");
    }
    return 0;
}