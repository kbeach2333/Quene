#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/quene.h"
bool Dissolve(Quene *quene) {
    if(quene == NULL) {
        printf("参数不合法");
        return false;
    }
    int head = quene->Head;                //fot循环里写起来方便
    int tail = quene->Tail;
    int patientCounter = 0;                //计数器
    for(int i=head; i<=tail; i++) {
        patientCounter++;
        sleep(1);                       //让程序休眠一秒
        printf("病人%d就诊,病例号为:%d\n",patientCounter,quene->Data[i]);
    }
    return true;
}