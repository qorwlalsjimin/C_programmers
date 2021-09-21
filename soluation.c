#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len�� �迭 a�� �����Դϴ�.
// b_len�� �迭 b�� �����Դϴ�.
int main(void) {
    int a[4];
    int b[4];
    int a_len = sizeof(a) / sizeof(int);
    int b_len = sizeof(b) / sizeof(int);
    printf("�迭 a�� ���� 4�� �Է�\n");
    for (int i = 0; i < a_len; i++)
        scanf_s("%d", &a[i]);
    printf("\n�迭 b�� ���� 4�� �Է�\n");
    for (int i = 0; i < b_len; i++) 
        scanf_s("%d", &b[i]);
    int s = solution(a, a_len, b, b_len);
    printf("%d", s);
}

int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer=0;
    for (int i = 0; i < sizeof(a); i++)
        answer += a[i] * b[i];
    return answer;
}