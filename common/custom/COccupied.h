/*
    file:occupied.h
    desc:占位对象
    auth:Carol Luo
*/

#include <vector>

typedef unsigned int uint;
typedef std::vector<uint> ints;

class COccupied
{
private:
    //已用最大值
    uint m_used;
    //当前使用值
    uint m_curr;
    //限制最小值
    uint m_mini;
    //限制最大值
    uint m_maxi;
    //占用计数量
    uint m_count;
    //回收列表
    ints m_list;
public:
    COccupied(uint mini, uint maxi, uint used);
    ~COccupied();

    //申请
    bool fetch();
    //回收
    void repay(uint occ);
    //读取
    uint readi(); 
    //数量
    uint count();
};


