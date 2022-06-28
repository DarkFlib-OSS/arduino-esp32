
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t LED_BUILTIN = 5;
static const uint8_t SW1 = 35;
static const uint8_t SW2 = 0;

// SPI - used for the ST7789 display built into the board
static const int8_t SCLK = 18;
static const int8_t MISO = -1;
static const int8_t MOSI = 19;
static const int8_t CS = 5;
static const int8_t DC = 16;
static const int8_t RST = 23;
static const int8_t BL = 4;

#endif /* Pins_Arduino_h */

// Defines to make the TFT_eSPI library just work
#define USER_SETUP_LOADED 1
#define ST7789_DRIVER 1
#define TFT_WIDTH 135
#define TFT_HEIGHT 240
#define TFT_MOSI 19
#define TFT_SCLK 18
#define TFT_CS 5
#define TFT_DC 16
#define TFT_RST -1
#define TFT_BL 4
#define TFT_BACKLIGHT_ON HIGH
#define LOAD_GLCD 1
#define LOAD_FONT2 1
#define LOAD_FONT4 1
#define LOAD_FONT6 1
#define LOAD_FONT7 1
#define LOAD_FONT8 1
#define LOAD_GFXFF 1
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 40000000

/*
build_flags =
  -Os
  -DCORE_DEBUG_LEVEL=ARDUHAL_LOG_LEVEL_DEBUG
  -DUSER_SETUP_LOADED=1
  -DST7789_DRIVER=1
  -DTFT_WIDTH=135
  -DTFT_HEIGHT=240
  -DCGRAM_OFFSET=1
  -DTFT_MISO=-1
  -DTFT_MOSI=19
  -DTFT_SCLK=18
  -DTFT_CS=5
  -DTFT_DC=16
  -DTFT_RST=23
  -DTFT_BL=4
  -DTFT_BACKLIGHT_ON=1
  -DLOAD_GLCD=1
  -DLOAD_FONT2=1
  -DLOAD_FONT4=1
  -DLOAD_FONT6=1
  -DLOAD_FONT7=1
  -DLOAD_FONT8=1
  -DLOAD_GFXFF=1
  -DSMOOTH_FONT=1
  -DSPI_FREQUENCY=40000000
  -DSPI_READ_FREQUENCY=6000000
  */
