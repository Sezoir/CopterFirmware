#include "mbed.h"

BufferedSerial serial(USBTX, USBRX, 115200);

int main() {

    while(true)
    {
        char const message[] = "Hello world: 7!\n";
        serial.write(message, sizeof(message));
        ThisThread::sleep_for(1000);
    }
}