#include <stdio.h>
#include <stdlib.h>
#include "../include/quene.h"
bool SeeDoctor(Quene *quene) {
    if((quene == NULL)||(quene->Head == quene->Tail)) {//参数合法性判断
        printf("参数不合法或队列为空\n");
        return false;
    }
    quene->Head++;                                     //队头指针+1
    printf("病人就诊,病例号为:%d\n",quene->Data[quene->Head]);
    return true;
}