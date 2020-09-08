#include <mbed.h>

#define SERIAL2_TX PA_2
#define SERIAL2_RX PA_3

Serial serial(SERIAL2_TX, SERIAL2_RX, 115200);

int main() {

  // put your setup code here, to run once:

  while(1) {
    // put your main code here, to run repeatedly:
  }
}