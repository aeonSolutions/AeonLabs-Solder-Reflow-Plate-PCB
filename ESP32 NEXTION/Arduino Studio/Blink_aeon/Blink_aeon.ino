#include "pitches.h"
#include "EasyNextionLibrary.h"      // Was modified to accept Serial1 hardware on ESP32
#define nextion Serial2       // This line is for ESP32 with hardware Serial2
//EasyNex  myNextion(nextion);             //create a Nextion object named myNextion using the nextion serial port

// notes in the melody:
int melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
  NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_D5, NOTE_G5
};

// note durations: 4 = quarter note, 8 = eighth note, etc, also called tempo:
int noteDurations[] = {
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8,
  2,
  8, 8, 8, 8,
  8, 8, 8, 16, 16,
  8, 8, 8, 8,
  4, 4
};

#define BUZZER_PIN 18
#define BUZZER_CHANNEL 0

// setting PWM properties
const int freq = 5000;
const int resolution = 8;

const byte rxPin = 17;
const byte txPin = 16;


 // ********************************************************
 // ********************************************************

void StatusLED(int led, int pauseTime){
    // pausetime in seconds
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay (pauseTime*1000);
    digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
    delay (1000);
}

 // ********************************************************
 // ********************************************************
 
void setup(){
  // configure LED PWM functionalitites
  ledcSetup(BUZZER_CHANNEL, freq, resolution);
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(BUZZER_PIN, BUZZER_CHANNEL);

  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);


  String sendThis = "page0.t0.txt=\"Thermostat-Heat\"";
  writeString(sendThis);



  Serial.begin(115200);            // USB communication with Serial Monitor
  Serial.print("Starting serial...");

  StatusLED(14, 1);
  
  Serial.print("OK.");
  Serial.println("");
  StatusLED(27, 1);
    
  Serial.print("Starting serial 2...");
  Serial2.begin(9600, SERIAL_8N1, rxPin, txPin);
    
  StatusLED(14, 1);
  
  Serial.print("OK.");
  Serial.println("");
  StatusLED(27, 1);
  
  
  Serial.print("Sending Nextion data...");  
  writeString("BootScreen.sw_rev.txt=\"Software rev.: 0.1\"");
  writeString("BootScreen.hw_rev.txt=\"Hardware rev.: 1.3\"");  
  Serial.print("DONE.");
  Serial.println("");
  
  //myNextion.begin(9600); // Begin the object with a baud rate of 9600 // If no parameter was given in the begin(), the default baud rate of 9600 will be used
  
  //myNextion.sendCommand("rest");   // reset Nextion 
  //myNextion.sendCommand("dim=100");       // Dim to 40% the display

  //myNextion.writeStr("BootScreen.t0.txt", "0.1"); // Set button b0 text to "ON"
  //myNextion.writeStr("BootScreen.hw_rev.txt", "1.3"); // Set button b0 text to "ON"
  
}

 // ********************************************************
 // ********************************************************
void writeString(String stringData)
{
  for (int i = 0; i < stringData.length(); i++)
  {
    // Send one character at a time using Serial2.write, NOT Serial2.print
    Serial2.write(stringData[i]);
  }
  Serial2.write(0xff); // Send three 0xff characters to denote end
  Serial2.write(0xff);
  Serial2.write(0xff);
}

void hideElement(){
  Serial1.print("vis b3,0");
  Serial1.write(0xff);
  Serial1.write(0xff);
  Serial1.write(0xff);  
}
 // ********************************************************
 // ********************************************************
void Tone32(int ch, double note, double duration){
  ledcWriteTone(ch, note);
  delay(duration);
}

void noTone32(){
  ledcWriteTone(BUZZER_CHANNEL, 0);
}
 // ********************************************************
 // ********************************************************


void loop() {
  buzzer();

}
 // ********************************************************
 // ********************************************************

void LED(){
  
  //LED
  digitalWrite(33, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1500);                       // wait for a second
  digitalWrite(33, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(32, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(32, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(27, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(27, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);     
  // wait for a second
}
 // ********************************************************
 // ********************************************************

void buzzer() {
  // iterate over the notes of the melody:
  int size = sizeof(noteDurations) / sizeof(int);

  for (int thisNote = 0; thisNote < size; thisNote++) {
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
   Tone32(BUZZER_CHANNEL, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    int led = random(1,4);
    if(led==1){
      led=14;
    }
    
    if(led==2){
      led=12;
    }
    
    if(led==3){
      led=27;
    }
    
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
   
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone32();
    digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
  }
}
