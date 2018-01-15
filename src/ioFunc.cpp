#include <Arduino.h>

void setPins() {  
    pinMode(2, OUTPUT);          
}  

void relaySwitch(bool relayStatus) {
	if (relayStatus)
	{
		digitalWrite(2, HIGH);	
	} else {
		digitalWrite(2, LOW);
	}

}