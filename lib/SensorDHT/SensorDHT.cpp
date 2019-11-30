#include "Arduino.h"
#include "DHT.h"
//#include "DHT_U.h"
#include "SensorDHT.h"



/**
 * ------------------------------------------------------
 * -- LED :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
SensorDHT::SensorDHT(uint8_t DHTPIN, uint8_t DHTTYPE) {
    $dht = DHT(DHTPIN, DHTTYPE); 
};

void SensorDHT::init(void) {
    $dht.begin();
};

bool SensorDHT::read(void) {

  float h = $dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = $dht.readTemperature();


  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {

    return false;

  } else {

      $temp = t;
      $hum = h;
      return true;
  }


};

/**
 * ------------------------------------------------------
 * -- SensorDHT ::Setters 
 * ------------------------------------------------------
 * */ 

void SensorDHT::setPin(uint8_t pin){
    $pin = pin;
    $dht = DHT($pin, $type);
};
void SensorDHT::setType(uint8_t type){
    $type = type;
    $dht = DHT($pin, $type);
};


/**
 * ------------------------------------------------------
 * -- SensorDHT ::Getters
 * ------------------------------------------------------
 * */   

float SensorDHT::getTemp(void){
    return $temp;
}
float SensorDHT::getHum(void){
    return $hum;
}



/**
 * ------------------------------------------------------
 * -- SensorDHT :: Private Methods
 * ------------------------------------------------------
 * */   



