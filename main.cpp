#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);
DigitalIn D0in(D7);

int main() {
    int i;

    uLCD.printf("107061103\n");
    uLCD.line(20, 20, 80, 20, 0xFFFFFF);
    uLCD.line(20, 20, 20, 80, 0xFFFFFF);
    uLCD.line(20, 80, 80, 80, 0xFFFFFF);
    uLCD.line(80, 20, 80, 80, 0xFFFFFF);
    PWM1.period(0.001);

    while (1) {
        for (i = 0; i <= 10; i++) {
            PWM1 = 1.0 / i;
            wait(0.1);
        }
        for (i = 10; i >= 0; i--) {
            PWM1 = 1.0 / i;
            wait(0.1);
        }
    }
}