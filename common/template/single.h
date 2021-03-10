/*
    file:single.h
    desc:单例
    auth:Carol Luo
*/

template <class T>
class single {
    private:
    static T* pInstall = nullptr;
    
    public:
    static T* getInstall()
    {
        if(nullptr == pInstall)
        {
            pInstall = new T();
        }
        return pInstall;
    }

    T* operator *()
    {
        return getInstall();
    }
    
};