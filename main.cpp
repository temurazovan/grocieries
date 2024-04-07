#include <iostream>
#include <vector>

int main() {
    std::vector<float> price {2.5f, 4.25f, 3.0f, 10.0f};
    std::vector<int> items(4);
    float sum = 0;

    std::cout << "input the items you want to buy: ";
    for (int i = 0; i < 4; i++) {
        std::cin >> items[i];
    }

    for (int index : items) {
        sum += price[index];
    }

    std::cout << "Total sum is " << sum;

}
