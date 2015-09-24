#include "LM35.h"

LM35::LM35(int pin) : _pin(pin) {
	pinMode(pin, OUTPUT);
}

LM35::~LM35(){ }

/**
 * ====================================================================
 * readCelsius - Convert the raw degrees Celsius
 * ====================================================================
 */
  // check temperature.
 double LM35::readCelsius() {
 	int sensorValue = analogRead(_pin);
 	double temperature = (sensorValue * 0.48828125);
 	return temperature;
 }

 // check average temperature.
 double LM35::readCelsius(int times) {
 	int sum = 0;

 	for (int i = 0; i < times; i++){
 		sum += analogRead(_pin);
 	}

 	double average = (sum * 0.48828125) / times;
 	return average;
 }

/**
 * ====================================================================
 * readFahrenheit - Convert the raw degrees Celsius and then Fahrenheit.
 * ====================================================================
 */
  // check temperature.
 double LM35::readFahrenheit() {
 	int sensorValue = analogRead(_pin);
 	double temperature = (sensorValue * 0.48828125);
 	temperature = ((temperature * 9) / 5) + 32;
 	return temperature;
 }

 // check average temperature.
 double LM35::readFahrenheit(int times) {
 	int sum = 0;

 	for (int i = 0; i < times; i++){
 		sum += analogRead(_pin);
 	}

 	double average = (sum * 0.48828125) / times;
 	average = ((average * 9) / 5) + 32;
 	return average;
 }

/**
 * ====================================================================
 * readKelvin - Convert the raw degrees Celsius and then Kelvin.
 * ====================================================================
 */
 // check temperature.
 double LM35::readKelvin() {
 	int sensorValue = analogRead(_pin);
 	double temperature = (sensorValue * 0.48828125) + 273.15;
 	return temperature;
 }

 // check average temperature.
 double LM35::readKelvin(int times) {
 	int sum = 0;

 	for (int i = 0; i < times; i++) {
 		sum += analogRead(_pin);
 	}

 	double average = (sum * 0.48828125) / times;
 	average = average + 273.15;
 	return average;
 }