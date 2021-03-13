/*
    file:ITimer.h
    desc:线程接口 
    auth:Carol Luo
*/


//定时接口
class ITimer {
    public:
    //线程启动
    virtual void start();
    //线程停止
    virtual void close();
};
