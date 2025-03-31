//#include <stdio.h>
//
//// chkover 함수 선언
//int chkover(int w, int h, int j, int i);
//
//int main() {
//    int field[4][4] = { {0,1,0,1},{0,0,0,1},{1,1,1,0 },{0,1,1,1} };
//    int mines[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
//    int w = 4, h = 4;
//
//    for (int y = 0; y < h; y++) {
//        for (int x = 0; x < w; x++) {
//            // 현재 위치가 지뢰인 경우
//            if (field[y][x] == 0) continue;
//
//            // 주변 8개 셀을 확인
//            for (int j = y - 1; j <= y + 1; j++) {
//                for (int i = x - 1; i <= x + 1; i++) {
//                    // 유효한 좌표인지 체크
//                    if (chkover(w, h, j, i) == 1)
//                        mines[j][i] += 1;  // 주변 셀에 지뢰가 하나 추가된 것으로 계산
//                }
//            }
//        }
//    }
//
//    // mines 배열 출력
//    for (int y = 0; y < h; y++) {
//        for (int x = 0; x < w; x++) {
//            printf("%d ", mines[y][x]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//// chkover 함수 정의: 좌표가 유효한지 확인
//int chkover(int w, int h, int j, int i) {
//    if (i >= 0 && i < w && j >= 0 && j < h) return 1; // 유효한 좌표
//    return 0;  // 유효하지 않은 좌표
//}
