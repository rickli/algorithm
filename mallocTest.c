#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 全局变量，大小为 10 的数组 array，长度 len，下标 i。
int array[10];
int len = 10;
int i = 20;

// 往数组中添加一个元素
void add(int element) {
    if (i >= len) { // 数组空间不够了
        // 重新申请一个 2 倍大小的数组空间
        int new_array[len*2];
        // 把原来 array 数组中的数据依次 copy 到 new_array
        for (int j = 0; j < len; ++j) {
            new_array[j] = array[j];
            printf("time count j ==  %d\n",j);
        }
        // new_array 复制给 array，array 现在大小就是 2 倍 len 了
//        array = new_array;
        memcpy(array,new_array,10*sizeof(int));
        len = 2 * len;
    }
    // 将 element 放到下标为 i 的位置，下标 i 加一
    array[i] = element;
    ++i;
    printf("time count i %d\n",i);
}


int f(int n) {
    int sum = 0;
    int i = 1;
    for(; i < n; ++i) {
        sum = sum + i;
    }
    return sum;
}

int cal(int n) {
   int ret = 0;
   int i = 1;
   for (; i < n; ++i) {
     ret = ret + f(i);
   }
   return ret;
 }

int main(int argc, char **argv) {
    int i = 0;
    for(i = 0; i < 1000000; i++) {
        void * result = malloc(32);
    }
    add(100);
    cal(10000);
    printf("hello world\n");
    exit(0);
}
