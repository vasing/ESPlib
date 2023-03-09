## Basic OTA

Flash via Arduino IDE

### Eigenen Code ergänzen

Die ```delay()``` Anweisung sollte vermieden werden. Es wird nämlich der Programmablauf angehalten. In diesem Zustand kann ein OTA Upload nicht erkannt und angenommen werden.