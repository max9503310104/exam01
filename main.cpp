#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main() {
    uLCD.printf("107061103\n");
    uLCD.line(20, 20, 80, 20, 0xFFFFFF);
    uLCD.line(20, 20, 20, 80, 0xFFFFFF);
    uLCD.line(20, 80, 80, 80, 0xFFFFFF);
    uLCD.line(80, 20, 80, 80, 0xFFFFFF);
}