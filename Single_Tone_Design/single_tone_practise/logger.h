#include<iostream>
using namespace std;

class logger{

    public:
    
    static logger *getlogger();
    void log(string msg);
    

private:

   static int counter;
   logger();
   static logger *loggerInstance;

};