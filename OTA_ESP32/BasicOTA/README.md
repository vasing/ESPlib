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

2. Change the Data in ```secure.h```.

3. Flash ```BasicOTA.ino``` via USB initial.

---

4. Add project related code.

5. Flash with Arduino IDE via OTA by selecting the ESP-IP in ```Tools -> Port```.