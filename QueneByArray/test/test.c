#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p;
    test(p);

    if(p==NULL){
        printf("测试失败");
    }else {
        printf("测试成功");
    }
}

void test(int *t){
    t = (int*)malloc(sizeof(int));
    if(t==NULL){
        printf("内存分配失败");
    }else{
        printf("内存分配成功");
    }
}
