#include <stdio.h>
#include <stdlib.h>
#include "../include/quene.h"
void ShowQuene(Quene *quene) {
    if(quene == NULL) {
        printf("参数不合法");
    }
    int head = quene->Head;                //fot循环里写起来方便
    int tail = quene->Tail;
    int patientCounter = 0;                //计数器
    for(int i=head; i<=tail; ++i) {
        patientCounter++;
        printf("病人%d,病例号为:%d\n",patientCounter,quene->Data[i]);
    }
}