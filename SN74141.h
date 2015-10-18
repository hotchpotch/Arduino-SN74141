
#ifndef __SN74141_H__
#define __SN74141_H__

#define SN74141_OUTPUT_PIN_MAX 10
#define SN74141_OUTPUT_NONE 10

class SN74141
{
private:
  uint8_t _a_pin, _b_pin, _c_pin, _d_pin;
public:
  SN74141(uint8_t a_pin, uint8_t b_pin ,uint8_t c_pin ,uint8_t d_pin);
  void begin();
  bool outputPin(uint8_t out_pin);
  bool outputNone();
};

#endif  // __SN74141_H__
