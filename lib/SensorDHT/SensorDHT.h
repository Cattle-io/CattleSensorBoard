#include "Arduino.h"
#include "DHT.h"
//#include "DHT_U.h"


using namespace std;  

class SensorDHT {  

   public:

        SensorDHT(uint8_t pin, uint8_t type);

        void init();

        void setPin(uint8_t pin);
        void setType(uint8_t type);

        float getTemp(void);
        float getHum(void);
        bool read(void);

   private:  

        uint8_t $pin; 
        uint8_t $type; 
        float $temp;
        float $hum;
        DHT $dht = DHT(4, DHT11); 

        
};