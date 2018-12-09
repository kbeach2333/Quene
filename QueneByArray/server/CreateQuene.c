#include <stdlib.h>
#include "../include/quene.h"

Quene *CreateQuene() {
    Quene *quene;
    quene = (Quene *)malloc(sizeof(Quene));          //分配内存空间
    if(quene == NULL) {//判断内存空间是否分配成功
        return NULL;
    }
    quene->Head = quene->Tail = -1;                    //此时队列内为空所以头尾指针都为-1
    return quene;
}