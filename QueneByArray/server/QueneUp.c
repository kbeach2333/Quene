#include <stdlib.h>
#include "../include/quene.h"

bool QueneUp(Quene *quene,ElemType NewPatinetID) {
    if((quene == NULL)|| (quene->Tail == MAX_SIZE-1)){//判断参数合法性
        return false;
    }
    quene->Tail++;                               //队尾指针+1
    quene->Data[quene->Tail] = NewPatinetID;     //进队
    return true;
}