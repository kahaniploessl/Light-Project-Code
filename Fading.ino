/* 

 *  Sourced then modified code from: http://www.arduino.cc/en/Tutorial/Fading
 *  Set pins 11,10,9,6,5,3 to variables
 *  Pins used for LEDs
 
 *  Sections: 1 | 2 | 3 | 4 | 5 | 6 | 7
 *  Colors(T-B): b/w | w/b | g/b | y/w | g/b | w/b | b/w 
 *  1/2 - Pins 11/10,  3/4 - Pins 9/6,  5/6/7 - Pins 5/3
 *  Set 1: b-w-b-w-b-w-b
 *  Set 2: w-b-g-y-g-b-w
 
*/

int ledPin1 = 11;
int ledPin2 = 10;

int ledPin3 = 9;
int ledPin4 = 6;

int ledPin5 = 5;
int ledPin6 = 3;

void setup() {
  // nothing happens in setup
}

void loop() {
  
  // fade in pin 11,9,5:
  // set fadeValue = 0
  // add 25 to fadeValue each loop iteration
  // exit loop when fadeValue = 255 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 25) {
    // set pin 11 fade level
    analogWrite(ledPin1, fadeValue);
    // set pin 9 fade level
    analogWrite(ledPin3, fadeValue);
    // set pin 5 fade level
    analogWrite(ledPin5, fadeValue);
    // delay 30milliseconds 
    delay(30);
  }

  // fade out pin 11,9,5:
  // set fadeValue = 255
  // sub 25 to fadeValue each loop iteration
  // exit loop when fadeValue = 0
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 25) {
    // set pin 11 fade level
    analogWrite(ledPin1, fadeValue);
    // set pin 9 fade level
    analogWrite(ledPin3, fadeValue);
    // set pin 5 fade level
    analogWrite(ledPin5, fadeValue);
    // delay 30milliseconds
    delay(30);
  }

  // fade in pin 10,6,3:
  // set fadeValue = 0
  // add 25 to fadeValue each loop iteration
  // exit loop when fadeValue = 255 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 25) {
    // set pin 10 fade level
    analogWrite(ledPin2, fadeValue);
    // set pin 6 fade level
    analogWrite(ledPin4, fadeValue);
    // set pin 3 fade level
    analogWrite(ledPin6, fadeValue);
    // delay 30milliseconds
    delay(30);
  }

  // fade out 10,6,3:
  // set fadeValue = 255
  // sub 25 to fadeValue each loop iteration
  // exit loop when fadeValue = 0
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 25) {
    // set pin 10 fade level
    analogWrite(ledPin2, fadeValue);
    // set pin 6 fade level
    analogWrite(ledPin4, fadeValue);
    // set pin 3 fade level
    analogWrite(ledPin6, fadeValue);
    // delay 30milliseconds
    delay(30);
  }

}
