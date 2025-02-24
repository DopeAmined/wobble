#include <iostream>
#include <windows.h>
//#include <limits>

int user_input() {
    int x;
    bool valid = false;
    while (!valid) {
        std::cout << "Enter number between 1 to 10 to hear sound: ";
        if (std::cin >> x && x > 0 && x <= 10) {
            valid = true;
        } else {
            std::cout << "Wrong input" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return x;
}

void sound(int x) {
    x = 11 - x;
    do {
        Beep(523, 500);
        x++;
    } while (x <= 10);

}

int main() {
    int input = user_input();
    sound(input);
    return 0;
}
