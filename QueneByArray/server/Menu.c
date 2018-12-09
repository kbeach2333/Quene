#include <stdio.h>
#include <stdlib.h>
#include "../include/quene.h"
void Menu(void) { 
    int i;
    int id;
    Quene *quene;
    quene = CreateQuene();
    while(true) {
        ShowMessage();
        scanf(" %d",&i);
        switch (i) {
            case 1: 
                printf("正在排队,请输入病例号:");
                scanf(" %d",&id);
                if(QueneUp(quene,id)) {
                    printf("排队成功\n");
                }else {
                    printf("排队失败,队伍满了\n");
                }
                break;
            case 2: 
                SeeDoctor(quene);
                break;
            case 3:
                ShowQuene(quene);
                break;
            case 4:
                Dissolve(quene);
                break;
            case 5:
                Close(quene);
                exit(0);
            default:
                printf("请检查输入\n");
                break;
        }
    }
}