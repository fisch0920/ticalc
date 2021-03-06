// Header File
// Created 11/12/2003; 6:44:14 AM

/*	Dark Gray with light shadow and spots of black font, some of the letters come from a 
Rampage Arcade Font, the rest were made by me	 */
unsigned char Font[39][24] = 
{	{0x00,0x02,0x0A,0x1A,0x1B,0x31,0x31,0x63,  // Light Data
	0x0C,0x1C,0x34,0x24,0x7C,0xEE,0xC6,0x00,  // Dark Data
	0xF3,0xE1,0xC1,0xC1,0x80,0x00,0x08,0x9C},  // Mask...
	
	{0x00,0x18,0x2A,0x3C,0x60,0x24,0x48,0xC0,
	0xFC,0x66,0x4C,0xF0,0x48,0xC8,0xB0,0x00,
	0x03,0x81,0x91,0x03,0x97,0x13,0x07,0x3F},
	
	{0x04,0x18,0x20,0x20,0x60,0x72,0x64,0x38,
	0x38,0x60,0x40,0xC0,0xC0,0x64,0x38,0x00,
	0xC3,0x87,0x9F,0x1F,0x1F,0x89,0x83,0xC7},
	
	{0x00,0x00,0x30,0x62,0x62,0x64,0x08,0x70,
	0xF0,0x78,0x4C,0x44,0x4C,0xF8,0x70,0x00,
	0x0F,0x87,0x83,0x99,0x91,0x03,0x87,0x8F},
	
	{0x02,0x1E,0x64,0x7C,0x60,0x22,0x04,0x38,
	0x7C,0x60,0xF8,0xC0,0xC0,0xFC,0x78,0x00,
	0x81,0x81,0x03,0x03,0x1F,0x01,0x83,0xC7},
	
	{0x02,0x1E,0x60,0x64,0x3C,0x20,0x20,0x60,
	0x7C,0x60,0xC0,0xF8,0x60,0xC0,0xC0,0x00,
	0x81,0x81,0x1F,0x03,0x83,0x1F,0x1F,0x9F},
	
	{0x02,0x1E,0x20,0x22,0x61,0x31,0x52,0x3C,
	0x3C,0x60,0x40,0xC4,0xC6,0x62,0x3C,0x00,
	0xC1,0x81,0x9F,0x19,0x18,0x8C,0x81,0xC3},
	
	{0x02,0x02,0x42,0x32,0x22,0x42,0x22,0x4C,
	0x84,0x84,0x8C,0xFC,0xCC,0x84,0x4C,0x00,
	0x79,0x79,0x31,0x01,0x11,0x39,0x91,0xB3},
	
	{0x08,0x08,0x14,0x14,0x14,0x08,0x08,0x10,
	0x10,0x10,0x18,0x18,0x38,0x30,0x10,0x00,
	0xE7,0xE7,0xE3,0xE3,0xC3,0xC7,0xE7,0xEF},
	
	{0x00,0x04,0x14,0x0A,0x1A,0x12,0x04,0x78,
	0x7C,0x38,0x18,0x0C,0x8C,0xFC,0x78,0x00,
	0x83,0xC3,0xE3,0xF1,0x61,0x01,0x83,0x87},
	
	{0x00,0x22,0x24,0x30,0x30,0x20,0x21,0x46,
	0x46,0x4C,0x58,0x70,0xF8,0xCC,0x46,0x00,
	0xB9,0x91,0x83,0x8F,0x07,0x13,0x98,0xB9},
	
	{0x00,0x20,0x20,0x20,0x62,0x62,0x04,0x78,
	0x40,0xC0,0xC0,0xC0,0xC4,0xFC,0x78,0x00,
	0xBF,0x1F,0x1F,0x1F,0x19,0x01,0x83,0x87},
	
	{0x41,0x21,0x39,0x7D,0x59,0x51,0x21,0x46,
	0x82,0xC6,0xEE,0xBA,0x92,0x82,0x46,0x00,
	0x3C,0x18,0x00,0x00,0x24,0x2C,0x98,0xB9},
	
	{0x02,0x01,0x01,0x11,0x39,0x29,0x22,0x44,
	0x84,0xC6,0x66,0x72,0xDA,0xCE,0x44,0x00,
	0x79,0x38,0x98,0x8C,0x04,0x10,0x99,0xBB},
	
	{0x00,0x02,0x19,0x21,0x21,0x0A,0x1C,0x38,
	0x18,0x3C,0x66,0xC2,0xC6,0x6C,0x38,0x00,
	0xE7,0xC1,0x80,0x1C,0x18,0x91,0xC3,0xC7},
	
	{0x00,0x32,0x22,0x74,0x38,0x10,0x10,0x60,
	0x78,0xCC,0xC4,0xF8,0x40,0x60,0x60,0x00,
	0x87,0x01,0x19,0x03,0x87,0x8F,0x8F,0x9F},
	
	{0x00,0x02,0x19,0x21,0x29,0x02,0x04,0x38,
	0x18,0x3C,0x66,0xC2,0xCA,0x64,0x3A,0x00,
	0xE7,0xC1,0x80,0x1C,0x14,0x99,0xC1,0xC7},
	
	{0x00,0x18,0x2A,0x3C,0x30,0x20,0x41,0xC6,
	0xFC,0x66,0x4C,0xF0,0x58,0xCC,0x86,0x00,
	0x03,0x81,0x91,0x03,0x87,0x13,0x38,0x39},
	
	{0x00,0x1A,0x24,0x30,0x32,0x02,0x04,0x78,
	0x38,0x64,0xC0,0x78,0x0C,0xCC,0x78,0x00,
	0xC7,0x81,0x1B,0x87,0xC1,0x31,0x83,0x87},
	
	{0x01,0x06,0x18,0x78,0x1C,0x04,0x04,0x08,
	0x0E,0x38,0xF0,0x10,0x18,0x18,0x08,0x00,
	0xF0,0xC1,0x07,0x87,0xE3,0xE3,0xF3,0xF7},
	
	{0x12,0x21,0x21,0x21,0x21,0x11,0x1E,0x3C,
	0x64,0xC6,0xC2,0xC2,0xC2,0x66,0x3C,0x00,
	0x89,0x18,0x1C,0x1C,0x1C,0x88,0xC1,0xC3},
	
	{0x01,0x01,0x01,0x09,0x1E,0x0E,0x02,0x0C,
	0xC2,0x42,0x62,0x36,0x1C,0x1C,0x0C,0x00,
	0x3C,0xBC,0x9C,0xC0,0xE1,0xE1,0xF1,0xF3},
	
	{0x00,0x01,0x41,0x59,0x7D,0x39,0x21,0x40,
	0x00,0x46,0x82,0x92,0xBA,0xEE,0xC6,0x82,
	0xFF,0xB8,0x3C,0x24,0x00,0x00,0x18,0x3D},
	
	{0x00,0x00,0x10,0x7A,0x18,0x3E,0x11,0x25,
	0x00,0x82,0xE6,0x3C,0x10,0x38,0x6E,0xC2,
	0xFF,0x7D,0x09,0x81,0xE7,0xC1,0x80,0x18},
	
	{0x01,0x01,0x1D,0x1E,0x0E,0x04,0x04,0x18,
	0xC2,0x62,0x36,0x1C,0x0C,0x08,0x18,0x00,
	0x3C,0x9C,0xC0,0xE1,0xF1,0xF3,0xE3,0xE7},
	
	{0x00,0x3A,0xCE,0x3C,0x78,0x22,0x04,0x7C,
	0x7C,0xC4,0x0C,0x38,0x60,0xCC,0xF8,0x00,
	0x83,0x01,0x31,0xC3,0x87,0x11,0x03,0x83},  // 26
	// Numbers
	{0x00,0x02,0x19,0x21,0x61,0x62,0x14,0x38,
	0x18,0x3C,0x66,0xC2,0xC2,0x64,0x38,0x00,
	0xE7,0xC1,0x80,0x1C,0x1C,0x99,0xC3,0xC7},
	
	{0x12,0x02,0x04,0x14,0x14,0x04,0x08,0x10,
	0x1C,0x0C,0x18,0x18,0x18,0x18,0x30,0x00,
	0xE1,0xF1,0xE3,0xE3,0xE3,0xE3,0xC7,0xEF},
	
	{0x00,0x01,0x01,0x1A,0x24,0x50,0x20,0x02,
	0x3C,0x3E,0x06,0x1C,0x38,0x60,0xC0,0xFC,
	0xC3,0xC0,0xF8,0xE1,0xC3,0x8F,0x1F,0x01},
	
	{0x00,0x00,0x02,0x3C,0x02,0x02,0x02,0x04,
	0x7C,0x0E,0x1C,0x38,0x1C,0x0C,0x1C,0xF8,
	0x83,0xF1,0xE1,0xC3,0xE1,0xF1,0xE1,0x03},
	
	{0x00,0x00,0x0D,0x15,0x09,0x01,0x02,0x02,
	0x0E,0x1F,0x3E,0x76,0x66,0x7E,0x0C,0x0C,
	0xF1,0xE0,0xC0,0x88,0x90,0x80,0xF1,0xF1},
	
	{0x20,0x06,0x08,0x08,0x0D,0x05,0x0A,0x44,
	0x1F,0x38,0x30,0x3C,0x06,0x06,0x6C,0x38,
	0xC0,0xC1,0xC7,0xC3,0xF0,0xF8,0x91,0x83},
	
	{0x20,0x08,0x90,0x24,0x72,0x42,0x74,0x88,
	0x1E,0x70,0x60,0xF8,0xCC,0xCC,0xC8,0x70,
	0xC1,0x87,0x0F,0x03,0x01,0x31,0x03,0x07},
	
	{0x00,0x01,0x02,0x0C,0x10,0x08,0x50,0x10,
	0x3F,0x06,0x0C,0x18,0x38,0x30,0x20,0x60,
	0xC0,0xF8,0xF1,0xE3,0xC7,0xC7,0x8F,0x8F},
	
	{0x00,0x09,0x11,0x0A,0x10,0x09,0x19,0x02,
	0x1C,0x36,0x36,0x1C,0x3E,0x66,0x66,0x3C,
	0xE3,0xC0,0xC8,0xE1,0xC1,0x90,0x80,0xC1},
	
	{0x00,0x08,0x01,0x31,0x09,0x12,0x02,0x08,
	0x1C,0x36,0x66,0x7E,0x3E,0x0C,0x1C,0xF0,
	0xE3,0xC1,0x98,0x80,0xC0,0xE1,0xE1,0x07},  // 36
	// Comma, Dash, and Period
	{0x0,0x0,0x0,0x0,0x0,0x20,0x40,0x0,
	0x0,0x0,0x0,0x0,0x0,0x20,0x20,0x40,
	0xFF,0xFF,0xFF,0xFF,0xCF,0x8F,0xF,0x1F},
	
	{0x0,0x0,0x0,0x0,0x3D,0x1,0xF,0x0,
	0x0,0x0,0x0,0x7E,0x7E,0x7E,0x0,0x0,
	0xFF,0xFF,0xFF,0x81,0x80,0x80,0xF0,0xFF},
	
	{0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x20,
	0x0,0x0,0x0,0x0,0x0,0x0,0x60,0x40,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xF,0xF,0xF},  // 39
};