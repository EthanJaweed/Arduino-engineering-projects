# Simple sweeping radar

// 02/07/26 // 

I first started by wiring and coding a script which makes the servo capable of moving. To do this i just imported the Servo.h library. Then I began work on the code that makes the servo sweep from side to side. At first i attempted to use 1 for loop but this did not work. Confused, I looked up how to make a servo sweep from side to side and realised i could use 2 for loops, 1 for going from the low to high and and 1 for high to low.

// 03/07/26 //

After i finished the code for the servo to sweep, i began work on the ultrasonic sensor and led. This proved to be quite simple as all it took was to write the pin which is connected to the trig pin to high, and using the pulseIn() function to find out how long the receiver in the sensor was set to high. After this, I used the values i got, with some fine tuning, to make the led blink when an object gets close to the sensor.
