## Superceded by this library and example:

https://github.com/Bodmer/DarkSkyWeather

This is because Weather Underground will no longer support free API's.

#------------------------------------------------------------------

This forked copy has been adapted to be compatible with a NodeMCU 1.0 with different pin allocations for the TFT display interface. It uses the TFT_eSPI library and includes Jpeg splash screen at startup.

This ReadMe file is not complete yet so some helpful information is missing, so bear this in mind if you want to try this sketch as it will need some Arduino project experience to get working!  edits to the settings.h file will be needed to set your location and to add the Weather Underground API key. You can get this API key by setting up a free account on the Weather Underground website.

The ESP8266 support core for the Arduino IDE must be loaded via the Boards Manager. Set the upload baud rate to a high value, the CPU clock rate to 160MHz and the SPIFFS size to 3Mbytes in the IDE. The large SPIFFS size is needed to hold the image and weather icon files that will be automatically downloaded from the internet.

Splash startup screen:

<a href="http://imgur.com/vwvLz1T"><img src="http://i.imgur.com/vwvLz1T.png" title="source: imgur.com" /></a>

And tweaked weather screen:

<a href="http://imgur.com/xS7fWyw"><img src="http://i.imgur.com/xS7fWyw.png" title="source: imgur.com" /></a>

#The following support ibraries are needed:

esp8266-weather-station via Library Manager or from this link:

https://github.com/squix78/esp8266-weather-station

JPEGDecoder via Library Manager or from this link:

https://github.com/Bodmer/JPEGDecoder

json-streaming-parser via Library Manager or from this link:

https://github.com/squix78/json-streaming-parser

TFT_eSPI from this link:

https://github.com/Bodmer/TFT_eSPI

WiFiManager via Library Manager or from this link:

https://github.com/tzapu/WiFiManager






The original Squix repository ReadMe file follows, note that some of the text is no longer relevant...

# esp8266-weather-station-color

ESP8266 Weather Station in Color using ILI9341 TFT 240x320 display

## Hardware Requirements

This code is made for an 240x320 65K ILI9341 display with code running on an ESP8266.
You can buy such a display here: 

[http://www.banggood.com/2_2-Inch-Serial-TFT-SPI-Screen-p-912854.html](http://www.banggood.com/2_2-Inch-Serial-TFT-SPI-LCD-Screen-Module-HD-240-x-320-5110-Compatible-p-912854.html?p=6R31122484684201508S)

## Software Requirements/ Libraries

* Arduino IDE with ESP8266 platform installed
* [Weather Station Library](https://github.com/squix78/esp8266-weather-station) or through Library Manager
* [Adafruit ILI9341](https://github.com/adafruit/Adafruit_ILI9341) or through Library Manager
* [Adafruit GFX](https://github.com/adafruit/Adafruit-GFX-Library) or through Library Manager
* [WifiManager](https://github.com/tzapu/WiFiManager)

You also need to get an API key for the Wunderground data: https://www.wunderground.com/

## Wiring

| ILI9341       | NodeMCU      |
| ------------- |:-------------:| 
| MISO          | -             | 
| LED           | 56 Ohms to 3V3 or 5V*           | 
| SCK           | D5            | 
| MOSI          | D7            |
| DC/RS         | D3            |
| RESET         | D4           |
| CS            | D8            |
| GND           | GND           |
| VCC           | 3V3           |

[*] Some 2.2" TFT displays require an LED current limit resistor of 56 Ohms when connected to 5V, others have a transistor switch so the LED can be PWM controlled by a digital pin to vary the backlight brightness.
