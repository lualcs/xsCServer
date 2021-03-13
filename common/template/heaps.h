#pragma once
#include <vector>
#include "../macros/helper.h"

#define is_left(pos)   (pos % 2 == 0)                   //是否左节点
#define is_right(pos)  (!is_left(pos))                  //是否右节点

#define get_super(pos) (is_left(pos)?pos/2:(pos-1)/2)   //获取父节点
#define get_lchil(pos) (pos * 2 + 1)                    //获取左节点
#define get_rchil(pos) (get_lchil(pos)+1)               //获取右节点

#define elements std::vector<element>                   //矢量类型

template<class element, typename function>
class heaps
{
private:
    //列表
	elements    m_list;      
    //比较          
	function    m_comp;                 
public:
    //构造
	heaps(function comp):
    m_comp(comp)
    { 
    }
    //析构
	~heaps()
    {
    }

	//[]重载
	element operator [](int index)
    { 
        return m_list[index]; 
    }

    //->重载
	elements* operator ->()
    {
         return &m_list; 
    }

    //添加
	void append(element element)
	{
		m_list.push_back(element);
		upward(lastii(m_list));
	}

    //弹出
	element pop()
	{
		return erase(0);
	}

    //删除
	element erase(int index)
	{   
        change(m_list,pos,lastii(m_list));
        auto eleme = m_list.pop_back()
		adjust(pos);
		return eleme;
	}

    //调整
	void adjust(int pos)
	{
		upward(pos);
		downward(pos);
	}

    //向上
	bool upward(int pos)
	{
		if (pos >= m_list.size())
			return true;

		auto child = m_list[pos];

		while (pos > 0)
		{
			auto super_pos = get_super(pos);
			auto icom = m_comp(m_list[super_pos], child);

			//up  比较  down   不大于就不用交互
			if (1 != icom)
				break;
			m_list[pos] = m_list[super_pos];
			pos = super_pos;
		}

		m_list[pos] = child;
		return true;
	}

    //向下
	bool downward(int pos)
	{
		if (pos >= m_list.size())
			return true;

		auto pos_val = m_list[pos];
		auto l_child = 0, r_child = 0;
		auto iSize = m_list.size();
		while (get_lchil(pos) < iSize)
		{
			l_child = get_lchil(pos);
			r_child = get_rchil(pos);

			if (r_child < iSize && 1 == m_comp(m_list[l_child], m_list[r_child]))
				l_child = l_child + 1;

			//down  比较  up   不大于就不用交互
			if (1 != m_comp(pos_val, m_list[l_child]))
				break;

			m_list[pos] = m_list[l_child];
			pos = l_child;
		}

		m_list[pos] = pos_val;
		return true;
	}
};