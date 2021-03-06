#ifndef DHT11_H
#define DHT11_H
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

/* DHT library 

MIT license
written by Adafruit Industries
Modified by Vu Nguyen <quangngmetro@gmail.com>
The library was modified by mainly removing code for other DHT modules
Only the code for DHT11 sensor is kept
*/

// how many timing transitions we need to keep track of. 2 * number bits + extra
#define MAXTIMINGS 85


class DHT11 {
 private:
  uint8_t data[6];
  uint8_t _pin, _type, _count;
  unsigned long _lastreadtime;
  boolean firstreading;

 public:
  DHT11(uint8_t pin, uint8_t count=6);
  void begin(void);
  float readTemperature(void);
  float readHumidity(void);
  boolean read(void);
};
#endif
