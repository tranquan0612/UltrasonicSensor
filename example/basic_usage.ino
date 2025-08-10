#include "UltrasonicSensor.h"

// Tạo đối tượng cảm biến
UltrasonicSensor sensor(5, 18);

void setup() {
    Serial.begin(115200);
}

void loop() {
    long distance = sensor.getDistance();
    Serial.print("Khoang cach: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
}
