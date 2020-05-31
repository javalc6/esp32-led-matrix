New features added on top of nhatuan84 library:
- New 5x7 font with higher character density compared to cp437 font: use constructor LedMatrix(NUMBER_OF_DEVICES, CLK_PIN, MISO_PIN, MOSI_PIN, CS_PIN, FONT_5x7);
- Support for 90 degree rotated displays -> use commith() instead of commit()
- Support for graphics primitives:
    void drawRectangle(int8_t x0, int8_t y0, int8_t x1, int8_t y1);
    void drawLine(int8_t x0, int8_t y0, int8_t x1, int8_t y1);

==================================================================================
An example using this library is described here: https://zero.altervista.org/clock
