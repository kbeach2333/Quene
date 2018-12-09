#ifndef _QUENE_H_
#define _QUENE_H_

#define MAX_SIZE 10                     //数组队列存储的最大值
#include <stdbool.h>
typedef int ElemType;                   // 抽象数据 因为这里是要存储病例号所以定义的int 可以换成你乐意的

typedef struct node {                   // 队列结构
    ElemType Data[MAX_SIZE];            //存储数据的数组
    int Head;                           //指向队头
    int Tail;                           //指向队尾
} Quene;

/****定义方法****/
Quene *CreateQuene();                   //创建队列
bool QueneUp(Quene *quene,ElemType NewPatinetID);     //使用布尔类型是为了判断是否排队成功
bool SeeDoctor(Quene *quene);                       //出队，就诊
bool Dissolve(Quene *quene);                        //不再排队
void ShowQuene(Quene *quene);                       //查看排队
void Close(Quene *quene);                           //下班
void Menu(void);                                    //选择菜单,用来组织这些程序
void ShowMessage();
#endif