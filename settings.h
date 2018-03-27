/**The MIT License (MIT)
Copyright (c) 2015 by Daniel Eichhorn
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
See more at http://blog.squix.ch

Adapted by Bodmer to use the faster TFT_eSPI library:
https://github.com/Bodmer/TFT_eSPI

*/

// Setup
const int UPDATE_INTERVAL_SECS = 10 * 60; // Update every 10 minutes

// Pins for the TFT interface are defined in the User_Config.h file inside the TFT_ILI9341_ESP library
// These are the ones I used on a NodeMCU:
// #define TFT_DC D3
// #define TFT_CS D8
///#define TFT_RST -1 // Minus one means no pin allocated, connect to NodeMCU RST pin

// TimeClient settings
const float UTC_OFFSET = 0;

// Wunderground Settings, EDIT TO SUIT YOUR LOCATION
const boolean IS_METRIC = true; // Temperature only? Wind speed units appear to stay in mph. To do: investigate <<<<<<<<<<<<<<<<<<<<<<<<<
const String WUNDERGRROUND_API_KEY = "<WUNDERGROUND KEY HERE>";
const String WUNDERGRROUND_LANGUAGE = "EN";


//const String WUNDERGROUND_COUNTRY = "US";
//const String WUNDERGROUND_CITY = "FL/Boca_Raton"; // <<<<<<<< This is the format to use for US States and for cities with spaces in their name
const String WUNDERGROUND_COUNTRY = "Peru";
const String WUNDERGROUND_CITY = "Lima";

// Windspeed conversion, use 1 pair of #defines. To do: investigate a more convenient method <<<<<<<<<<<<<<<<<<<<<
//#define WIND_SPEED_SCALING 1.0      // mph
//#define WIND_SPEED_UNITS " mph"

//#define WIND_SPEED_SCALING 0.868976 // mph to knots
//#define WIND_SPEED_UNITS " kn"

#define WIND_SPEED_SCALING 1.60934  // mph to kph
#define WIND_SPEED_UNITS " kph"

//Thingspeak Settings - not used, no need to populate this at the moment
const String THINGSPEAK_CHANNEL_ID = "<CHANNEL_ID_HERE>";
const String THINGSPEAK_API_READ_KEY = "<API_READ_KEY_HERE>";

// List, so that the downloader knows what to fetch
String wundergroundIcons [] = {"chanceflurries","chancerain","chancesleet","chancesnow","clear","cloudy","flurries","fog","hazy","mostlycloudy","mostlysunny","partlycloudy","partlysunny","rain","sleet","snow","sunny","tstorms","unknown"};

/***************************
 * End Settings
 **************************/
