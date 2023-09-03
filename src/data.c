#pragma bank 1

#include "global.h"
#include "data.h"

#include <gbdk/incbin.h>

INCBIN(title_tiles, "res/title_bg.chr")
INCBIN_EXTERN(title_tiles)

INCBIN(title_map, "res/title_map.bin")
INCBIN_EXTERN(title_map)

INCBIN(sprite_tiles, "res/sprite_tiles.chr")
INCBIN_EXTERN(sprite_tiles)

INCBIN(hud_tiles, "res/hud_tiles.chr")
INCBIN_EXTERN(hud_tiles)

BANKREF(hud_map)
const unsigned char hud_map[] =
{
  0x33,0x3B,0x23,0x3B,0x2F,0x3B,0x32,0x3B,0x25,0x3B,
  0x20,0x3B,0x20,0x20,0x2C,0x46,0x29,0x46,0x26,0x46,
  0x25,0x46,0x20,0x20,0x47,0x49,0x48,0x4A,0x20,0x20,
  0x2C,0x3C,0x25,0x45,0x36,0x3C,0x25,0x20,0x2C,0x20
};

BANKREF(end_map)
const unsigned char end_map[] =
{
  0x18,0x16,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0x01,0x01,0x16,0x19,0x18,0x17,
  0x0A,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,
  0x0B,0x0B,0x0B,0x0C,0x17,0x19,0x1A,0x16,0x01,0x01,
  0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x01,0x16,0x1B,0x15,0x17,0x01,0x00,0x23,0x00,
  0x01,0x00,0x00,0x25,0x00,0x00,0x01,0x01,0x01,0x00,
  0x17,0x16,0x18,0x16,0x01,0x00,0x2F,0x00,0x01,0x00,
  0x24,0x36,0x22,0x00,0x00,0x00,0x00,0x00,0x16,0x17,
  0x18,0x17,0x01,0x00,0x2E,0x00,0x00,0x00,0x25,0x29,
  0x2C,0x00,0x00,0x39,0x00,0x00,0x17,0x16,0x18,0x16,
  0x00,0x00,0x27,0x00,0x00,0x39,0x26,0x2C,0x21,0x00,
  0x00,0x2F,0x00,0x00,0x16,0x17,0x18,0x17,0x00,0x00,
  0x32,0x00,0x00,0x2F,0x25,0x00,0x23,0x00,0x00,0x35,
  0x3B,0x00,0x17,0x15,0x18,0x16,0x00,0x00,0x21,0x00,
  0x00,0x35,0x21,0x26,0x2B,0x00,0x00,0x32,0x3B,0x00,
  0x16,0x19,0x18,0x17,0x00,0x00,0x34,0x00,0x00,0x00,
  0x34,0x2F,0x00,0x00,0x00,0x00,0x3B,0x00,0x17,0x19,
  0x1A,0x16,0x00,0x00,0x35,0x00,0x00,0x28,0x25,0x32,
  0x23,0x00,0x00,0x33,0x3B,0x00,0x16,0x19,0x16,0x17,
  0x01,0x00,0x2C,0x00,0x00,0x21,0x24,0x23,0x21,0x00,
  0x00,0x23,0x3B,0x00,0x17,0x19,0x17,0x16,0x01,0x00,
  0x21,0x00,0x00,0x36,0x00,0x25,0x33,0x00,0x00,0x2F,
  0x3B,0x00,0x16,0x19,0x16,0x17,0x01,0x00,0x34,0x00,
  0x00,0x25,0x34,0x33,0x34,0x00,0x00,0x32,0x00,0x00,
  0x17,0x19,0x17,0x16,0x01,0x00,0x29,0x00,0x00,0x00,
  0x28,0x00,0x2C,0x00,0x00,0x25,0x00,0x00,0x16,0x19,
  0x18,0x17,0x00,0x00,0x2F,0x00,0x01,0x00,0x25,0x2F,
  0x25,0x00,0x00,0x00,0x00,0x00,0x17,0x19,0x18,0x16,
  0x00,0x00,0x2E,0x00,0x01,0x00,0x00,0x26,0x00,0x00,
  0x00,0x00,0x01,0x01,0x16,0x1B,0x18,0x17,0x00,0x00,
  0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,
  0x01,0x01,0x17,0x16,0x18,0x16,0x0A,0x0B,0x0B,0x0B,
  0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0C,
  0x16,0x17,0x18,0x17,0x01,0x01,0x00,0x00,0x00,0x00,
  0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x17,0x16
};
