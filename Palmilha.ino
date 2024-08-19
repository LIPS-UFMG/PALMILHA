#include <Thermistor.h> //INCLUSÃO DA BIBLIOTECA

Thermistor temp(3); 
Thermistor temp1(4); 
Thermistor temp2(5); //VARIÁVEL DO TIPO THERMISTOR, INDICANDO O PINO ANALÓGICO (A2) EM QUE O TERMISTOR ESTÁ CONECTADO
void setup() {
  Serial.begin(9600); //INICIALIZA A SERIAL
  delay(1000); //INTERVALO DE 1 SEGUNDO
}
void loop() {
   int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("\nSensor 1: ");
  Serial.print(sensorValue);
  float temperature = temp.getTemp(); //VARIÁVEL DO TIPO INTEIRO QUE RECEBE O VALOR DE TEMPERATURA CALCULADO PELA BIBLIOTECA
  Serial.print("\nTemperatura 1: "); //IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(temperature); //IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
  Serial.println(" °C"); //IMPRIME O TEXTO NO MONITOR SERIAL
    int sensorValue1 = analogRead(A1);
  // print out the value you read:
  Serial.print("\nSensor 2: ");
  Serial.print(sensorValue1);
  float temperature1 = temp1.getTemp(); //VARIÁVEL DO TIPO INTEIRO QUE RECEBE O VALOR DE TEMPERATURA CALCULADO PELA BIBLIOTECA
  Serial.print("\nTemperatura 2: "); //IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(temperature1); //IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
  Serial.println(" °C"); //IMPRIME O TEXTO NO MONITOR SERIAL
      int sensorValue2 = analogRead(A2);
  // print out the value you read:
  Serial.print("\nSensor 3: ");
  Serial.print(sensorValue2);
  float temperature2 = temp2.getTemp(); //VARIÁVEL DO TIPO INTEIRO QUE RECEBE O VALOR DE TEMPERATURA CALCULADO PELA BIBLIOTECA
  Serial.print("\nTemperatura 3: "); //IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(temperature2); //IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
  Serial.println(" °C"); //IMPRIME O TEXTO NO MONITOR SERIAL
   
 

  delay(1000); //INTERVALO DE 1 SEGUNDO
}


