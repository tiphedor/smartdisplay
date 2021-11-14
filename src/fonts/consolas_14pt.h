#ifndef _consolas_28_
#define _consolas_28_

#include "fonts.h"
#include "Arduino.h"

const uint8_t consolas_14pt_bytes[] PROGMEM = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x20 (32: ' ')
	0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,
	0x10,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x21 (33: '!')
	0x00,0x00,0x00,0x00,0x36,0x00,0x36,0x00,0x36,0x00,0x36,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x22 (34: '"')
	0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x00,0x26,0x00,0x26,0x00,0xFF,0x00,0x24,0x00,
	0x24,0x00,0xFF,0x00,0x64,0x00,0x6C,0x00,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x23 (35: '#')
	0x00,0x00,0x08,0x00,0x08,0x00,0x3C,0x00,0x48,0x00,0x50,0x00,0x50,0x00,0x38,0x00,
	0x1C,0x00,0x12,0x00,0x12,0x00,0x16,0x00,0x7C,0x00,0x10,0x00,0x10,0x00,0x00,0x00,
	 // Character 0x24 (36: '$')
	0x00,0x00,0x00,0x00,0x71,0x00,0xDA,0x00,0xDE,0x00,0xDC,0x00,0x78,0x00,0x08,0x00,
	0x17,0x00,0x2D,0x00,0x2D,0x00,0x4D,0x00,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x25 (37: '%')
	0x00,0x00,0x00,0x00,0x3C,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x6C,0x00,0x38,0x00,
	0x7B,0x00,0xCF,0x00,0xC6,0x00,0xC7,0x00,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x26 (38: '&')
	0x00,0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x27 (39: ''')
	0x00,0x00,0x02,0x00,0x04,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x10,0x00,0x10,0x00,
	0x10,0x00,0x10,0x00,0x10,0x00,0x18,0x00,0x18,0x00,0x0C,0x00,0x04,0x00,0x02,0x00,
	 // Character 0x28 (40: '(')
	0x00,0x00,0x20,0x00,0x10,0x00,0x18,0x00,0x0C,0x00,0x0C,0x00,0x04,0x00,0x04,0x00,
	0x04,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x0C,0x00,0x18,0x00,0x10,0x00,0x20,0x00,
	 // Character 0x29 (41: ')')
	0x00,0x00,0x00,0x00,0x08,0x00,0x49,0x00,0x3F,0x00,0x1C,0x00,0x3F,0x00,0x49,0x00,
	0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x2a (42: '*')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
	0x7F,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x2b (43: '+')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x1C,0x00,0x0C,0x00,0x1C,0x00,0x30,0x00,
	 // Character 0x2c (44: ',')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x2d (45: '-')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x2e (46: '.')
	0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x08,0x00,
	0x08,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x20,0x00,0x40,0x00,0x00,0x00,
	 // Character 0x2f (47: '/')
	0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x33,0x00,0x61,0x00,0x63,0x00,0x65,0x00,
	0x69,0x00,0x71,0x00,0x61,0x00,0x33,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x30 (48: '0')
	0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x28,0x00,0x48,0x00,0x08,0x00,0x08,0x00,
	0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x31 (49: '1')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x46,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
	0x04,0x00,0x08,0x00,0x18,0x00,0x30,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x32 (50: '2')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3C,0x00,
	0x06,0x00,0x02,0x00,0x02,0x00,0x06,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x33 (51: '3')
	0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x16,0x00,0x36,0x00,0x26,0x00,
	0x46,0x00,0xC6,0x00,0xFF,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x34 (52: '4')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x7C,0x00,
	0x06,0x00,0x02,0x00,0x02,0x00,0x04,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x35 (53: '5')
	0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x30,0x00,0x20,0x00,0x60,0x00,0x6F,0x00,
	0x63,0x00,0x61,0x00,0x61,0x00,0x33,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x36 (54: '6')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x03,0x00,0x02,0x00,0x06,0x00,0x04,0x00,
	0x0C,0x00,0x08,0x00,0x18,0x00,0x10,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x37 (55: '7')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x66,0x00,0x66,0x00,0x64,0x00,0x3C,0x00,
	0x24,0x00,0x42,0x00,0x42,0x00,0x62,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x38 (56: '8')
	0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x33,0x00,0x61,0x00,0x61,0x00,0x63,0x00,
	0x3D,0x00,0x01,0x00,0x03,0x00,0x07,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x39 (57: '9')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x3a (58: ':')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x1C,0x00,0x0C,0x00,0x1C,0x00,0x30,0x00,
	 // Character 0x3b (59: ';')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,
	0x70,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x3c (60: '<')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,
	0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x3d (61: '=')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,
	0x07,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x3e (62: '>')
	0x00,0x00,0x00,0x00,0x30,0x00,0x08,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x38,0x00,
	0x30,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x3f (63: '?')
	0x00,0x00,0x00,0x00,0x0E,0x00,0x31,0x80,0x20,0x80,0x40,0x80,0x4E,0x80,0xDE,0x80,
	0xD2,0x80,0x92,0x80,0x92,0x80,0xDF,0x00,0xC0,0x00,0x40,0x00,0x62,0x00,0x3C,0x00,
	 // Character 0x40 (64: '@')
	0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x1C,0x00,0x14,0x00,0x16,0x00,0x22,0x00,
	0x22,0x00,0x22,0x00,0x7F,0x00,0x41,0x00,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x41 (65: 'A')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x7C,0x00,
	0x66,0x00,0x62,0x00,0x62,0x00,0x66,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x42 (66: 'B')
	0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x31,0x00,0x20,0x00,0x40,0x00,0x40,0x00,
	0x40,0x00,0x40,0x00,0x40,0x00,0x21,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x43 (67: 'C')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x62,0x00,0x61,0x00,0x61,0x00,0x61,0x00,
	0x61,0x00,0x61,0x00,0x61,0x00,0x62,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x44 (68: 'D')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0x00,
	0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x45 (69: 'E')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
	0x3F,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x46 (70: 'F')
	0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x30,0x00,0x20,0x00,0x40,0x00,0x40,0x00,
	0x47,0x00,0x41,0x00,0x21,0x00,0x21,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x47 (71: 'G')
	0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x00,0x63,0x00,0x63,0x00,0x63,0x00,0x7F,0x00,
	0x63,0x00,0x63,0x00,0x63,0x00,0x63,0x00,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x48 (72: 'H')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
	0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x49 (73: 'I')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
	0x04,0x00,0x04,0x00,0x04,0x00,0x4C,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x4a (74: 'J')
	0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x00,0x66,0x00,0x64,0x00,0x68,0x00,0x78,0x00,
	0x78,0x00,0x68,0x00,0x6C,0x00,0x66,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x4b (75: 'K')
	0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
	0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x4c (76: 'L')
	0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x80,0x63,0x80,0x62,0x80,0x94,0x80,0x94,0x80,
	0x9C,0x80,0x88,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x4d (77: 'M')
	0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x00,0x73,0x00,0x73,0x00,0x63,0x00,0x6B,0x00,
	0x6B,0x00,0x63,0x00,0x67,0x00,0x67,0x00,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x4e (78: 'N')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x66,0x00,0xC3,0x00,0xC3,0x00,0xC3,0x00,
	0xC3,0x00,0xC3,0x00,0xC3,0x00,0x66,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x4f (79: 'O')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x66,0x00,0x62,0x00,0x62,0x00,0x66,0x00,
	0x7C,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x50 (80: 'P')
	0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x44,0x00,0x82,0x00,0x82,0x00,0x82,0x00,
	0x82,0x00,0x82,0x00,0x82,0x00,0x44,0x00,0x38,0x00,0x18,0x00,0x1A,0x00,0x0E,0x00,
	 // Character 0x51 (81: 'Q')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x62,0x00,0x62,0x00,0x62,0x00,0x7C,0x00,
	0x6C,0x00,0x64,0x00,0x66,0x00,0x62,0x00,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x52 (82: 'R')
	0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x40,0x00,0x40,0x00,0x60,0x00,0x30,0x00,
	0x0C,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x53 (83: 'S')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
	0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x54 (84: 'T')
	0x00,0x00,0x00,0x00,0x00,0x00,0x61,0x00,0x61,0x00,0x61,0x00,0x61,0x00,0x61,0x00,
	0x61,0x00,0x61,0x00,0x61,0x00,0x63,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x55 (85: 'U')
	0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x00,0x41,0x00,0x63,0x00,0x22,0x00,0x22,0x00,
	0x36,0x00,0x34,0x00,0x14,0x00,0x1C,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x56 (86: 'V')
	0x00,0x00,0x00,0x00,0x00,0x00,0x81,0x00,0x81,0x00,0x81,0x00,0x89,0x00,0x99,0x00,
	0x95,0x00,0x95,0x00,0xA5,0x00,0xE7,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x57 (87: 'W')
	0x00,0x00,0x00,0x00,0x00,0x00,0xC3,0x00,0x66,0x00,0x34,0x00,0x1C,0x00,0x18,0x00,
	0x1C,0x00,0x34,0x00,0x26,0x00,0x63,0x00,0xC1,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x58 (88: 'X')
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x40,0x80,0x21,0x00,0x32,0x00,0x1E,0x00,
	0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x59 (89: 'Y')
	0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x02,0x00,0x06,0x00,0x04,0x00,0x08,0x00,
	0x08,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x5a (90: 'Z')
	0x00,0x00,0x00,0x00,0x1E,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,
	0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x1E,0x00,
	 // Character 0x5b (91: '[')
	0x00,0x00,0x00,0x00,0x40,0x00,0x20,0x00,0x20,0x00,0x30,0x00,0x10,0x00,0x10,0x00,
	0x08,0x00,0x08,0x00,0x0C,0x00,0x04,0x00,0x04,0x00,0x06,0x00,0x02,0x00,0x00,0x00,
	 // Character 0x5c (92: '\')
	0x00,0x00,0x00,0x00,0x3C,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
	0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x3C,0x00,
	 // Character 0x5d (93: ']')
	0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x1C,0x00,0x16,0x00,0x32,0x00,0x23,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x5e (94: '^')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,
	 // Character 0x5f (95: '_')
	0x00,0x00,0x00,0x00,0x30,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x60 (96: '`')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x22,0x00,
	0x02,0x00,0x3E,0x00,0x42,0x00,0x46,0x00,0x3A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x61 (97: 'a')
	0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x6E,0x00,0x72,0x00,
	0x62,0x00,0x62,0x00,0x62,0x00,0x66,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x62 (98: 'b')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x30,0x00,
	0x60,0x00,0x60,0x00,0x60,0x00,0x30,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x63 (99: 'c')
	0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x1E,0x00,0x22,0x00,
	0x62,0x00,0x62,0x00,0x62,0x00,0x66,0x00,0x3A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x64 (100: 'd')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x33,0x00,
	0x61,0x00,0x7F,0x00,0x60,0x00,0x30,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x65 (101: 'e')
	0x00,0x00,0x00,0x00,0x0F,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x7E,0x00,0x18,0x00,
	0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x66 (102: 'f')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x63,0x00,
	0x63,0x00,0x63,0x00,0x7C,0x00,0x60,0x00,0x7E,0x00,0x41,0x00,0x41,0x00,0x3E,0x00,
	 // Character 0x67 (103: 'g')
	0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x6E,0x00,0x72,0x00,
	0x62,0x00,0x62,0x00,0x62,0x00,0x62,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x68 (104: 'h')
	0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x18,0x00,
	0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x69 (105: 'i')
	0x00,0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x0C,0x00,
	0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x38,0x00,
	 // Character 0x6a (106: 'j')
	0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x66,0x00,0x6C,0x00,
	0x70,0x00,0x78,0x00,0x6C,0x00,0x66,0x00,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x6b (107: 'k')
	0x00,0x00,0x00,0x00,0x78,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,
	0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x6c (108: 'l')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5B,0x00,0x6D,0x00,
	0x6D,0x00,0x6D,0x00,0x6D,0x00,0x6D,0x00,0x6D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x6d (109: 'm')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6E,0x00,0x72,0x00,
	0x62,0x00,0x62,0x00,0x62,0x00,0x62,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x6e (110: 'n')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x33,0x00,
	0x61,0x00,0x61,0x00,0x61,0x00,0x33,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x6f (111: 'o')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6F,0x00,0x73,0x00,
	0x61,0x00,0x61,0x00,0x61,0x00,0x63,0x00,0x7E,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
	 // Character 0x70 (112: 'p')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x22,0x00,
	0x62,0x00,0x62,0x00,0x62,0x00,0x66,0x00,0x3A,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
	 // Character 0x71 (113: 'q')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x00,0x39,0x00,
	0x31,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x72 (114: 'r')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x60,0x00,
	0x60,0x00,0x3E,0x00,0x02,0x00,0x02,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x73 (115: 's')
	0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x18,0x00,0x18,0x00,0x7F,0x00,0x18,0x00,
	0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x74 (116: 't')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x00,0x62,0x00,
	0x62,0x00,0x62,0x00,0x62,0x00,0x66,0x00,0x3A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x75 (117: 'u')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x00,0x63,0x00,
	0x22,0x00,0x22,0x00,0x14,0x00,0x1C,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x76 (118: 'v')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x00,0x41,0x00,
	0x49,0x00,0x49,0x00,0x55,0x00,0x77,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x77 (119: 'w')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x00,0x36,0x00,
	0x1C,0x00,0x0C,0x00,0x16,0x00,0x33,0x00,0x61,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x78 (120: 'x')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x00,0x63,0x00,
	0x22,0x00,0x22,0x00,0x14,0x00,0x1C,0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x60,0x00,
	 // Character 0x79 (121: 'y')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x04,0x00,
	0x08,0x00,0x18,0x00,0x10,0x00,0x20,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x7a (122: 'z')
	0x00,0x00,0x00,0x00,0x0E,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x10,0x00,
	0x70,0x00,0x10,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x0E,0x00,
	 // Character 0x7b (123: '{')
	0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
	0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
	 // Character 0x7c (124: '|')
	0x00,0x00,0x00,0x00,0x70,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x08,0x00,
	0x0E,0x00,0x08,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x70,0x00,
	 // Character 0x7d (125: '}')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x80,
	0x64,0x80,0x63,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 // Character 0x7e (126: '~')
};


sFONT consolas_14pt = {
  consolas_14pt_bytes,
  9, /* Width */
  16, /* Height */
};

#endif