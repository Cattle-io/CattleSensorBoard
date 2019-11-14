#include "Arduino.h"

using namespace std;  

class Led {  

   public:

        Led(void);
        Led(string, int, bool);
        ~Led();

        void on();
        void off();
        
        void setPin(int);
        void setState(bool);
        void setName(string);
        void setDescription(string);
        void setIsBlinking(bool);
        void setBlinkingMiliSeconds(int);

        int getPin();
        bool getState();
        string getName();
        string getDescription();
        bool getIsBlinking();
        int getBlinkingMiliSeconds();

   private:  

        int  $pin;
        int  $blinkingMiliSeconds;
        bool $state;
        bool $isBliking;
        string $name;      
        string $description;

};  