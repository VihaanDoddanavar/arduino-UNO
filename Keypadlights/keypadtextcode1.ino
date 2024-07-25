const int led1=13;
const int led2=12;
const int led3=11;
const int led4=10;

#include <Keypad.h>
const byte ROWS = 4; // Quattro righe
const byte COLS = 4; // Quattro colonne


// Definizione mappa della tastiera
char keys[ROWS][COLS] = {
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = { 9, 8, 7, 6 }; // Riga0,1,2,3.
byte colPins[COLS] = { 5, 4, 3, 2}; // Colonna0,1,2,3
// Creazione della tastiera
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop(){
 char key = kpd.getKey();
 if (key){
    Serial.println(key);
  if (key=='1'){
    digitalWrite(led1,HIGH);
  }
  else if (key=='2'){
    digitalWrite(led2,HIGH);
  }
  else if (key=='3'){
    digitalWrite(led3,HIGH);
  }
  else if (key=='4'){
    digitalWrite(led4,HIGH);
  }
   else if (key=='5'){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW); 
  }
   else if (key=='6'){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
     delay(3000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW); 
 }
 } 
}
