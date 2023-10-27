## Commands

* `mkdocs new [dir-name]` - Create a new project.
* `mkdocs serve` - Start the live-reloading docs server.
* `mkdocs build` - Build the documentation site.
* `mkdocs -h` - Print help message and exit.

## Programa del taller

* Introducción al uso de sensores y actuadores en Robótica
  - Definición de sensor y actuador
  - 

* Tipos de conexión 
  - Analógica
    - Entradas (ADC) - Conexión de sensores
    - Salidas (DAC) - Conexión de actuadores
    - Necdsidad de acondicionamiento
  - Actuadores

## Actividades Prácticas

|  Batería |   |
|---|---|
|Batería +   | Interruptor   |
|Batería -   | Regulador IN -   |

| Interruptor| |
|---|---|
| Interruptor 1 | Batería + |
|Interruptor 2 | Regulador IN +|

|Regulador| |
|---|---|
|In +| Interruptor 1|
|In -| Batería -|
|Out +| Puente en H VD|
|Out -| Puente en H GND|

|Puente en H | |
|---|---|
|GND| Regulador Out -|
|GND| Arduino GND  |
|+12| Arduino VIN|
|+12| Regulador Out +|
|ENA| Arduino D6|
|IN1| Arduino D4|
|IN2| Arduino D5|
|IN3| Arduino D7|
|IN4| Arduino D8|
|ENB| Arduino D9|
|OUT1| Motor1 +|
|OUT2| Motor1 -|
|OUT3| Motor2 +|
|OUT4| Motor2 -|


|Sensor Infrarrojo Derecho||
|---|---|
|VCC| Arduino Rst|
|GND| Arduino GND|
|D0| Arduino D2|

|Sensor Infrarrojo Izquierdo||
|---|---|
|VCC| Arduino Rst|
|GND| Arduino GND|
|D0| Arduino D3|


### Medida de Aceleración y Orientación en el espacio (IMU)


### Medida de distancia (Sharp 2y0a21)
El sensor Sharp 2y0a21 es un medidor de distancia cuyo funcionamiento se basa en la combinación de un diodo emisor de infrarrojos (IRED, infrared emitting diode), un detector (PSD, position sensitive detector) y la circuitería necesaria para acondicionar y procesar la señal medida. La luz emitida por el IRED refleja en el objeto detectado (si lo hubiere) y es detectado por el PSD, generando en consecuencia un voltaje de salida dependiente de la distancia a la que se encuentra el objeto.

En el rango de distancia nominal (4-30 cm o 10-80cm, según modelo), la tensión de salida entregada por el sensor es aproximadamente proporcional al inverso de la distancia al objeto.

Para entender mejor el funcionamiento del sensor, vamos a realizar una calibración de la medida de distancia.

### Descargar el firmware en Arduino

El código base necesario lo tienes disponible en [nuestro repo de github](https://github.com/UCM-237/TallerRobotica)

Descárgalo y ábrelo con el IDE de Arduino. Verás que hay dos archivos:

+ **agent.ino** es el código principal de Arduino. Es en este archivo donde tienes las funciones principales que puedes usar y que os damos para facilitar la puesta en marcha y donde tendrás que escribir tu código.
+ **common.h** contiene las definiciones de variables y estructuras

Puedes conseguir que el robot mueva las ruedas usando las siguientes funciones:


* Busca un objeto con una superficie plana de un tamaño no demasiado pequeño, p. ej. un folio o un teléfono móvil.
* Prepara una cinta métrica o cualquier otra herramienta que te permita medir con precisión la distancia a la que se encuentra el objeto.
* Coloca el objeto a la distancia $pos\in(10,80)$
  - Anota _pos_ y la medida de tensión en el sensor _v\_out_ 


* Reconocimiento por Visión
