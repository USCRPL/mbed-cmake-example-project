#include "mbed.h"

Serial serial(USBTX, USBRX, 115200);

int main() {

	while(true)
	{
		char const message[] = "Hello world from mbed-cmake paleo!\n";
		serial.printf(message);
		wait(1);
	}
}