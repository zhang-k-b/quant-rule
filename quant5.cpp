#include <iostream>
double average3(double a, double b, double c){
        double sum=a+b+c;
        return sum/3.0;
    }
int main (){
    double result=average3(11.0,12.0,13.0);
    std::cout<<result<<"\n";
    return 0;
}