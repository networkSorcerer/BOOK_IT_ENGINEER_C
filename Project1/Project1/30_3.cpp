//#include <stdio.h>
//#include <string.h>  // strlen �Լ� ����� ���� ��� �߰�
//
//char n[30];
//
//char* getname() {
//    printf("�̸� �Է� : ");
//    fgets(n, sizeof(n), stdin);  // �����ϰ� ����� �Է��� ����
//    // fgets()�� ���� ���ڸ� ������ �� �����Ƿ�, �̸� �����ϴ� �ڵ� �߰�
//    if (n[strlen(n) - 1] == '\n') {
//        n[strlen(n) - 1] = '\0';  // ���� ���� ����
//    }
//    return n;
//}
//
//int main() {
//    char* n1 = getname();  // ù ��° �̸� �Է�
//    char* n2 = getname();  // �� ��° �̸� �Է�
//    char* n3 = getname();  // �� ��° �̸� �Է�
//
//    printf("%s\n", n1);  // ù ��° �̸� ���
//    printf("%s\n", n2);  // �� ��° �̸� ���
//    printf("%s\n", n3);  // �� ��° �̸� ���
//}
