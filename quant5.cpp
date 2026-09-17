#include <iostream>
double average3(double a, double b, double c){
        double sum=a+b+c;
        return sum/3.0;
    }
int main (){
    double x=0,y=0,z=0;
    std::cout<<"please input three data:";
    std::cin>>x>>y>>z;
    double result=average3(x,y,z);
    std::cout<<result<<"\n";
    return 0;
}