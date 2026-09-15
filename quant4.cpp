#include <iostream>
#include <vector>
int main (){
    std::vector <double> prices ={10, 11, 12, 11, 13, 14, 13, 15};
    for (size_t i=0;i<prices.size();i++){
        if(i<2){
            std::cout<<"NA"<<"\n";
        }
        else{
            double sum=0.0;
            for (size_t j=i-2;j<i+1;j++){
                sum+=prices[j];
            }
            std::cout<<sum/3<<"\n";
        }
    }
    return 0;
}