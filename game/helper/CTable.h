/*
    file:CTable.h
    desc:桌子实现 
    auth:Carol Luo
*/

#include "ITable.h"

//游戏桌子
class CTable:public ITable
{
private:
    int m_tableID;      //桌子ID
    int m_maxCount;     //位置数量
    int m_historyID;    //战绩ID
    int m_combatID;     //小局ID
public:
    CTable(int tableID);
    ~CTable();
};
