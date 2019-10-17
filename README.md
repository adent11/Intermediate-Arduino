# Intermediate-Arduino

## LED Blink Revisited
#### Included Files:
<a href="LED_Blink_Revisited/LED_Blink_Revisited.ino">LED_Blink_Revisited</a> <br/>
In this assignment I refreshed my knowledge of Arduino and learned how to use analog output through pulse width modulation. My code makes an LED gradually brighten and dim from off to full brightness. It also prints how much power is going to the LED on the serial monitor.<br/>
<IMG SRC="FritzingDiagrams/LED_Blink_RevisitedScreenshot.PNG"  width="166" height="200"> <br/>
For me, this assignment was a pleasant refresher and a good way to learn how to use a for statement.

## Hello LCD
#### Included Files:
<a href="LCD/LCD.ino">LCD</a> <br/>
<a href="millistest/millistest.ino">millistest</a> <br/>
In this assignment I used an LCD screen to print "hello world" and the amount of time since the code started. I used the LiquidCrystal library to make the LCD usable. One thing that I learned in this assignment was how to use the millis() function to keep time. 
<br/>
<IMG SRC="FritzingDiagrams/Hello_LCDScreenshot.PNG"  width="248" height="200"> <br/>
I didn't enjoy this assignment due to the tedious nature of wiring the LCD screen.

## LCD Backpack
#### Included Files:
<a href="LCD_Backpack/LCD_Backpack.ino">LCD_Backpack</a> <br/>
<a href="LCD_Backpack2/LCD_Backpack2.ino">LCD_Backpack2</a> <br/>
In this assignment I learned how to use the LCD backpack to save the time and space of wiring. In my program a counter goes up when you press the button. For my first draft (LCD_Backpack) the counter keeps increasing even if you don't release the button. My final draft (LCD_Backpack2) uses a boolean to stop the counter from increasing until you release the button. <br/>
<IMG SRC="FritzingDiagrams/LCD_BackpackScreenshot.PNG"  width="361" height="200"> <br/>
I liked this assignment because it gave an easy solution for the problem of wiring the LCD.

## Photointerrupters
#### Included Files:
<a href="Photointerrupter/Photointerrupter.ino">Photointerrupter</a> <br/>
<a href="interrupt_test/interrupt_test.ino">interrupt_test</a> <br/>
In this assignment I used a photointerrupter and interrupt function to turn an LED on and off. Whenever something goes between the photointerrupter the LED turns on and off. This happens very fast beacuse it uses an interrupt, so it stops all other code to control the LED. <br/>
<IMG SRC="FritzingDiagrams/PhotointerrupterScreenshot.PNG"  width="293" height="200"> <br/>
I had a little trouble with this assignment because I hadn't done the functions assignment, so I fully understand what a function was.
## Potentiometers
#### Included Files:
<a href="Potentiometers/Potentiometers.ino">Potentiometers</a> <br/>
In this assignment I used a potentiometer to control an LED and an LCD. The LCD showed how much power the potentiometer was letting through and the LED brightened or dimmed based on the potentiometer. <br/>
<IMG SRC="FritzingDiagrams/PotentiometersScreenshot.PNG"  width="329" height="200"> <br/>
I liked this assignment because it is fun see an LED brighten or dim based on your rotation of the potentiometer.
## Motor Control
#### Included Files:
<a href="Motor_Control/Motor_Control.ino">Motor_Control</a> <br/>
In this assignment I used a potentiometer and a transistor to control the speed of a motor. The Arduino reads the input coming from the potentiometer and powers the transistor accordingly. The amount of power going to the transistor determines how much power goes from the batteries to the motor, and thus controls its speed.<br/>
<IMG SRC="FritzingDiagrams/Motor_ControlScreenshot.PNG"  width="347" height="200"> <br/>
*Fritzing diagram by <a href="https://github.com/jbailey24">jbailey24</a> <br/>*
I found this assignment frustrating because I had the transistor in backwards, so nothing worked.



