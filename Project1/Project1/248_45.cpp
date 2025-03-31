//#include <stdio.h>
//
//int main() {
//    int num[10];
//    int min;  // 초기값을 따로 설정하지 않음
//    int i;
//
//    // 10개의 숫자 입력 받기
//    for (i = 0; i < 10; i++) {
//        scanf_s("%d", &num[i]);
//    }
//
//    // 첫 번째 값으로 min을 초기화
//    min = num[0];
//
//    // 나머지 값들과 비교하여 가장 작은 값 찾기
//    for (i = 1; i < 10; i++) {
//        if (min > num[i]) {
//            min = num[i];
//        }
//    }
//
//    // 결과 출력
//    printf("가장 작은 값은 %d이다", min);
//
//    return 0;
//}
