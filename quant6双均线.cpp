#include <iostream>
int main (){
    double yesterdayShort = 12.0;
    double yesterdayLong = 12.0;

    double todayShort = 12.0;
    double todayLong = 12.5;
    
    bool Crossup= yesterdayShort <= yesterdayLong && todayShort > todayLong;
    bool Crossdown= yesterdayShort >= yesterdayLong && todayShort < todayLong;
    if(Crossup){
        std::cout<<"Upward crossover\n";
    }
    else if(Crossdown){
        std::cout<<"Downward crossover\n";
    }
    else{
        std::cout<<"No crossover\n";
    }
    return 0;
}