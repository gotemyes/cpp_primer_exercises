
#include <iostream>
#include "Sales_item.h"

int main(){

    //// 1.20

    // Sales_item book;

    // while (std::cin >> book) {
    //     std::cout << book << std::endl;
    // }

    // return 0;

    //// 1.21

    // Sales_item book1, book2;

    // std::cin >> book1 >> book2;

    // std::cout << book1 + book2 << std::endl;

    // return 0;

    //// 1.22

    Sales_item total, item;
    if (std::cin >> total) {
        while (std::cin >> item)
            total += item;
        std::cout << total << std::endl;
  }

    return 0;

}

