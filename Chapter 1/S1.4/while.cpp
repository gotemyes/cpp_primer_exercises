#include <iostream>

int main(){

    // int sum=0, val=50;

    // while(val <= 100){
    //     sum+=val;
    //     val++;
    // }

    // std::cout << "The sum of integers from 50 to 100 is " << sum << std::endl;


    // int val=10;
    // while(val>=0){
    //     std::cout << val << std::endl;
    //     val--;
    // }

    int v1=0, v2=0;

    std::cout << "Provide two integers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The numbers between " << v1 << " and " << v2 << " are:" << std::endl;

    if(v1>=v2){
        v2++;
        while(v1>v2){
            std::cout << v2 << std::endl;
            v2++;
        }
    } else {
        v1++;
        while(v2>v1){
            std::cout << v1 << std::endl;
            v1++;
        }
    }
}