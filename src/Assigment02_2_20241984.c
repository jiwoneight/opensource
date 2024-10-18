#include <stdio.h>

int main() {
    double area = 1.0;  // 초기 면적을 1로 설정
    double reduction = 0.5;  // 접을 때마다 면적이 1/2로 줄어듦
    double target_area = area / 100;  // 목표 면적
    int count = 0;  // 접는 횟수

    // 1/100이 될 때 까지 반복
    while (area > target_area) {
        area *= reduction;  // 면적을 절반으로 줄임
        count++;  // 접는 횟수 증가
    }

    // 결과 출력
    printf("종이를 %d번 접어야 원래 면적의 1/100로 줄어듭니다.\n", count);

    return 0;
}