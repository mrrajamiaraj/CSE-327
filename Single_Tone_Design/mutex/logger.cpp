#include"logger.h";
int logger::counter =0;
logger *logger::loggerInstance=nullptr;

logger::logger(){

    cout<<"new instance is created. counter number is "<<counter<<endl;

}

void logger ::log(string msg){
    cout<<msg<<endl;
}

logger *logger::getlogger(){
    mtx.lock();
    if(loggerInstance==nullptr){
        loggerInstance=new logger();
    }
    mtx.unlock;
    return loggerInstance;
}