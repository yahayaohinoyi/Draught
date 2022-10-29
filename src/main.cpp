#include <iostream>
#include "board.h"
#include <sstream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    Board* board = new Board("dwdw", 64);
    stringstream s = board->visualize();
    string res;
    s >> res;
    cout << res << endl;
    return 0;
}
