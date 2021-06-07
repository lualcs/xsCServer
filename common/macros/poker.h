/*
    file:helper.h
    desc:辅助
    auth:Carol Luo
*/

//棋牌
#define getCard(COLOR,VALUE) ((COLOR<<4)|VALUE)    //合成牌
#define getColor(CARD)       ((CARD&0xF0)>>4)      //取花色
#define getValue(CARD)       (CARD&0x0F)           //取牌值