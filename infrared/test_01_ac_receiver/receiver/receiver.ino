#include <IRremote.h>
int input_pin = 2; //set D10 as input signal pin
IRrecv irrecv(input_pin);
decode_results signals;
void setup()
{
    Serial.begin(9600);
    irrecv.enableIRIn(); // enable input from IR receiver
    Serial.println("----------------");
}
void loop() {
if (irrecv.decode(&signals)) {
        Serial.println(signals.value, HEX);
        irrecv.resume(); // get the next signal
    }
}


