#include "Arduino.h"
#include "Packet.h"



/**
 * ------------------------------------------------------
 * -- Packet :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
Packet::Packet() {

};




/**
 * ------------------------------------------------------
 * -- Packet :: Setters 
 * ------------------------------------------------------
 * */ 
void Packet::setUID(String uid){
    $uid = uid;
};
void Packet::setTimestamp(String timestamp){
    $timestamp = timestamp;
};
void Packet::setTemperature(float temperature){
    char temperatureAsString[32];
    snprintf(temperatureAsString, sizeof(temperatureAsString), "%.2f", temperature);
    $temperature = temperatureAsString;
};
void Packet::setHumidity(float humidity){
    char humidityAsString[32];
    snprintf(humidityAsString, sizeof(humidityAsString), "%.2f", humidity);
    $humidity = humidityAsString;
};
void Packet::setGPS(float lat, float lng){
    char latAsString[32];
    char lngAsString[32];

    snprintf(latAsString, sizeof(latAsString), "%.2f", lat);
    snprintf(lngAsString, sizeof(lngAsString), "%.2f", lng);

    $gps_latitude = latAsString;
    $gps_longitude = lngAsString;
};
void Packet::setIMU(float roll, float pitch, float heading, float altitude){

    char rollAsString[32];
    char pitchAsString[32];
    char headingAsString[32];
    char altitudeAsString[32];

    snprintf(rollAsString, sizeof(rollAsString), "%.2f", roll);
    snprintf(pitchAsString, sizeof(pitchAsString), "%.2f", pitch);
    snprintf(headingAsString, sizeof(headingAsString), "%.2f", heading);
    snprintf(altitudeAsString, sizeof(altitudeAsString), "%.2f", altitude);

    $imu_roll = rollAsString;
    $imu_pitch = pitchAsString;
    $imu_heading = headingAsString;
    $imu_altitude = altitudeAsString;
};

void Packet::setCH4(float ch4){
    char ch4AsString[32];
    snprintf(ch4AsString, sizeof(ch4AsString), "%.2f", ch4);
    $ch4 = ch4AsString;
};
void Packet::setAirFlow(float airFlow){
     char airFlowAsString[32];
    snprintf(airFlowAsString, sizeof(airFlowAsString), "%.2f", airFlow);
    $air_flow = airFlowAsString;
};
void Packet::setBatteryLevel(float batteryLevel){
    char batteryLevelAsString[32];
    snprintf(batteryLevelAsString, sizeof(batteryLevelAsString), "%.2f", batteryLevel);
    $battery_level = batteryLevelAsString;
};



/**
 * ------------------------------------------------------
 * -- Packet :: Parte/Stringify 
 * ------------------------------------------------------
 * */ 
String Packet::stringify(){
    return "{\"uid\":\"" + $uid +  "\", \"timestamp\":\"" + $timestamp +  "\" , \"temperature\":\"" + $temperature +  "\"" + "," + "\"humidity\":\"" + $humidity +  "\"" + "," + "\"gps\":" + "{\"latitude\":\""+$gps_latitude+"\",\"longitude\":\""+$gps_longitude+"\"}," + "\"imu\":{}," +"\"ch4\":\""+$ch4+"\"," +"\"airFlow\":\""+$air_flow+"\"," + "\"batteryLevel\":\""+$battery_level+"\" }";
};

void Packet::parse(String packet){
    
};