#include<iostream>
#include<mutex>
using namespace std;
class logger{
    public:
    static logger *getlogger();
    void log(string msg);

    private:
    static int counter;
    static logger *loggerInstance();
    logger();
    static mutex mtx;

}
