#include <iostream>
#include <vector>
int main(){
    std::vector <double> prices;
    if(prices.empty()){
        std::cout<< "没有"<<"\n";
    }
    prices.push_back(11);
    prices.push_back(12);
    prices.push_back(13);
    for (size_t i=0;i<prices.size();i++){
        std::cout<<prices[i]<<"\n";
    }
    prices.at(2)=15;
    for (size_t i=0;i<prices.size();i++){
        std::cout<<prices[i]<<"\n";
    }
    prices.pop_back();
    for (size_t i=0;i<prices.size();i++){
        std::cout<<prices[i]<<"\n";
    }
    return 0;
}