![LM35 Logo](https://github.com/rodriguesfas/LM35/blob/master/extras/logo.png)

Esta Biblioteca foi contruída para facilitar a implementação e minimizar a quantidade de código quando trabalhar com o sensor LM35, ler temperatura e realiza média com facilidade nas escalas Celsius, Fahrenheit e Kelvin.

Esse hardware possui terminais parafusáveis para fácil instalação e buracos nas extremidades da placa para fixação.

![LM35 img](https://github.com/rodriguesfas/LM35/blob/master/extras/fritzing.png)

Especificações:
 * - Temperature Maximum: 150 ° C
 * - Temperature Low: -55 ° C
 * - Temperature Heating: + - 00:08 ºC
 * - Voltagemde operation: 4V to 30V
 * - Operating amperage: 60μ ampere (0.000060).

## Instalação

1. "Download":https://github.com/rodriguesfas/LM35/archive/master.zip ;
2. Descompacte e modifique o nome da pasta para: "LM35" (Remova o '-master');
3. Importe-a para sua pasta Library da sua IDE Arduino ou o diretório sketchbooks do Arduíno software;
4. Restart Arduino IDE.

## Sintáxe
```c++
// Instância um objeto chamado sensor, passando por parâmetros o pino de conexão onde esta ligado o sensor no Arduíno.
LM35 sensor(A0);
```

```c++
// Simples - Instancia a variável para cada valor a ser armazenado, pode ser do típo int ou double, que recebe o objecto sensor, que irá chamar o método que ler o sensor em uma certa escala correspondente.
	double celsius = sensor.readCelsius();
	double fahrenheit = sensor.readFahrenheit();
	double kelvin = sensor.readKelvin();

// Média - Instancia a variável para cada valor a ser armazenado, pode ser do típo int ou double, que recebe o objecto sensor, que irá chamar o método que ler o sensor em uma certa escala correspondente, pasando por parâmetro no método o valor n, equivalente ao numero de amostras que pretende recolher, para realizar uma média da temperatura.
	double celsius = sensor.readCelsius(10);
	double fahrenheit = sensor.readFahrenheit(10);
	double kelvin = sensor.readKelvin(10);
```

## Exemplo
	Veja exemplos de como tudo fica mais simples e enxuto:
	Símples: https://github.com/rodriguesfas/LM35/blob/master/examples/single/single.ino
	Média: https://github.com/rodriguesfas/LM35/blob/master/examples/average/average.ino

## Dicas e avisos
	lm35.Pdf: http://www.ti.com/lit/ds/symlink/lm35.pdf
		  https://arduino-info.wikispaces.com/file/view/LM35.pdf/239757859/LM35.pdf

## Referência
	Construído sobre:
 	LM35.h - Library for LM35 temperature sensor.
 	Created by Ricardo Sequeira, February 13, 2014.
 	Website: http://ricardo-sequeira.com/lm35-arduino-library/
 	Github: https://github.com/ricardosequeira/LM35-Arduino-Library

 	Mauricio Natanael Ferreira
 	LM35 - Sensor de Temperatura - Arduino
 	Website: http://www.ferreiramauricio.com/lm35-sensor-de-temperatura-arduino
