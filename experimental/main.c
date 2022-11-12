#include <stdint.h>

#define _DATA
#ifdef DATA
uint8_t  byte = 0x12;
uint16_t word = 0x1234;
uint32_t dword = 0x12345678;
uint64_t qword = 0x123456789abcdef;
unsigned __int128 dqword1 = (__int128) 0x123456789abcdef;
unsigned __int128 dqword2 = (__int128) 0x123456789abcdef << 64;
#endif

#define _DATA2
#ifdef DATA2
int8_t i = 0;
int8_t *p1 = (int8_t*)0x1234;
int8_t *p2 = &i;
#endif

#define _DATA3
#ifdef DATA3
struct bit_field {
  int data1:8;
  int data2:8;
  int data3:8;
  int data4:8;
};
struct bit_field2 {
  int data1:8;
  int data2:8;
  int data3:8;
  int data4:8;
  char data5:4;
};
struct normal_struct {
  int data1;
  int data2;
  int data3;
  int data4;
};
struct normal_struct ns = {
  .data1 = 0x12345678,
  .data2 = 0x9abcdef0,
  .data3 = 0x12345678,
  .data4 = 0x12345678,
};
int i = 0x123456789;
struct bit_field2 bf2 = {
  .data1 = 0x12,
  .data2 = 0x34,
  .data3 = 0x56,
  .data4 = 0x78,
  .data5 = 0xf,
};
#endif

#define _DATA4
#ifdef DATA4
uint8_t a8[2] = {0x12, 0x34};
uint16_t a16[2] = {0x1234, 0x5678};
uint32_t a32[2] = {0x12345678, 0x9abcdef0};
uint64_t a64[2] = {0x123456789abcdef0, 0x123456789abcdef0};
#endif

#define DATA5
#ifdef DATA5
uint8_t a2[2][2] = {
  {0x12, 0x34},
  {0x56, 0x78},
};
uint8_t a3[2][2][2] = {
  {{0x12, 0x34},
  {0x56, 0x78}},
  {{0x9a, 0xbc},
  {0xde, 0xf0}},
};
#endif

int main(int argc, char *argv[])
{
  return 0;
}
