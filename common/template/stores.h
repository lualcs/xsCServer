/*
    file:stores.h
    desc:复用库存
    auth:Carol Luo
*/
#include <vector>
#include "../macros/helper.h"
#define elements std::vector<T*>                   //矢量类型


template <class T>
class stores {
    private:
    //列表
	elements    m_list; 
    //构造
	heaps(){ 
    }
    //析构
	~heaps(){
        clear();
    }
    //申请
    T* forget(){
        if (empty(m_list))
            return new T();
        else
            return remove(m_list);
    }
    //回收
    void recycle(T* item){
        m_list.push_back(item);
    }
    //清空
    void clear(){
        while (empty(m_list)){
            delete remove(m_list);
        }
    }
};