# nrf52-Deep-Sleep-using-ZypherRTOS
Using the Nordic Blinky sample of ZypherRTOS v2.2.0, the system off (Deep Sleep) feature is enabled and less than 10uA current of system-off mode is achieved successfully.





# Testing and Results: 

As we are using the nrf52 development kit to test and using Ammeter to get the precise measurement of current for IC. We need to make some changes in DK so that other peripherals on DK such as J-link and LED power can not be considered while in Deep sleep.



# Testing Method 1:
If you want to power the Kit to visualize the output via LED and buttons then you need to power the chip saperately and kit saperately

SW10 --> ON
SW6 --> Default
USB plug on J2
External Supply 3.3V with Ammeter -- > P21

In this setup the chip is powered by External supply so in that case we can measure the current via ammetter easily. At startup the LED1 light up for 10 seconds and then goes to System off.
You can check in the video current is less then 10 uA when LED goes off after 10 seconds and if you press the Button 1 it will wake up the system.


# Testing Method 2:
If you want to test only chip power then you need to power only the chip and we can visualize the output via pure chip current variation during system on and system off.
Just need to do following for this

SW6 --> nRF only
External Supply 3.3V with Ammeter -- > P21

I have made the code in a way that on startup it turns on the LED1(gpio 13) for 10 seconds. So if you test by method 2 you will see current consumtion higher for first 10 seconds and after that it will goto System off.
