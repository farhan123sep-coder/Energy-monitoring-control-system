#include <PZEM004Tv30.h>

#define RELAY_PIN 26

void setup() {
    Serial.begin(115200);
    pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
    float voltage = pzem.voltage();
    float current = pzem.current();
    float power = pzem.power();
    float energy = pzem.energy();

    Serial.println(voltage);
    Serial.println(current);
    Serial.println(power);
    Serial.println(energy);

    if (power > 1000) {
        digitalWrite(RELAY_PIN, LOW);
    }

    delay(1000);
}