#include <iostream> 
#include <vector>
int main(){
    std::vector<double> prices={10, 11, 12, 11, 13, 14, 13, 15};
    for (size_t i=0;i<prices.size();i++){
            std::cout << prices[i] <<"\n";
    }
    if(prices.empty()){
        std::cout<< "NO price data\n";
    }
    double sum=0.0;
    for (size_t i=0;i<prices.size();i++){
        sum+=prices[i];
    }
    double average= sum / prices.size();
    std::cout<<"sum="<<sum<<"\n";
    std::cout<<"average="<<average<<"\n";
    return 0;
}