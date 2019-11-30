#include <Arduino.h>
#include <ESP8266WiFi.h> 
#include "DHT.h"
#include "DHT_U.h"

#include <Led.h>
#include <SensorDHT.h>
#include <SensorMQ4.h>
#include <Packet.h>
#include <Utils.h>

SensorDHT dht(2, DHT11);
SensorMQ4 mq4(A0);

Packet packet;
Utils utils;

String uid = "NODEMCU_901";

const char* ssid     = "Mayorga";
const char* password = "1010207111";

void setup() {

  Serial.begin(9600);
  
  dht.init();
  mq4.init();

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println(F("Cattle.io => Sensing Data !!!"));

}

void loop() {
 
  bool isDHTReadOk = dht.read();
  bool isMQ4ReadOk = mq4.read();

  if(isDHTReadOk && isMQ4ReadOk){
      
      String timestamp = "2019:11:26T10:46:03.000Z";

      float temperature = dht.getTemp(); // °C
      float ch4 = mq4.getMethane(); // ppm

      float humidity = dht.getHum();
      float gps_lat = utils.getRandomNumber(74.000, 76.00);
      float gps_lng = utils.getRandomNumber(120.000, 125.00);
      float imu_roll = utils.getRandomNumber(0.000, 20.00);
      float imu_pitch = utils.getRandomNumber(0.000, 2.00);
      float imu_heading = utils.getRandomNumber(0.000, 10.00);
      float imu_altitude = utils.getRandomNumber(1.000, 1.200);
      float airFlow = utils.getRandomNumber(20.4453, 50.4346);
      float batteryLevel = utils.getRandomNumber(95.4453, 99.4346);
      
      packet.setUID(uid);
      packet.setTimestamp(timestamp);
      packet.setTemperature(temperature);
      packet.setHumidity(humidity);
      packet.setGPS(gps_lat, gps_lng);
      packet.setIMU(imu_roll, imu_pitch, imu_heading, imu_altitude);
      packet.setCH4(ch4);
      packet.setAirFlow(airFlow);
      packet.setBatteryLevel(batteryLevel);

      Serial.print(F("Cattle.io => Packet  "));
      Serial.print(packet.stringify());
      Serial.print(" \n ");

      // mqtt.publish(packet.toString());

  }else{
      Serial.println(" Error Reading DHT11 and MQ4 ");
  }
  
  Serial.print(" \n");
  delay(2000);
 


}


