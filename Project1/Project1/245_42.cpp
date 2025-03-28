//#include <stdio.h>
//#define s 6
//
//void bubble_sort(int list[]) {
//    int j, k, p, tmp;
//    for (j = 1; j < s; j++) {
//        for (k = 0; k < s - j; k++) {
//            if (list[k] > list[k + 1]) {  // list[k]와 list[k + 1] 비교
//                tmp = list[k];
//                list[k] = list[k + 1];
//                list[k + 1] = tmp;
//            }
//            for (p = 0; p < s; p++)
//                printf("%d ", list[p]);  // 리스트 출력
//            printf("\n");
//        }
//    }
//}
//
//int main() {
//    int list[s] = { 9, 4, 3, 6, 8, 1 };
//    int i;
//    for (i = 0; i < s; i++)
//        printf("%d ", list[i]);  // 초기 값 출력
//    printf("\n");
//    bubble_sort(list);  // 버블 정렬 함수 호출
//}
