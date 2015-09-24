/**
 * @ Sensor de temperatura LM35
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

#ifndef __LM35__
#define __LM35__

#include "Arduino.h"

 class LM35 {

 	int _pin;

 public:
 	LM35(int pin);

 	~LM35();

 	double readCelsius();
 	double readCelsius(int times);

 	double readFahrenheit();
 	double readFahrenheit(int times);

 	double readKelvin();
 	double readKelvin(int times);

 };

#endif