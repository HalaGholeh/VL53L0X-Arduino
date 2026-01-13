//LIDAR Sensor
#include <Wire.h>
#include <Adafruit_VL53L0X.h>

//Creat an object of sensor
Adafruit_VL53L0X LSensor = Adafruit_VL53L0X();

void setup() {
  Serial.begin(9600);
  Wire.begin();

  if (!LSensor.begin()){
    Serial.println("Faild to find sensor!");
    while(1);
  }

}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  LSensor.rangingTest(&measure , false);

  if (measure.RangeStatus != 4){
    Serial.print("Distance (mm): ");
    Serial.println(measure.RangeMilliMeter);

  }else{
    Serial.println("Out of range!");
  }

  delay(100);

}
