const int RELAY_1 = 2;
const int RELAY_2 = 3;
const int RELAY_3 = 4;
const int RELAY_4 = 5;
int intSolenoid1 = 0;
String strSolenoid1 = "";

void setup()
{
    Serial.begin(9600);
    pinMode(RELAY_1, OUTPUT);
    pinMode(RELAY_2, OUTPUT);
    pinMode(RELAY_3, OUTPUT);
    pinMode(RELAY_4, OUTPUT);
    
    //Turn relay off at startup.
    digitalWrite(RELAY_1, HIGH);
    digitalWrite(RELAY_2, HIGH);
    digitalWrite(RELAY_3, HIGH);
    digitalWrite(RELAY_4, HIGH);
}

void loop()
{
    while(Serial.available()>0) 
    { 
      switch(Serial.read()) 
      { 
        case '0': 
          digitalWrite(RELAY_1, HIGH);
        break; 

        case '1':
          digitalWrite(RELAY_1, LOW);
        break; 

        case '2':
          digitalWrite(RELAY_2, HIGH);
        break; 

        case '3':
          digitalWrite(RELAY_2, LOW);
        break; 

        case '4':
          digitalWrite(RELAY_3, HIGH);
        break; 

        case '5':
          digitalWrite(RELAY_3, LOW);
        break; 

        case '6':
          digitalWrite(RELAY_3, HIGH);
        break; 

        case '7':
          digitalWrite(RELAY_3, LOW);
        break; 
      } 
    }
}
