/**
 * @ Average- Sensor de temperatura LM35
 * @ Description: Performs the scales temperature reading Celsius and Fahrenheit Kelvin, and calculates an average temperature.
 *
 * @ Characteristics
 * - Temperature Maximum: 150 ° C
 * - Temperature Low: -55 ° C
 * - Temperature Heating: + - 00:08 ºC
 * - Voltagemde operation: 4V to 30V
 * - Operating amperage: 60μ ampere (0.000060).
 * 
 * @ Developer by RodriguesFAS
 * @ Date: 24 de setember de 2015
 * @ Version: 1.0.0
 * @ License: MIT
 * @ Web site: <https://rodriguesfas.github.io>
 * @ Email: franciscosouzaacer@gmail.com
 */

// Import library
#include <LM35.h>

/**
 * Instantiate an object with LM35 sensor name, passing the parameter is the pin where it is connected to the Arduino.
 */
LM35 sensor(A0);

void setup(){
	// Serial monitor
	Serial.begin(9600);
}

void loop() {
	/**
	 * Instantiate a variable for each value to be stored, it may be the integer or real type, which receives the object
	 * sensor, which calls the method that will read the sensor in a certain corresponding scale, passed parameter in the
	 * method the value of nI want to collect samples, to carry out an average temperature.
	 */
	double celsius = sensor.readCelsius(10);
	double fahrenheit = sensor.readFahrenheit(10);
	double kelvin = sensor.readKelvin(10);

	// Print (show) values on the screen (serial monitor).
	Serial.print("Temperature: ");
	Serial.print(celsius);
	Serial.println("C");
	
	Serial.print("Temperature: ");
	Serial.print(fahrenheit);
	Serial.println("F");

	Serial.print("Temperature: ");
	Serial.print(kelvin);
	Serial.println("K");

	Serial.println("-----------------------");

	delay(1000); // wait a second to print values again.
}