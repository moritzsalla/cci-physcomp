# Simple Simon Says Game

Brief: Get playful with buttons and LEDS. Make a simple timing game such as Simon Says with at least 3 levels and a clear start and end. Have 3 buttons for interaction and make it so you press the first botton to start the game. When the game is
over, all 3 LEDS should come on and stay in until the start button is pressed again. If you have an idea for a better game, give it a go. I'm open to you editing these briefs. This is graduate school, have fun.

Simon says example: https://create.arduino.cc/projecthub/Arduino_Scuola/a-simple-simon-says-game-25ba99

__Error Code!__

```c++
Arduino: 1.8.10 (Mac OS X), Board: “Arduino Leonardo”
Sketch uses 3956 bytes (13%) of program storage space. Maximum is 28672 bytes.
Global variables use 149 bytes (5%) of dynamic memory, leaving 2411 bytes for local variables. Maximum is 2560 bytes.
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: ser_drain(): read error: Device not configured
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
Found programmer: Id = “”; type = 
   Software Version = .; Hardware Version = .
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: error: buffered memory access not supported. Maybe it isn’t
a butterfly/AVR109 but a AVR910 device?
avrdude: initialization failed, rc=-1
        Double check connections and try again, or use -F to override
        this check.
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: error: programmer did not respond to command: leave prog mode
avrdude: ser_send(): write error: Device not configured
avrdude: ser_recv(): read error: Device not configured
avrdude: butterfly_recv(): programmer is not responding
avrdude: error: programmer did not respond to command: exit bootloader
avrdude: ser_close(): can’t reset attributes for device: Device not configured
the selected serial port avrdude: ser_close(): can’t reset attributes for device: Device not configured
does not exist or your board is not connected
This report would have more information with
“Show verbose output during compilation”
option enabled in File -> Preferences.
```
