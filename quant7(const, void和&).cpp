#include <iostream>
#include <vector>
#include <cstddef>
double calculateSMA (
    const std::vector<double> & prices,
    std::size_t dayIndex,
    std::size_t window
){
    double sum=0.0;
    std::size_t start=dayIndex+1-window;
    for (size_t j=start;j<=dayIndex;j++){
        sum+=prices[j];
    }
    return sum/window;
}

int main (){
    std::vector<double> prices = {10, 11, 12, 11, 13, 14, 13, 15};
    std::cout<<"please input two number:";
    double b=0,c=0;
    std::cin>>b>>c;
    if(b+1<c || b>=prices.size()){
        std::cout<<"wrong\n";
    }
    else{
        double result=calculateSMA(prices,b-1,c);
        std::cout<<result<<"\n";
    }
    return 0;
}
