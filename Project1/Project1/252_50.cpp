//#include <stdio.h>
//
//// chkover �Լ� ����
//int chkover(int w, int h, int j, int i);
//
//int main() {
//    int field[4][4] = { {0,1,0,1},{0,0,0,1},{1,1,1,0 },{0,1,1,1} };
//    int mines[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
//    int w = 4, h = 4;
//
//    for (int y = 0; y < h; y++) {
//        for (int x = 0; x < w; x++) {
//            // ���� ��ġ�� ������ ���
//            if (field[y][x] == 0) continue;
//
//            // �ֺ� 8�� ���� Ȯ��
//            for (int j = y - 1; j <= y + 1; j++) {
//                for (int i = x - 1; i <= x + 1; i++) {
//                    // ��ȿ�� ��ǥ���� üũ
//                    if (chkover(w, h, j, i) == 1)
//                        mines[j][i] += 1;  // �ֺ� ���� ���ڰ� �ϳ� �߰��� ������ ���
//                }
//            }
//        }
//    }
//
//    // mines �迭 ���
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
//// chkover �Լ� ����: ��ǥ�� ��ȿ���� Ȯ��
//int chkover(int w, int h, int j, int i) {
//    if (i >= 0 && i < w && j >= 0 && j < h) return 1; // ��ȿ�� ��ǥ
//    return 0;  // ��ȿ���� ���� ��ǥ
//}
