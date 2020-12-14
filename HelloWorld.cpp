#include "mbed.h"

Serial serial(USBTX, USBRX, 115200);

int main() {

	while(true)
	{
		char const message[] = "Hello world from mbed-cmake retro!\n";
		serial.printf(message);
		ThisThread::sleep_for(1000);
	}
}