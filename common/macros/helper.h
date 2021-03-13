/*
    file:helper.h
    desc:辅助
    auth:Carol Luo
*/

//通用
#define change(s,a,b) auto c=s[a];s[a]=s[b];s[b]=s[c]; //矢量交换
#define lastii(s) (s.size()-1)                         //矢量末尾
#define empty(s) (s.size()<=0)                         //矢量判空
#define remove(s) (s.pop_back())                       //矢量移除

//棋牌
#define getCard(COLOR,VALUE) ((COLOR<<4)|VALUE)    //合成牌
#define getColor(CARD)       ((CARD&0xF0)>>4)      //取花色
#define getValue(CARD)       (CARD&0x0F)           //取牌值