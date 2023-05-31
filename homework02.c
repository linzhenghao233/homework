#include <stdio.h>

int findNumber(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // 找到目标数，返回下标值
        }
    }
    return -1;  // 数组中不存在目标数，返回-1
}

int main(void) {
    int arr[5] = { 2,0,1,3,4 };
    findNumber(*arr, 5, 3);

    return 0;
}