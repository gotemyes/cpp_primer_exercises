#include <iostream>

int main(){

    int sum=0;

    for(int val = 50; val<=100; ++val){
        sum+=val;
    }

    std::cout << "The sum of integers from 50 to 100 is " << sum << std::endl;


    for(int val=10;val>=0;--val){
        std::cout << val << std::endl;
    }
}