//#include <stdio.h>
//
//int isprime(int number) {
//    int i;
//    for (i = 2; i < number; i++)
//        if (number % i == 0)  // number가 i로 나누어떨어지면 소수가 아님
//            return 0;
//    return 1;  // 나누어떨어지는 수가 없으면 소수임
//}
//
//int main() {
//    int number = 99, cnt = 0, i;
//    for (i = 2; i <= number; i++)
//        cnt = cnt + isprime(i);  // 소수일 경우 cnt 증가
//    printf("%d를 넘지 않는 소수는 %d개입니다. \n", number, cnt);
//    return 0;
//}
