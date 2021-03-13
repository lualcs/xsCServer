/*
    file:timer.h
    desc:定时器抽象接口 
    auth:Carol Luo
*/

typedef unsigned int uint;

//定时接口
class ITimer {
    public:
    //添加定时器
    virtual void append(int identify,int timming = 0,int count = 0);     
    //移除定时器 
    virtual void remove(int identify);  
    //获取倒计时
    virtual uint countdown(int identify);  
    //清空定时器
    virtual void clear();
    //暂停定时器    
    virtual void pause();  
};
