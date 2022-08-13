/*
 *
 * ElektronMart6x12
 *
 *
 * File Name           : ElektronMart6x12.h
 * Date                : 7 Oktober 2019
 * Font width          : 6
 * Font height         : 12
 * Font first char     : 32
 * Font last char      : 127
 * Font used chars     : 94
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef ELEKTRONMART6x12_H
#define ELEKTRONMART6x12_H

#define ELEKTRONMART6x12_WIDTH 6
#define ELEKTRONMART6x12_HEIGHT 12

const static uint8_t ElektronMart6x12[] PROGMEM = {
    0x06, 0x48, // size // size of zero indicates fixed width font, actual length is width * height
    0x06, // width
    0x0C, // height
    0x20, // first char
    0x60, // char count
    
0x01,0x02,0x05,0x06,0x06,0x06,0x06,0x02,0x06,0x06, //	!	"	#	$	%	&	'	(	)
0x03,0x06,0x02,0x06,0x02,0x06,0x06,0x06,0x06,0x06, //*	+   	,	-	.	/	0	1	2	3
0x06,0x06,0x06,0x06,0x06,0x06,0x02,0x02,0x06,0x06, //4	5	6	7	8	9	:	;	<	=
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, //>	?	@	A	B	C	D	E	F	G
0x06,0x02,0x04,0x06,0x06,0x06,0x06,0x06,0x06,0x06, //H	I	J	K	L	M	N	O	P	Q
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x04, //R	S	T	U	V	W	X	Y	Z	[
0x06,0x04,0x06,0x06,0x02,0x06,0x06,0x06,0x06,0x06, //\	]	^	_	`	a	b	c	d	e
0x06,0x06,0x06,0x02,0x04,0x06,0x02,0x06,0x06,0x06, //f	g	h	i	j	k	l	m	n	o
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, //p	q	r	s	t	u	v	w	x	y
0x06,0x05,0x02,0x05,0x06,0x06, //z	{	|	}	->	<-
    
	// font data	 	   	   |
	0x00, 0x00, // (space)
	0xff, 0xfe, 0xdf, 0xdf, // !
	0x07, 0x0f, 0x00, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0xfc, 0xfc, 0x18, 0x18, 0xfc, 0xfc, 0xff, 0xff, 0x60, 0x60, 0xff, 0xff, // #
	0x7e, 0x7e, 0x67, 0x67, 0xe6, 0xe6, 0x60, 0x60, 0xe0, 0xe0, 0x7f, 0x7f, // $
	0x06, 0x06, 0xc0, 0x70, 0x1c, 0x07, 0xe0, 0x30, 0x00, 0x00, 0xc0, 0xc0, // %
	0xff, 0xff, 0x33, 0x33, 0xff, 0xfe, 0x7f, 0x7f, 0x60, 0x60, 0xff, 0xff, // &
	0x07, 0x0e, 0x00, 0x00, // '
	0x70, 0xf8, 0xdc, 0x0e, 0x07, 0x03, 0x00, 0x1f, 0x3f, 0x70, 0xe0, 0xc0, // (
	0x03, 0x07, 0x0e, 0xdc, 0xf8, 0x70, 0xc0, 0xe0, 0x70, 0x3f, 0x1f, 0x0f, // )
	0x07, 0x05, 0x07, 0x00, 0x00, 0x00, // *
	0xc0, 0xc0, 0xf8, 0xf0, 0xc0, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, // +
	0x00, 0x00, 0x70, 0xf0, // ,
	0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0xe0, 0xe0, // .
	0x00, 0xc0, 0xf0, 0x3c, 0x0e, 0x07, 0xe0, 0x7f, 0x1f, 0x00, 0x00, 0x00, // /
	0xff, 0xff, 0x03, 0x03, 0xff, 0xfe, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff,	// 0
	0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, // 1
	0xe3, 0xe3, 0x63, 0x63, 0x7f, 0x7e, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // 2
	0x03, 0x63, 0x63, 0x63, 0xff, 0xfe, 0x40, 0xc0, 0xc0, 0xc0, 0xff, 0xff,	// 3
	0x3f, 0x7f, 0x60, 0x60, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,	// 4
	0x7f, 0x7f, 0x63, 0x63, 0xe3, 0xe2, 0x40, 0xc0, 0xc0, 0xc0, 0xff, 0xff,	// 5
	0xff, 0xff, 0x63, 0x63, 0xe3, 0xe2, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff,	// 6
	0x03, 0x03, 0x03, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,	// 7
	0xff, 0xff, 0x63, 0x63, 0xff, 0xfe, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff,	// 8
	0x7f, 0x7f, 0x63, 0x63, 0xff, 0xfe, 0x40, 0xc0, 0xc0, 0xc0, 0xff, 0xff,	// 9
	0x9c, 0x98, 0x10, 0x30, // :
	0x9c, 0x98, 0x30, 0x70, // ;
	0x70, 0xf8, 0xd8, 0xdc, 0x8c, 0x8c, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, // <
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // =
	0x8c, 0x8c, 0xdc, 0xd8, 0xf8, 0x70, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, // >
	0x0f, 0x0f, 0x03, 0xc3, 0xff, 0x3e, 0x00, 0x00, 0x00, 0x60, 0xe0, 0x00, // ?
	0xfe, 0xfe, 0x06, 0xf6, 0xb6, 0xfe, 0xf0, 0xf0, 0xc0, 0xd0, 0xd0, 0xd0, // @
	0xff, 0xff, 0xc3, 0xc3, 0xff, 0xfe, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // A
	0xff, 0xff, 0xc3, 0xc3, 0xff, 0x3e, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // B
	0xff, 0xff, 0x03, 0x03, 0x03, 0x02, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // C
	0xff, 0xff, 0x03, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0x3f, // D
	0xff, 0xff, 0xc3, 0xc3, 0xc3, 0x02, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // E
	0xff, 0xff, 0xc3, 0xc3, 0xc3, 0x02, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, // F
	0xff, 0xff, 0x03, 0x03, 0xc3, 0xc2, 0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff, // G
	0xff, 0xff, 0xc0, 0xc0, 0xff, 0xfe, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // H
	0xff, 0xfe, 0x7f, 0xff, // I
	0x00, 0x00, 0xff, 0xfe, 0x40, 0xc0, 0xff, 0xff, // J
	0xff, 0xff, 0xc0, 0xc0, 0x7f, 0x3e, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // K
	0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // L
	0xff, 0xff, 0x06, 0x06, 0xff, 0xff, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // M
	0xff, 0xff, 0x03, 0x03, 0xff, 0xfe, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // N
	0xff, 0xff, 0x03, 0x03, 0xff, 0xfe, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // O
	0xff, 0xff, 0xc3, 0xc3, 0xff, 0xfe, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, // P
	0xff, 0xff, 0x03, 0x03, 0xff, 0xfe, 0x3f, 0x7f, 0x60, 0x70, 0xff, 0xff, // Q
	0xff, 0xff, 0xc3, 0xc3, 0x7f, 0x7e, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // R
	0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc2, 0x40, 0xc0, 0xc0, 0xc0, 0xff, 0xff, // S
	0x03, 0x03, 0xff, 0xff, 0x03, 0x02, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, // T
	0xff, 0xff, 0x00, 0x00, 0xff, 0xfe, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // U
	0xff, 0xff, 0x00, 0x00, 0xff, 0xfe, 0x3f, 0x7f, 0xe0, 0xe0, 0x7f, 0x3f, // V
	0xff, 0xff, 0x00, 0x00, 0xff, 0xfe, 0x7f, 0xff, 0x60, 0x60, 0xff, 0xff, // W
	0x7f, 0x7f, 0xe0, 0xe0, 0x7f, 0x7e, 0x7f, 0xff, 0x3f, 0x3f, 0xff, 0xff, // X
	0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, // Y
	0x83, 0xc3, 0xe3, 0x73, 0x3f, 0x1e, 0x7f, 0xff, 0xcf, 0xc0, 0xc0, 0xc0, // Z
	0xff, 0xff, 0x03, 0x03, 0xff, 0xff, 0xc0, 0xc0, // [
	0x07, 0x1c, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0e, 0x38, 0xe0, // "\"
	0x03, 0x03, 0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff, // ]
	0x0c, 0x06, 0x03, 0x03, 0x06, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, // _
	0x03, 0x07, 0x00, 0x00, // `
	0xcc, 0xcc, 0xcc, 0xcc, 0xfc, 0xf8, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // a
	0xff, 0xff, 0x0c, 0x0c, 0xfc, 0xfc, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0x7f, // b
	0xfc, 0xfc, 0x0c, 0x0c, 0x0c, 0x08, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // c
	0xfc, 0xfc, 0x0c, 0x0c, 0xff, 0xfe, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // d
	0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xf8, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // e
	0xfe, 0xff, 0xc3, 0xc3, 0x02, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, // f
	0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xf8, 0x6f, 0xef, 0xcc, 0xcc, 0xff, 0xff, // g
	0xff, 0xff, 0x0c, 0x0c, 0xfc, 0xf8, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // h
	0xfb, 0xfa, 0x7f, 0xff, // i
	0x00, 0x00, 0xfb, 0xfa, 0x40, 0xc0, 0xff, 0xff, // j
	0xff, 0xff, 0xc0, 0xc0, 0x7c, 0x38, 0x7f, 0xff, 0x10, 0x10, 0xf0, 0xe0, // k
	0xff, 0xfe, 0x7f, 0xff, // l
	0xfc, 0xfc, 0x18, 0x18, 0xfc, 0xf8, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // m
	0xfc, 0xfc, 0x0c, 0x0c, 0xfc, 0xf8, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, // n
	0xfc, 0xfc, 0x0c, 0x0c, 0xfc, 0xf8, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // o
	0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xf8, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, // p
	0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, // q
	0xfc, 0xfc, 0x0c, 0x0c, 0x0c, 0x08, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, // r
	0xfc, 0xfc, 0xcc, 0xcc, 0xcc, 0xc8, 0x40, 0xc0, 0xc0, 0xc0, 0xff, 0xff, // s
	0xfc, 0xf8, 0x30, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, // t
	0xfc, 0xfc, 0x00, 0x00, 0xfc, 0xf8, 0x7f, 0xff, 0xc0, 0xc0, 0xff, 0xff, // u
	0xfc, 0xfc, 0x00, 0x00, 0xfc, 0xf8, 0x3f, 0x7f, 0xe0, 0xe0, 0x7f, 0x3f, // v
	0xfc, 0xfc, 0x00, 0x00, 0xfc, 0xf8, 0x7f, 0xff, 0x60, 0x60, 0xff, 0xff, // w
	0x7c, 0x7c, 0xc0, 0xc0, 0x7c, 0x78, 0x70, 0xf0, 0x10, 0x10, 0xf0, 0xf0, // x
	0xfc, 0xfc, 0xc0, 0xc0, 0xfc, 0xf8, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, // y
	0x0c, 0x8c, 0xcc, 0xec, 0x7c, 0x38, 0x7f, 0xff, 0xdf, 0xc0, 0xc0, 0xc0, // z
	0xc0, 0xfc, 0x7e, 0x07, 0x03, 0x00, 0x3f, 0x7f, 0xe0, 0xc0, // {
	0xff, 0xff, 0xff, 0xff, // |
	0x03, 0x07, 0x7e, 0xfc, 0xc0, 0xc0, 0xe0, 0x7f, 0x3f, 0x00, // }
	0xc0, 0xc0, 0xc0, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x30, 0x10, 0x00, // ->
	0x60, 0xf0, 0xf8, 0xf8, 0x60, 0x60, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00 // <-
    
};

#endif
