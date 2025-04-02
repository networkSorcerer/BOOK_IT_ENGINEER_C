//#include <stdio.h>
//#include <string.h>  // strlen 함수 사용을 위한 헤더 추가
//
//char n[30];
//
//char* getname() {
//    printf("이름 입력 : ");
//    fgets(n, sizeof(n), stdin);  // 안전하게 사용자 입력을 받음
//    // fgets()는 개행 문자를 포함할 수 있으므로, 이를 제거하는 코드 추가
//    if (n[strlen(n) - 1] == '\n') {
//        n[strlen(n) - 1] = '\0';  // 개행 문자 제거
//    }
//    return n;
//}
//
//int main() {
//    char* n1 = getname();  // 첫 번째 이름 입력
//    char* n2 = getname();  // 두 번째 이름 입력
//    char* n3 = getname();  // 세 번째 이름 입력
//
//    printf("%s\n", n1);  // 첫 번째 이름 출력
//    printf("%s\n", n2);  // 두 번째 이름 출력
//    printf("%s\n", n3);  // 세 번째 이름 출력
//}
