# Week 2 Practical

1. LEDs in serial & parallel
- How many leds can you hook up with a 220k resistor in serial before running out of voltage?
- How many leds can you hook up with a 220k resistor in parallel before running out of voltage?
2. Serial Data
- Using the hello sketch, play with the serial monitor( In the Arduino menu Tools>Serial Monitor) to tell a wee story based on player input. It can be around 3 lines long.
3. Potentiometers
- Hook up a knob and have it change the brightness of an LED
4. Light Dependent Resistors
- Hook up an LDR. Try making the LED change brightness depending on the light level.
5. Playing with Common Sensors
→ __Collab with Harry, we had the PIRS motion sensor__

## LEDs in series/parallel 

Practically: More than I was able to test<br />
__Theoretically: V = I * R__

![Image](https://github.com/moritzsalla/cci-physcomp-homework/blob/master/week-2/serial-led.jpg)

## Potentiometer

analogRead pot, analogWrite to pin using PWM. map(value, fromLow, fromHigh, toLow, toHigh) comes in handy!

→ https://youtu.be/KLnQmeqmp2c

![Image](https://github.com/moritzsalla/cci-physcomp-homework/blob/master/week-2/potentiometer.jpg)

## PIRS Motion Sensor

![Image](https://github.com/moritzsalla/cci-physcomp-homework/blob/master/week-2/motion-sensor-1.jpg)
![Image](https://github.com/moritzsalla/cci-physcomp-homework/blob/master/week-2/motion-sensor-2.jpg)
