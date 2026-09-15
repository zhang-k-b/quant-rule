#include <iostream>
#include <vector>
int main (){
    std::vector<double> prices={10, 11, 12, 11, 13, 14, 13, 15};
    double sum=0.0;
    for (size_t i=3;i<6;i++){
        sum+=prices[i];
    }
    double average=sum/3;
    std::cout<<"sum="<<sum<<"\n"<<"average="<<average<<"\n";
    return 0;
}