#include "logger.h"

int logger::counter=0;
logger *logger::loggerInstance= nullptr;

logger::logger(){
    counter++;
    cout<<"new instance created, numbe rof instanted created"<< counter <<endl;
}

void logger::log(string msg){
    cout<<msg<<endl;
}

logger *logger ::getlogger(){
    if(loggerInstance== nullptr){
        loggerInstance= new logger();
    }
    return loggerInstance;
}