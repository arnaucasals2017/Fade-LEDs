/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 100;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 40);    // posar PWM del pin 11 a 125

  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 40);    // posar PWM del pin 10 a 125
  analogWrite(led5, 80);    // posar PWM del pin 11 a 125

  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 40);    // posar PWM del pin 9 a 125
  analogWrite(led4, 80);    // posar PWM del pin 10 a 125
  analogWrite(led5, 100);    // posar PWM del pin 11 a 125

  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 40);    // posar PWM del pin 6 a 125
  analogWrite(led3, 80);    // posar PWM del pin 9 a 125
  analogWrite(led4, 100);    // posar PWM del pin 10 a 125
  analogWrite(led5, 127);    // posar PWM del pin 11 a 125

  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 40);    // posar PWM del pin 5 a 125
  analogWrite(led2, 80);    // posar PWM del pin 6 a 125
  analogWrite(led3, 100);    // posar PWM del pin 9 a 125
  analogWrite(led4, 127);    // posar PWM del pin 10 a 125
  analogWrite(led5, 150);    // posar PWM del pin 11 a 125

  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 40);    // posar PWM del pin 3 a 125
  analogWrite(led1, 80);    // posar PWM del pin 5 a 125
  analogWrite(led2, 100);    // posar PWM del pin 6 a 125
  analogWrite(led3, 127);    // posar PWM del pin 9 a 125
  analogWrite(led4, 150);    // posar PWM del pin 10 a 125
  analogWrite(led5, 175);    // posar PWM del pin 11 a 125

  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 80);    // posar PWM del pin 3 a 125
  analogWrite(led1, 100);    // posar PWM del pin 5 a 125
  analogWrite(led2, 127);    // posar PWM del pin 6 a 125
  analogWrite(led3, 150);    // posar PWM del pin 9 a 125
  analogWrite(led4, 175);    // posar PWM del pin 10 a 125
  analogWrite(led5, 255);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 100);    // posar PWM del pin 3 a 255
  analogWrite(led1, 127);    // posar PWM del pin 5 a 255
  analogWrite(led2, 150);    // posar PWM del pin 6 a 255
  analogWrite(led3, 175);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 150);    // posar PWM del pin 3 a 255
  analogWrite(led1, 175);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 175);    // posar PWM del pin 3 a 125
  analogWrite(led1, 255);    // posar PWM del pin 5 a 125
  analogWrite(led2, 255);    // posar PWM del pin 6 a 125
  analogWrite(led3, 255);    // posar PWM del pin 9 a 125
  analogWrite(led4, 255);    // posar PWM del pin 10 a 125
  analogWrite(led5, 255);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 125
  analogWrite(led1, 255);    // posar PWM del pin 5 a 125
  analogWrite(led2, 255);    // posar PWM del pin 6 a 125
  analogWrite(led3, 255);    // posar PWM del pin 9 a 125
  analogWrite(led4, 255);    // posar PWM del pin 10 a 125
  analogWrite(led5, 255);    // posar PWM del pin 11 a 125

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}

//********** Funcions *************************************************************
