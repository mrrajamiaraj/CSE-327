#include "logger.h"


int main(){
    logger *logger1 = logger ::getlogger();
    logger1->log("rhis is message from 1");
    cout<<endl;

    logger *logger2 = logger ::getlogger();
    logger2->log("rhis is message from 2");
    cout<<endl;
}