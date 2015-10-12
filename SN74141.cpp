
#include <Arduino.h>
#include "SN74141.h"

static uint8_t SN74141_FN_TABLE[][4] =
{
  // D, C, B, A
  { LOW  , LOW  , LOW  , LOW }  , // 0
  { LOW  , LOW  , LOW  , HIGH } , // 1
  { LOW  , LOW  , HIGH , LOW }  , // 2
  { LOW  , LOW  , HIGH , HIGH } , // 3
  { LOW  , HIGH , LOW  , LOW }  , // 4
  { LOW  , HIGH , LOW  , HIGH } , // 5
  { LOW  , HIGH , HIGH , LOW }  , // 6
  { LOW  , HIGH , HIGH , HIGH } , // 7
  { HIGH , LOW  , LOW  , LOW }  , // 8
  { HIGH , LOW  , LOW  , HIGH }   // 9
};


SN74141::SN74141(uint8_t a_pin, uint8_t b_pin ,uint8_t c_pin ,uint8_t d_pin)
{
  _a_pin = a_pin;
  _b_pin = b_pin;
  _c_pin = c_pin;
  _d_pin = d_pin;
}

void SN74141::begin()
{
  pinMode(_a_pin, OUTPUT);
  pinMode(_b_pin, OUTPUT);
  pinMode(_c_pin, OUTPUT);
  pinMode(_d_pin, OUTPUT);
}

bool SN74141::outputPin(uint8_t out_pin)
{
  if (out_pin < 10) {
    digitalWrite(_d_pin, SN74141_FN_TABLE[out_pin][0]);
    digitalWrite(_c_pin, SN74141_FN_TABLE[out_pin][1]);
    digitalWrite(_b_pin, SN74141_FN_TABLE[out_pin][2]);
    digitalWrite(_a_pin, SN74141_FN_TABLE[out_pin][3]);
    return true;
  } else {
    return false;
  }
}

