#include "Arduino.h"

using namespace std;  

class SensorMQ4 {  

   public:

        SensorMQ4(uint8_t pin);
        void init();
        void setPin(uint8_t pin);
        float getMethane(void);
        bool read(void);

   private:  

        uint8_t $pin; 
        float $methane;
        
};