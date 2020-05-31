New features added on top of nhatuan84 library:
- New 5x7 font with higher character density compared to cp437 font: use constructor LedMatrix(NUMBER_OF_DEVICES, CLK_PIN, MISO_PIN, MOSI_PIN, CS_PIN, FONT_5x7);
- Support for 90 degree rotated displays -> use commith() instead of commit()
- Support for graphics primitives:
    void drawRectangle(int8_t x0, int8_t y0, int8_t x1, int8_t y1);
    void drawLine(int8_t x0, int8_t y0, int8_t x1, int8_t y1);

==================================================================================
visit IOTSHARING.COM for more

This library is only for MAX7219.

the original version is for esp8266, I modified a little to adapt with esp32.

Just clone the code and copy it Arduino/libraries folder

Demo 5: How to use Arduino ESP32 to display information on SPI LED matrix
http://www.iotsharing.com/2017/05/how-to-use-arduino-esp32-to-display-spi-led-matrix.html
