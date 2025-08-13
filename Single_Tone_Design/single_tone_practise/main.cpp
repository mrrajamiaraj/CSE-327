#include "logger.h"
int main(){
    logger *logger1 = logger ::getlogger();
    logger1->log("this is from message one)");
    cout<<endl;

    logger *logger2 = logger::getlogger();
    logger2->log("this is from message 2");
    
}