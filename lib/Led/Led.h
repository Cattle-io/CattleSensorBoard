#include "Arduino.h"

using namespace std;  

class Led {  

   public:

        Led(void);
        Led(string, uint8_t, bool);
        ~Led();

        void on();
        void off();
        
        void setPin(uint8_t);
        void setState(bool);
        void setName(string);
        void setDescription(string);
        void setIsBlinking(bool);
        void setBlinkingMiliSeconds(int);

        uint8_t getPin();
        bool getState();
        string getName();
        string getDescription();
        bool getIsBlinking();
        int getBlinkingMiliSeconds();

   private:  

        uint8_t  $pin;
        int  $blinkingMiliSeconds;
        bool $state;
        bool $isBliking;
        string $name;      
        string $description;

};  