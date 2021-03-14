
/*
    file:occupied.h
    desc:占位对象
    auth:Carol Luo
*/

#include "COccupied.h"

#define empty(s) (s.size()<=0)
#define remove(s) (s.pop_back())
#define latpos(s) (s.size()-1)
#define latval(s) (s[latpos(s)])

//构造
COccupied::COccupied(uint mini, uint maxi, uint used):
m_mini(mini),m_maxi(maxi),m_used(used),m_curr(used),m_count(0)
{
}
//析构
COccupied::~COccupied()
{
}
 //申请
 bool COccupied::fetch()
 {
    if(empty(m_list))
    {
        if(m_used >= m_maxi)
            return false;
        
        m_curr = ++m_used;
    }
    else
    {
        m_curr = latval(m_list);
        remove(m_list);
    }

    m_count++;
    return true;
 }
 //回收
 void COccupied::repay(uint occ)
 {
    m_list.push_back(occ);
    m_count--;
 }
 //读取
 uint COccupied::readi()
 {
    return m_curr;
 }

 //数量
uint COccupied::count()
{
    return m_count;
}