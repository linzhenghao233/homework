#include <stdio.h>

int findNumber(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // �ҵ�Ŀ�����������±�ֵ
        }
    }
    return -1;  // �����в�����Ŀ����������-1
}

int main(void) {
    int arr[5] = { 2,0,1,3,4 };
    findNumber(*arr, 5, 3);

    return 0;
}