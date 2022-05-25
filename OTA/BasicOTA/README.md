# Manual

Board: ESP8266

## Prerequisites

Python https://www.python.org/downloads/ 
(tested successfully with 3.10.4)

## Setup ESP

1. Add secure.h file in the directory.

```
#define STASSID "FRITZ!Box"
#define STAPSK  "1234"
```

1. Change the Data in ```secure.h```.

2. Flash ```BasicOTA.ino``` via USB initial.

---

3. Add project related code.

4. Flash with Arduino IDE via OTA by selecting the ESP-IP in ```Tools -> Port```.