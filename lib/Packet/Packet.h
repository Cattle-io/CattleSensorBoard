#include "Arduino.h"

using namespace std;  

class Packet {  

   public:

        Packet();
        void setUID(String uid);
        void setTimestamp(String timestamp);
        void setTemperature(float temperature);
        void setHumidity(float humidity);
        void setGPS(float lat, float lng);
        void setIMU(float roll, float pitch, float heading, float altitute);
        void setCH4(float ch4);
        void setAirFlow(float airFlow);
        void setBatteryLevel(float batteryLevel);
        
        String stringify();
        void parse(String packet);

   private:  

        String $uid;
        String $timestamp;
        String $temperature;
        String $humidity;
        String $gps_latitude;
        String $gps_longitude;
        String $imu_roll;
        String $imu_pitch;
        String $imu_heading;
        String $imu_altitude;
        String $ch4;
        String $air_flow;
        String $battery_level;

        
};