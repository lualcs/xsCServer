/*
    file:single.h
    desc:单例
    auth:Carol Luo
*/

template <class T>
class single {
    private:
    static T* install = nullptr;
    
    public:
    static T* getInstall(){
        if(nullptr == install){
            install = new T();
        }
        return install;
    }

    T* operator *(){
        return getInstall();
    }
    
};