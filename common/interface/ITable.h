/*
    file:ITable.h
    desc:桌子接口 
    auth:Carol Luo
*/

//桌子接口
class ITable {
    public:
    //获取桌子ID
    virtual int getTableID();
    //获取战绩ID
    virtual int getHistoryID();
    //获取对局ID
    virtual int getCombatID();
    //获取位置数量
    virtual int getMaxChair();
    //获取玩家数量
    virtual int getPlayCount();
};
