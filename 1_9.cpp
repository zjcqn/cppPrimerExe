#include <iostream>

int main(){
    int sum=0,i=50;
    while(i<101){
        sum+=i++;
    }
    std::cout << sum << std::endl;
}