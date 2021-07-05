/**
** The original 3x5 font is licensed under the 3-clause BSD license:
**
** Copyright 1999 Brian J. Swetland
** Copyright 1999 Vassilii Khachaturov
** Portions (of vt100.c/vt100.h) copyright Dan Marks
**
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions, and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions, and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. The name of the authors may not be used to endorse or promote products
**    derived from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
** THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
** Modifications to Tom Thumb for improved readability are from Robey Pointer,
** see:
** http://robey.lag.net/2010/01/23/tiny-monospace-font.html
**
** Modifications for Awtrix 2.0 for improved readability and LaMetric Style are from
** Blueforcer, Yann and hollyghost
** see:
** https://forum.blueforcer.de/d/11-edit-font
**
** The original author does not have any objection to relicensing of Robey
** Pointer's modifications (in this file) in a more permissive license.  See
** the discussion at the above blog, and also here:
** http://opengameart.org/forumtopic/how-to-submit-art-using-the-3-clause-bsd-license
**
** Feb 21, 2016: Conversion from Linux BDF --> Adafruit GFX font,
** with the help of this Python script:
** https://gist.github.com/skelliam/322d421f028545f16f6d
** William Skellenger (williamj@skellenger.net)
** Twitter: @skelliam
**
** Adafruit GFX Pixel font customiser
** https://tchapi.github.io/Adafruit-GFX-Font-Customiser/
*/

#include <Adafruit_GFX.h>

const uint8_t PixelItBitmaps[] PROGMEM = {
    // [Index DEC without offset | Index ASCII | Index HEX] Description (ASCII CODE) */
    0x00,                               // [  0 |  32 | 0x20] space (0x20)
    0x80, 0x80, 0x80, 0x00, 0x80,       // [  1 |  33 | 0x21] exclam (0x21)
    0xA0, 0xA0,                         // [  2 |  34 | 0x22] quotedbl (0x22)
    0xA0, 0xE0, 0xA0, 0xE0, 0xA0,       // [  3 |  35 | 0x23] numbersign (0x23)
    0x60, 0xC0, 0x60, 0xC0, 0x40,       // [  4 |  36 | 0x24] dollar (0x24)
    0xA0, 0x20, 0x40, 0x80, 0xA0,       // [  5 |  37 | 0x25] percent (0x25)
    0xC0, 0xC0, 0xE0, 0xA0, 0x60,       // [  6 |  38 | 0x26] ampersand (0x26)
    0x80, 0x80,                         // [  7 |  39 | 0x27] quotesingle (0x27)
    0x40, 0x80, 0x80, 0x80, 0x40,       // [  8 |  40 | 0x28] parenleft (0x28)
    0x80, 0x40, 0x40, 0x40, 0x80,       // [  9 |  41 | 0x29] parenright (0x29)
    0xA0, 0x40, 0xA0,                   // [ 10 |  42 | 0x2A] asterisk (0x2A)
    0x40, 0xE0, 0x40,                   // [ 11 |  43 | 0x2B] plus (0x2B)
    0x40, 0x80,                         // [ 12 |  44 | 0x2C] comma (0x2C)
    0xE0,                               // [ 13 |  45 | 0x2D] hyphen (0x2D)
    0x80,                               // [ 14 |  46 | 0x2E] period (0x2E)
    0x20, 0x20, 0x40, 0x80, 0x80,       // [ 15 |  47 | 0x2F] slash (0x2F)
    0xE0, 0xA0, 0xA0, 0xA0, 0xE0,       // [ 16 |  48 | 0x30] zero (0x30)
    0x40, 0xC0, 0x40, 0x40, 0xE0,       // [ 17 |  49 | 0x31] one (0x31)
    0xE0, 0x20, 0xE0, 0x80, 0xE0,       // [ 18 |  50 | 0x32] two (0x32)
    0xE0, 0x20, 0xE0, 0x20, 0xE0,       // [ 19 |  51 | 0x33] three (0x33)
    0xA0, 0xA0, 0xE0, 0x20, 0x20,       // [ 20 |  52 | 0x34] four (0x34)
    0xE0, 0x80, 0xE0, 0x20, 0xE0,       // [ 21 |  53 | 0x35] five (0x35)
    0xE0, 0x80, 0xE0, 0xA0, 0xE0,       // [ 22 |  54 | 0x36] six (0x36)
    0xE0, 0x20, 0x20, 0x20, 0x20,       // [ 23 |  55 | 0x37] seven (0x37)
    0xE0, 0xA0, 0xE0, 0xA0, 0xE0,       // [ 24 |  56 | 0x38] eight (0x38)
    0xE0, 0xA0, 0xE0, 0x20, 0xE0,       // [ 25 |  57 | 0x39] nine (0x39)
    0x80, 0x00, 0x80,                   // [ 26 |  58 | 0x3A] colon (0x3A)
    0x40, 0x00, 0x40, 0x80,             // [ 27 |  59 | 0x3B] semicolon (0x3B)
    0x20, 0x40, 0x80, 0x40, 0x20,       // [ 28 |  60 | 0x3C] less (0x3C)
    0xE0, 0x00, 0xE0,                   // [ 29 |  61 | 0x3D] equal (0x3D)
    0x80, 0x40, 0x20, 0x40, 0x80,       // [ 30 |  62 | 0x3E] greater (0x3E)
    0xE0, 0x20, 0x40, 0x00, 0x40,       // [ 31 |  63 | 0x3F] question (0x3F)
    0x40, 0xA0, 0xE0, 0x80, 0x60,       // [ 32 |  64 | 0x40] at (0x40)
    0xC0, 0xA0, 0xE0, 0xA0, 0xA0,       // [ 33 |  65 | 0x41] A (0x41)
    0xC0, 0xA0, 0xC0, 0xA0, 0xC0,       // [ 34 |  66 | 0x42] B (0x42)
    0x40, 0xA0, 0x80, 0xA0, 0x40,       // [ 35 |  67 | 0x43] C (0x43)
    0xC0, 0xA0, 0xA0, 0xA0, 0xC0,       // [ 36 |  68 | 0x44] D (0x44)
    0xE0, 0x80, 0xE0, 0x80, 0xE0,       // [ 37 |  69 | 0x45] E (0x45)
    0xE0, 0x80, 0xE0, 0x80, 0x80,       // [ 38 |  70 | 0x46] F (0x46)
    0x60, 0x80, 0xA0, 0xA0, 0x60,       // [ 39 |  71 | 0x47] G (0x47)
    0xA0, 0xA0, 0xE0, 0xA0, 0xA0,       // [ 40 |  72 | 0x48] H (0x48)
    0x80, 0x80, 0x80, 0x80, 0x80,       // [ 41 |  73 | 0x49] I (0x49)
    0x20, 0x20, 0x20, 0xA0, 0x40,       // [ 42 |  74 | 0x4A] J (0x4A)
    0xA0, 0xA0, 0xC0, 0xA0, 0xA0,       // [ 43 |  75 | 0x4B] K (0x4B)
    0x80, 0x80, 0x80, 0x80, 0xE0,       // [ 44 |  76 | 0x4C] L (0x4C)
    0x88, 0xD8, 0xA8, 0x88, 0x88,       // [ 45 |  77 | 0x4D] M (0x4D)
    0x90, 0xD0, 0xB0, 0x90, 0x90,       // [ 46 |  78 | 0x4E] N (0x4E)
    0x40, 0xA0, 0xA0, 0xA0, 0x40,       // [ 47 |  79 | 0x4F] O (0x4F)
    0xE0, 0xA0, 0xC0, 0x80, 0x80,       // [ 48 |  80 | 0x50] P (0x50)
    0x40, 0xA0, 0xA0, 0xA0, 0x70,       // [ 49 |  81 | 0x51] Q (0x51)
    0xE0, 0xA0, 0xC0, 0xA0, 0xA0,       // [ 50 |  82 | 0x52] R (0x52)
    0xE0, 0x80, 0xE0, 0x20, 0xE0,       // [ 51 |  83 | 0x53] S (0x53)
    0xE0, 0x40, 0x40, 0x40, 0x40,       // [ 52 |  84 | 0x54] T (0x54)
    0xA0, 0xA0, 0xA0, 0xA0, 0xE0,       // [ 53 |  85 | 0x55] U (0x55)
    0xA0, 0xA0, 0xA0, 0xA0, 0x40,       // [ 54 |  86 | 0x56] V (0x56)
    0x88, 0x88, 0x88, 0xA8, 0x50,       // [ 55 |  87 | 0x57] W (0x57)
    0xA0, 0xA0, 0x40, 0xA0, 0xA0,       // [ 56 |  88 | 0x58] X (0x58)
    0xA0, 0xA0, 0xE0, 0x20, 0xC0,       // [ 57 |  89 | 0x59] Y (0x59)
    0xE0, 0x20, 0x40, 0x80, 0xE0,       // [ 58 |  90 | 0x5A] Z (0x5A)
    0xE0, 0x80, 0x80, 0x80, 0xE0,       // [ 59 |  91 | 0x5B] bracketleft (0x5B)
    0x80, 0x40, 0x20,                   // [ 60 |  92 | 0x5C] backslash (0x5C)
    0xE0, 0x20, 0x20, 0x20, 0xE0,       // [ 61 |  93 | 0x5D] bracketright (0x5D)
    0x40, 0xA0,                         // [ 62 |  94 | 0x5E] asciicircum (0x5E)
    0xE0,                               // [ 63 |  95 | 0x5F] underscore (0x5F)
    0x80, 0x40,                         // [ 64 |  96 | 0x60] grave (0x60)
    0xC0, 0x60, 0xA0, 0xE0,             // [ 65 |  97 | 0x61] a (0x61)
    0x80, 0xC0, 0xA0, 0xA0, 0xC0,       // [ 66 |  98 | 0x62] b (0x62)
    0x60, 0x80, 0x80, 0x60,             // [ 67 |  99 | 0x63] c (0x63)
    0x20, 0x60, 0xA0, 0xA0, 0x60,       // [ 68 | 100 | 0x64] d (0x64)
    0x60, 0xA0, 0xC0, 0x60,             // [ 69 | 101 | 0x65] e (0x65)
    0x20, 0x40, 0xE0, 0x40, 0x40,       // [ 70 | 102 | 0x66] f (0x66)
    0x60, 0xA0, 0xE0, 0x20, 0x40,       // [ 71 | 103 | 0x67] g (0x67)
    0x80, 0xC0, 0xA0, 0xA0, 0xA0,       // [ 72 | 104 | 0x68] h (0x68)
    0x80, 0x00, 0x80, 0x80, 0x80,       // [ 73 | 105 | 0x69] i (0x69)
    0x20, 0x00, 0x20, 0x20, 0xA0, 0x40, // [ 74 | 106 | 0x6A] j (0x6A)
    0x80, 0xA0, 0xC0, 0xC0, 0xA0,       // [ 75 | 107 | 0x6B] k (0x6B)
    0xC0, 0x40, 0x40, 0x40, 0xE0,       // [ 76 | 108 | 0x6C] l (0x6C)
    0xE0, 0xE0, 0xE0, 0xA0,             // [ 77 | 109 | 0x6D] m (0x6D)
    0xC0, 0xA0, 0xA0, 0xA0,             // [ 78 | 110 | 0x6E] n (0x6E)
    0x40, 0xA0, 0xA0, 0x40,             // [ 79 | 111 | 0x6F] o (0x6F)
    0xC0, 0xA0, 0xA0, 0xC0, 0x80,       // [ 80 | 112 | 0x70] p (0x70)
    0x60, 0xA0, 0xA0, 0x60, 0x20,       // [ 81 | 113 | 0x71] q (0x71)
    0x60, 0x80, 0x80, 0x80,             // [ 82 | 114 | 0x72] r (0x72)
    0x60, 0xC0, 0x60, 0xC0,             // [ 83 | 115 | 0x73] s (0x73)
    0x40, 0xE0, 0x40, 0x40, 0x60,       // [ 84 | 116 | 0x74] t (0x74)
    0xA0, 0xA0, 0xA0, 0x60,             // [ 85 | 117 | 0x75] u (0x75)
    0xA0, 0xA0, 0xE0, 0x40,             // [ 86 | 118 | 0x76] v (0x76)
    0xA0, 0xE0, 0xE0, 0xE0,             // [ 87 | 119 | 0x77] w (0x77)
    0xA0, 0x40, 0x40, 0xA0,             // [ 88 | 120 | 0x78] x (0x78)
    0xA0, 0xA0, 0x60, 0x20, 0x40,       // [ 89 | 121 | 0x79] y (0x79)
    0xE0, 0x60, 0xC0, 0xE0,             // [ 90 | 122 | 0x7A] z (0x7A)
    0x60, 0x40, 0x80, 0x40, 0x60,       // [ 91 | 123 | 0x7B] braceleft (0x7B)
    0x80, 0x80, 0x00, 0x80, 0x80,       // [ 92 | 124 | 0x7C] bar (0x7C)
    0xC0, 0x40, 0x20, 0x40, 0xC0,       // [ 93 | 125 | 0x7D] braceright (0x7D)
    0x60, 0xC0,                         // [ 94 | 126 | 0x7E] asciitilde (0x7E)
    // Removed 34 codes to save space
    0x80, 0x00, 0x80, 0x80, 0x80,       // [ 95 | 127 | 0x7F] exclamdown (0xA1)
    0x40, 0xE0, 0x80, 0xE0, 0x40,       // [ 96 | 128 | 0x80] cent (0xA2)
    0x60, 0x40, 0xE0, 0x40, 0xE0,       // [ 97 | 129 | 0x81] sterling (0xA3)
    0xA0, 0x40, 0xE0, 0x40, 0xA0,       // [ 98 | 130 | 0x82] currency (0xA4)
    0xA0, 0xA0, 0x40, 0xE0, 0x40,       // [ 99 | 131 | 0x83] yen (0xA5)
    0x80, 0x80, 0x00, 0x80, 0x80,       // [100 | 132 | 0x84] brokenbar (0xA6)
    0x60, 0x40, 0xA0, 0x40, 0xC0,       // [101 | 133 | 0x85] section (0xA7)
    0xA0,                               // [102 | 134 | 0x86] dieresis (0xA8)
    0x60, 0x80, 0x60,                   // [103 | 135 | 0x87] copyright (0xA9)
    0x60, 0xA0, 0xE0, 0x00, 0xE0,       // [104 | 136 | 0x88] ordfeminine (0xAA)
    0x40, 0x80, 0x40,                   // [105 | 137 | 0x89] guillemotleft (0xAB)
    0xE0, 0x20,                         // [106 | 138 | 0x8A] logicalnot (0xAC)
    0xC0,                               // [107 | 139 | 0x8B] softhyphen (0xAD)
    0xC0, 0xC0, 0xA0,                   // [108 | 140 | 0x8C] registered (0xAE)
    0xE0,                               // [109 | 141 | 0x8D] macron (0xAF)
    0xC0, 0xC0, 0x00,                   // [110 | 142 | 0x8E] degree (0xB0)
    0x40, 0xE0, 0x40, 0x00, 0xE0,       // [111 | 143 | 0x8F] plusminus (0xB1)
    0xC0, 0x40, 0x60,                   // [112 | 144 | 0x90] twosuperior (0xB2)
    0xE0, 0x60, 0xE0,                   // [113 | 145 | 0x91] threesuperior (0xB3)
    0x40, 0x80,                         // [114 | 146 | 0x92] acute (0xB4)
    0xA0, 0xA0, 0xA0, 0xC0, 0x80,       // [115 | 147 | 0x93] mu (0xB5)
    0x60, 0xA0, 0x60, 0x60, 0x60,       // [116 | 148 | 0x94] paragraph (0xB6)
    0xE0, 0xE0, 0xE0,                   // [117 | 149 | 0x95] periodcentered (0xB7)
    0x40, 0x20, 0xC0,                   // [118 | 150 | 0x96] cedilla (0xB8)
    0x80, 0x80, 0x80,                   // [119 | 151 | 0x97] onesuperior (0xB9)
    0x40, 0xA0, 0x40, 0x00, 0xE0,       // [120 | 152 | 0x98] ordmasculine (0xBA)
    0x80, 0x40, 0x80,                   // [121 | 153 | 0x99] guillemotright (0xBB)
    0x80, 0x80, 0x00, 0x60, 0x20,       // [122 | 154 | 0x9A] onequarter (0xBC)
    0x80, 0x80, 0x00, 0xC0, 0x60,       // [123 | 155 | 0x9B] onehalf (0xBD)
    0xC0, 0xC0, 0x00, 0x60, 0x20,       // [124 | 156 | 0x9C] threequarters (0xBE)
    0x40, 0x00, 0x40, 0x80, 0xE0,       // [125 | 157 | 0x9D] questiondown (0xBF)
    0x40, 0x20, 0x40, 0xE0, 0xA0,       // [126 | 158 | 0x9E] Agrave (0xC0)
    0x40, 0x80, 0x40, 0xE0, 0xA0,       // [127 | 159 | 0x9F] Aacute (0xC1)
    0xE0, 0x00, 0x40, 0xE0, 0xA0,       // [128 | 160 | 0xA0] Acircumflex (0xC2)
    0x60, 0xC0, 0x40, 0xE0, 0xA0,       // [129 | 161 | 0xA1] Atilde (0xC3)
    0xA0, 0x40, 0xA0, 0xE0, 0xA0,       // [130 | 162 | 0xA2] Adieresis (0xC4)
    0xC0, 0xC0, 0xA0, 0xE0, 0xA0,       // [131 | 163 | 0xA3] Aring (0xC5)
    0x60, 0xC0, 0xE0, 0xC0, 0xE0,       // [132 | 164 | 0xA4] AE (0xC6)
    0x60, 0x80, 0x80, 0x60, 0x20, 0x40, // [133 | 165 | 0xA5] Ccedilla (0xC7)
    0x40, 0x20, 0xE0, 0xC0, 0xE0,       // [134 | 166 | 0xA6] Egrave (0xC8)
    0x40, 0x80, 0xE0, 0xC0, 0xE0,       // [135 | 167 | 0xA7] Eacute (0xC9)
    0xE0, 0x00, 0xE0, 0xC0, 0xE0,       // [136 | 168 | 0xA8] Ecircumflex (0xCA)
    0xA0, 0x00, 0xE0, 0xC0, 0xE0,       // [137 | 169 | 0xA9] Edieresis (0xCB)
    0x40, 0x20, 0xE0, 0x40, 0xE0,       // [138 | 170 | 0xAA] Igrave (0xCC)
    0x40, 0x80, 0xE0, 0x40, 0xE0,       // [139 | 171 | 0xAB] Iacute (0xCD)
    0xE0, 0x00, 0xE0, 0x40, 0xE0,       // [140 | 172 | 0xAC] Icircumflex (0xCE)
    0xA0, 0x00, 0xE0, 0x40, 0xE0,       // [141 | 173 | 0xAD] Idieresis (0xCF)
    0xC0, 0xA0, 0xE0, 0xA0, 0xC0,       // [142 | 174 | 0xAE] Eth (0xD0)
    0xC0, 0x60, 0xA0, 0xE0, 0xA0,       // [143 | 175 | 0xAF] Ntilde (0xD1)
    0x40, 0x20, 0xE0, 0xA0, 0xE0,       // [144 | 176 | 0xB0] Ograve (0xD2)
    0x40, 0x80, 0xE0, 0xA0, 0xE0,       // [145 | 177 | 0xB1] Oacute (0xD3)
    0xE0, 0x00, 0xE0, 0xA0, 0xE0,       // [146 | 178 | 0xB2] Ocircumflex (0xD4)
    0xC0, 0x60, 0xE0, 0xA0, 0xE0,       // [147 | 179 | 0xB3] Otilde (0xD5)
    0xA0, 0x00, 0xE0, 0xA0, 0xE0,       // [148 | 180 | 0xB4] Odieresis (0xD6)
    0xA0, 0x40, 0xA0,                   // [149 | 181 | 0xB5] multiply (0xD7)
    0x60, 0xA0, 0xE0, 0xA0, 0xC0,       // [150 | 182 | 0xB6] Oslash (0xD8)
    0x80, 0x40, 0xA0, 0xA0, 0xE0,       // [151 | 183 | 0xB7] Ugrave (0xD9)
    0x20, 0x40, 0xA0, 0xA0, 0xE0,       // [152 | 184 | 0xB8] Uacute (0xDA)
    0xE0, 0x00, 0xA0, 0xA0, 0xE0,       // [153 | 185 | 0xB9] Ucircumflex (0xDB)
    0xA0, 0x00, 0xA0, 0xA0, 0xE0,       // [154 | 186 | 0xBA] Udieresis (0xDC)
    0x20, 0x40, 0xA0, 0xE0, 0x40,       // [155 | 187 | 0xBB] Yacute (0xDD)
    0x80, 0xE0, 0xA0, 0xE0, 0x80,       // [156 | 188 | 0xBC] Thorn (0xDE)
    0x60, 0xA0, 0xC0, 0xA0, 0xC0, 0x80, // [157 | 189 | 0xBD] germandbls (0xDF)
    0x40, 0x20, 0x60, 0xA0, 0xE0,       // [158 | 190 | 0xBE] agrave (0xE0)
    0x40, 0x80, 0x60, 0xA0, 0xE0,       // [159 | 191 | 0xBF] aacute (0xE1)
    0xE0, 0x00, 0x60, 0xA0, 0xE0,       // [160 | 192 | 0xC0] acircumflex (0xE2)
    0x60, 0xC0, 0x60, 0xA0, 0xE0,       // [161 | 193 | 0xC1] atilde (0xE3)
    0xA0, 0x00, 0x60, 0xA0, 0xE0,       // [162 | 194 | 0xC2] adieresis (0xE4)
    0x60, 0x60, 0x60, 0xA0, 0xE0,       // [163 | 195 | 0xC3] aring (0xE5)
    0x60, 0xE0, 0xE0, 0xC0,             // [164 | 196 | 0xC4] ae (0xE6)
    0x60, 0x80, 0x60, 0x20, 0x40,       // [165 | 197 | 0xC5] ccedilla (0xE7)
    0x40, 0x20, 0x60, 0xE0, 0x60,       // [166 | 198 | 0xC6] egrave (0xE8)
    0x40, 0x80, 0x60, 0xE0, 0x60,       // [167 | 199 | 0xC7] eacute (0xE9)
    0xE0, 0x00, 0x60, 0xE0, 0x60,       // [168 | 200 | 0xC8] ecircumflex (0xEA)
    0xA0, 0x00, 0x60, 0xE0, 0x60,       // [169 | 201 | 0xC9] edieresis (0xEB)
    0x80, 0x40, 0x80, 0x80, 0x80,       // [170 | 202 | 0xCA] igrave (0xEC)
    0x40, 0x80, 0x40, 0x40, 0x40,       // [171 | 203 | 0xCB] iacute (0xED)
    0xE0, 0x00, 0x40, 0x40, 0x40,       // [172 | 204 | 0xCC] icircumflex (0xEE)
    0xA0, 0x00, 0x40, 0x40, 0x40,       // [173 | 205 | 0xCD] idieresis (0xEF)
    0x60, 0xC0, 0x60, 0xA0, 0x60,       // [174 | 206 | 0xCE] eth (0xF0)
    0xC0, 0x60, 0xC0, 0xA0, 0xA0,       // [175 | 207 | 0xCF] ntilde (0xF1)
    0x40, 0x20, 0x40, 0xA0, 0x40,       // [176 | 208 | 0xD0] ograve (0xF2)
    0x40, 0x80, 0x40, 0xA0, 0x40,       // [177 | 209 | 0xD1] oacute (0xF3)
    0xE0, 0x00, 0x40, 0xA0, 0x40,       // [178 | 210 | 0xD2] ocircumflex (0xF4)
    0xC0, 0x60, 0x40, 0xA0, 0x40,       // [179 | 211 | 0xD3] otilde (0xF5)
    0xA0, 0x00, 0x40, 0xA0, 0x40,       // [180 | 212 | 0xD4] odieresis (0xF6)
    0x40, 0x00, 0xE0, 0x00, 0x40,       // [181 | 213 | 0xD5] divide (0xF7)
    0x60, 0xE0, 0xA0, 0xC0,             // [182 | 214 | 0xD6] oslash (0xF8)
    0x80, 0x40, 0xA0, 0xA0, 0x60,       // [183 | 215 | 0xD7] ugrave (0xF9)
    0x20, 0x40, 0xA0, 0xA0, 0x60,       // [184 | 216 | 0xD8] uacute (0xFA)
    0xE0, 0x00, 0xA0, 0xA0, 0x60,       // [185 | 217 | 0xD9] ucircumflex (0xFB)
    0xA0, 0x00, 0xA0, 0xA0, 0x60,       // [186 | 218 | 0xDA] udieresis (0xFC)
    0x20, 0x40, 0xA0, 0x60, 0x20, 0x40, // [187 | 219 | 0xDB] yacute (0xFD)
    0x80, 0xC0, 0xA0, 0xC0, 0x80,       // [188 | 220 | 0xDC] thorn (0xFE)
    0xA0, 0x00, 0xA0, 0x60, 0x20, 0x40, // [189 | 221 | 0xDD] ydieresis (0xFF)
                                        // Some Icons
                                        // https://www.w3schools.com/charsets/ref_utf_basic_latin.asp
    0x60, 0xC0, 0xE0, 0xC0, 0x60,       // [190 | 222 | 0xDE] Euro € (0xC382AC)
    0x20, 0x78, 0xF8, 0x78, 0x20,       // [191 | 223 | 0xDF] Arrow left ← (0xE28690)
    0x20, 0x70, 0xF8, 0x70, 0x70,       // [192 | 224 | 0xE0] Arrow up ↑ (0xE28691)
    0x20, 0xF0, 0xF8, 0xF0, 0x20,       // [193 | 225 | 0xE1] Arrow right → (0xE28692)
    0x70, 0x70, 0xF8, 0x70, 0x20,       // [194 | 226 | 0xE2] Arrow down ↓ (0xE28693)
    0x20, 0x20, 0xF8, 0x70, 0x50,       // [195 | 227 | 0xE3] Star ★ (0XE29885)
    0xC0, 0xA0, 0x90, 0x90, 0xF0,       // [196 | 228 | 0xE4] File 📁 (0xF09F9381)
    0x50, 0xF8, 0xF8, 0x70, 0x20,       // [197 | 229 | 0xE5] Heart ♥ (0xE299A5)
    0x70, 0x70, 0xF8, 0x70, 0x20, 0xF8, // [198 | 230 | 0xE6] Download ↧ (0xE286A7)
    0x00, 0x38, 0xCC, 0xFC, 0x48,       // [199 | 231 | 0xE7] Car 🚗 (0xF09F9A97)
    0x50, 0x50, 0x20, 0x88, 0x70        // [200 | 232 | 0xE8] Smiley 😀 (0xF09F9880)
};

// {offset, width, height, advance cursor, x offset, y offset}
const GFXglyph PixelItGlyphs[] PROGMEM = {
    // [Index DEC without offset | Index ASCII | Index HEX] Description (ASCII CODE) */
    {0, 8, 1, 2, 0, -5},   // [  0 |  32 | 0x20] space (0x20)
    {1, 8, 5, 2, 0, -5},   // [  1 |  33 | 0x21] exclam (0x21)
    {6, 8, 2, 4, 0, -5},   // [  2 |  34 | 0x22] quotedbl (0x22)
    {8, 8, 5, 4, 0, -5},   // [  3 |  35 | 0x23] numbersign (0x23)
    {13, 8, 5, 4, 0, -5},  // [  4 |  36 | 0x24] dollar (0x24)
    {18, 8, 5, 4, 0, -5},  // [  5 |  37 | 0x25] percent (0x25)
    {23, 8, 5, 4, 0, -5},  // [  6 |  38 | 0x26] ampersand (0x26)
    {28, 8, 2, 2, 0, -5},  // [  7 |  39 | 0x27] quotesingle (0x27)
    {30, 8, 5, 3, 0, -5},  // [  8 |  40 | 0x28] parenleft (0x28)
    {35, 8, 5, 3, 0, -5},  // [  9 |  41 | 0x29] parenright (0x29)
    {40, 8, 3, 4, 0, -5},  // [ 10 |  42 | 0x2A] asterisk (0x2A)
    {43, 8, 3, 4, 0, -4},  // [ 11 |  43 | 0x2B] plus (0x2B)
    {46, 8, 2, 3, 0, -2},  // [ 12 |  44 | 0x2C] comma (0x2C)
    {48, 8, 1, 4, 0, -3},  // [ 13 |  45 | 0x2D] hyphen (0x2D)
    {49, 8, 1, 2, 0, -1},  // [ 14 |  46 | 0x2E] period (0x2E)
    {50, 8, 5, 4, 0, -5},  // [ 15 |  47 | 0x2F] slash (0x2F)
    {55, 8, 5, 4, 0, -5},  // [ 16 |  48 | 0x30] zero (0x30)
    {60, 8, 5, 4, 0, -5},  // [ 17 |  49 | 0x31] one (0x31)
    {65, 8, 5, 4, 0, -5},  // [ 18 |  50 | 0x32] two (0x32)
    {70, 8, 5, 4, 0, -5},  // [ 19 |  51 | 0x33] three (0x33)
    {75, 8, 5, 4, 0, -5},  // [ 20 |  52 | 0x34] four (0x34)
    {80, 8, 5, 4, 0, -5},  // [ 21 |  53 | 0x35] five (0x35)
    {85, 8, 5, 4, 0, -5},  // [ 22 |  54 | 0x36] six (0x36)
    {90, 8, 5, 4, 0, -5},  // [ 23 |  55 | 0x37] seven (0x37)
    {95, 8, 5, 4, 0, -5},  // [ 24 |  56 | 0x38] eight (0x38)
    {100, 8, 5, 4, 0, -5}, // [ 25 |  57 | 0x39] nine (0x39)
    {105, 8, 3, 2, 0, -4}, // [ 26 |  58 | 0x3A] colon (0x3A)
    {108, 8, 4, 3, 0, -4}, // [ 27 |  59 | 0x3B] semicolon (0x3B)
    {112, 8, 5, 4, 0, -5}, // [ 28 |  60 | 0x3C] less (0x3C)
    {117, 8, 3, 4, 0, -4}, // [ 29 |  61 | 0x3D] equal (0x3D)
    {120, 8, 5, 4, 0, -5}, // [ 30 |  62 | 0x3E] greater (0x3E)
    {125, 8, 5, 4, 0, -5}, // [ 31 |  63 | 0x3F] question (0x3F)
    {130, 8, 5, 4, 0, -5}, // [ 32 |  64 | 0x40] at (0x40)
    {135, 8, 5, 4, 0, -5}, // [ 33 |  65 | 0x41] A (0x41)
    {140, 8, 5, 4, 0, -5}, // [ 34 |  66 | 0x42] B (0x42)
    {145, 8, 5, 4, 0, -5}, // [ 35 |  67 | 0x43] C (0x43)
    {150, 8, 5, 4, 0, -5}, // [ 36 |  68 | 0x44] D (0x44)
    {155, 8, 5, 4, 0, -5}, // [ 37 |  69 | 0x45] E (0x45)
    {160, 8, 5, 4, 0, -5}, // [ 38 |  70 | 0x46] F (0x46)
    {165, 8, 5, 4, 0, -5}, // [ 39 |  71 | 0x47] G (0x47)
    {170, 8, 5, 4, 0, -5}, // [ 40 |  72 | 0x48] H (0x48)
    {175, 8, 5, 2, 0, -5}, // [ 41 |  73 | 0x49] I (0x49)
    {180, 8, 5, 4, 0, -5}, // [ 42 |  74 | 0x4A] J (0x4A)
    {185, 8, 5, 4, 0, -5}, // [ 43 |  75 | 0x4B] K (0x4B)
    {190, 8, 5, 4, 0, -5}, // [ 44 |  76 | 0x4C] L (0x4C)
    {195, 8, 5, 6, 0, -5}, // [ 45 |  77 | 0x4D] M (0x4D)
    {200, 8, 5, 5, 0, -5}, // [ 46 |  78 | 0x4E] N (0x4E)
    {205, 8, 5, 4, 0, -5}, // [ 47 |  79 | 0x4F] O (0x4F)
    {210, 8, 5, 4, 0, -5}, // [ 48 |  80 | 0x50] P (0x50)
    {215, 8, 5, 5, 0, -5}, // [ 49 |  81 | 0x51] Q (0x51)
    {220, 8, 5, 4, 0, -5}, // [ 50 |  82 | 0x52] R (0x52)
    {225, 8, 5, 4, 0, -5}, // [ 51 |  83 | 0x53] S (0x53)
    {230, 8, 5, 4, 0, -5}, // [ 52 |  84 | 0x54] T (0x54)
    {235, 8, 5, 4, 0, -5}, // [ 53 |  85 | 0x55] U (0x55)
    {240, 8, 5, 4, 0, -5}, // [ 54 |  86 | 0x56] V (0x56)
    {245, 8, 5, 6, 0, -5}, // [ 55 |  87 | 0x57] W (0x57)
    {250, 8, 5, 4, 0, -5}, // [ 56 |  88 | 0x58] X (0x58)
    {255, 8, 5, 4, 0, -5}, // [ 57 |  89 | 0x59] Y (0x59)
    {260, 8, 5, 4, 0, -5}, // [ 58 |  90 | 0x5A] Z (0x5A)
    {265, 8, 5, 4, 0, -5}, // [ 59 |  91 | 0x5B] bracketleft (0x5B)
    {270, 8, 3, 4, 0, -4}, // [ 60 |  92 | 0x5C] backslash (0x5C)
    {273, 8, 5, 4, 0, -5}, // [ 61 |  93 | 0x5D] bracketright (0x5D)
    {278, 8, 2, 4, 0, -5}, // [ 62 |  94 | 0x5E] asciicircum (0x5E)
    {280, 8, 1, 4, 0, -1}, // [ 63 |  95 | 0x5F] underscore (0x5F)
    {281, 8, 2, 3, 0, -5}, // [ 64 |  96 | 0x60] grave (0x60)
    {283, 8, 4, 4, 0, -4}, // [ 65 |  97 | 0x61] a (0x61)
    {287, 8, 5, 4, 0, -5}, // [ 66 |  98 | 0x62] b (0x62)
    {292, 8, 4, 4, 0, -4}, // [ 67 |  99 | 0x63] c (0x63)
    {296, 8, 5, 4, 0, -5}, // [ 68 | 100 | 0x64] d (0x64)
    {301, 8, 4, 4, 0, -4}, // [ 69 | 101 | 0x65] e (0x65)
    {305, 8, 5, 4, 0, -5}, // [ 70 | 102 | 0x66] f (0x66)
    {310, 8, 5, 4, 0, -4}, // [ 71 | 103 | 0x67] g (0x67)
    {315, 8, 5, 4, 0, -5}, // [ 72 | 104 | 0x68] h (0x68)
    {320, 8, 5, 2, 0, -5}, // [ 73 | 105 | 0x69] i (0x69)
    {325, 8, 6, 4, 0, -5}, // [ 74 | 106 | 0x6A] j (0x6A)
    {331, 8, 5, 4, 0, -5}, // [ 75 | 107 | 0x6B] k (0x6B)
    {336, 8, 5, 4, 0, -5}, // [ 76 | 108 | 0x6C] l (0x6C)
    {341, 8, 4, 4, 0, -4}, // [ 77 | 109 | 0x6D] m (0x6D)
    {345, 8, 4, 4, 0, -4}, // [ 78 | 110 | 0x6E] n (0x6E)
    {349, 8, 4, 4, 0, -4}, // [ 79 | 111 | 0x6F] o (0x6F)
    {353, 8, 5, 4, 0, -4}, // [ 80 | 112 | 0x70] p (0x70)
    {358, 8, 5, 4, 0, -4}, // [ 81 | 113 | 0x71] q (0x71)
    {363, 8, 4, 4, 0, -4}, // [ 82 | 114 | 0x72] r (0x72)
    {367, 8, 4, 4, 0, -4}, // [ 83 | 115 | 0x73] s (0x73)
    {371, 8, 5, 4, 0, -5}, // [ 84 | 116 | 0x74] t (0x74)
    {376, 8, 4, 4, 0, -4}, // [ 85 | 117 | 0x75] u (0x75)
    {380, 8, 4, 4, 0, -4}, // [ 86 | 118 | 0x76] v (0x76)
    {384, 8, 4, 4, 0, -4}, // [ 87 | 119 | 0x77] w (0x77)
    {388, 8, 4, 4, 0, -4}, // [ 88 | 120 | 0x78] x (0x78)
    {392, 8, 5, 4, 0, -4}, // [ 89 | 121 | 0x79] y (0x79)
    {397, 8, 4, 4, 0, -4}, // [ 90 | 122 | 0x7A] z (0x7A)
    {401, 8, 5, 4, 0, -5}, // [ 91 | 123 | 0x7B] braceleft (0x7B)
    {406, 8, 5, 2, 0, -5}, // [ 92 | 124 | 0x7C] bar (0x7C)
    {411, 8, 5, 4, 0, -5}, // [ 93 | 125 | 0x7D] braceright (0x7D)
    {416, 8, 2, 4, 0, -5}, // [ 94 | 126 | 0x7E] asciitilde (0x7E)
                           // Removed 34 codes to save space
    {418, 8, 5, 2, 0, -5}, // [ 95 | 127 | 0x7F] exclamdown (0xA1)
    {423, 8, 5, 4, 0, -5}, // [ 96 | 128 | 0x80] cent (0xA2)
    {428, 8, 5, 4, 0, -5}, // [ 97 | 129 | 0x81] sterling (0xA3)
    {433, 8, 5, 4, 0, -5}, // [ 98 | 130 | 0x82] currency (0xA4)
    {438, 8, 5, 4, 0, -5}, // [ 99 | 131 | 0x83] yen (0xA5)
    {443, 8, 5, 2, 0, -5}, // [100 | 132 | 0x84] brokenbar (0xA6)
    {448, 8, 5, 4, 0, -5}, // [101 | 133 | 0x85] section (0xA7)
    {453, 8, 1, 4, 0, -5}, // [102 | 134 | 0x86] dieresis (0xA8)
    {454, 8, 3, 4, 0, -5}, // [103 | 135 | 0x87] copyright (0xA9)
    {457, 8, 5, 4, 0, -5}, // [104 | 136 | 0x88] ordfeminine (0xAA)
    {462, 8, 3, 3, 0, -5}, // [105 | 137 | 0x89] guillemotleft (0xAB)
    {465, 8, 2, 4, 0, -4}, // [106 | 138 | 0x8A] logicalnot (0xAC)
    {467, 8, 1, 3, 0, -3}, // [107 | 139 | 0x8B] softhyphen (0xAD)
    {468, 8, 3, 4, 0, -5}, // [108 | 140 | 0x8C] registered (0xAE)
    {471, 8, 1, 4, 0, -5}, // [109 | 141 | 0x8D] macron (0xAF)
    {472, 8, 3, 4, 0, -5}, // [110 | 142 | 0x8E] degree (0xB0)
    {475, 8, 5, 4, 0, -5}, // [111 | 143 | 0x8F] plusminus (0xB1)
    {480, 8, 3, 4, 0, -5}, // [112 | 144 | 0x90] twosuperior (0xB2)
    {483, 8, 3, 4, 0, -5}, // [113 | 145 | 0x91] threesuperior (0xB3)
    {486, 8, 2, 3, 0, -5}, // [114 | 146 | 0x92] acute (0xB4)
    {488, 8, 5, 4, 0, -5}, // [115 | 147 | 0x93] mu (0xB5)
    {493, 8, 5, 4, 0, -5}, // [116 | 148 | 0x94] paragraph (0xB6)
    {498, 8, 3, 4, 0, -4}, // [117 | 149 | 0x95] periodcentered (0xB7)
    {501, 8, 3, 4, 0, -3}, // [118 | 150 | 0x96] cedilla (0xB8)
    {504, 8, 3, 2, 0, -5}, // [119 | 151 | 0x97] onesuperior (0xB9)
    {507, 8, 5, 4, 0, -5}, // [120 | 152 | 0x98] ordmasculine (0xBA)
    {512, 8, 3, 3, 0, -5}, // [121 | 153 | 0x99] guillemotright (0xBB)
    {515, 8, 5, 4, 0, -5}, // [122 | 154 | 0x9A] onequarter (0xBC)
    {520, 8, 5, 4, 0, -5}, // [123 | 155 | 0x9B] onehalf (0xBD)
    {525, 8, 5, 4, 0, -5}, // [124 | 156 | 0x9C] threequarters (0xBE)
    {530, 8, 5, 4, 0, -5}, // [125 | 157 | 0x9D] questiondown (0xBF)
    {535, 8, 5, 4, 0, -5}, // [126 | 158 | 0x9E] Agrave (0xC0)
    {540, 8, 5, 4, 0, -5}, // [127 | 159 | 0x9F] Aacute (0xC1)
    {545, 8, 5, 4, 0, -5}, // [128 | 160 | 0xA0] Acircumflex (0xC2)
    {550, 8, 5, 4, 0, -5}, // [129 | 161 | 0xA1] Atilde (0xC3)
    {555, 8, 5, 4, 0, -5}, // [130 | 162 | 0xA2] Adieresis (0xC4)
    {560, 8, 5, 4, 0, -5}, // [131 | 163 | 0xA3] Aring (0xC5)
    {565, 8, 5, 4, 0, -5}, // [132 | 164 | 0xA4] AE (0xC6)
    {570, 8, 6, 4, 0, -5}, // [133 | 165 | 0xA5] Ccedilla (0xC7)
    {576, 8, 5, 4, 0, -5}, // [134 | 166 | 0xA6] Egrave (0xC8)
    {581, 8, 5, 4, 0, -5}, // [135 | 167 | 0xA7] Eacute (0xC9)
    {586, 8, 5, 4, 0, -5}, // [136 | 168 | 0xA8] Ecircumflex (0xCA)
    {591, 8, 5, 4, 0, -5}, // [137 | 169 | 0xA9] Edieresis (0xCB)
    {596, 8, 5, 4, 0, -5}, // [138 | 170 | 0xAA] Igrave (0xCC)
    {601, 8, 5, 4, 0, -5}, // [139 | 171 | 0xAB] Iacute (0xCD)
    {606, 8, 5, 4, 0, -5}, // [140 | 172 | 0xAC] Icircumflex (0xCE)
    {611, 8, 5, 4, 0, -5}, // [141 | 173 | 0xAD] Idieresis (0xCF)
    {616, 8, 5, 4, 0, -5}, // [142 | 174 | 0xAE] Eth (0xD0)
    {621, 8, 5, 4, 0, -5}, // [143 | 175 | 0xAF] Ntilde (0xD1)
    {626, 8, 5, 4, 0, -5}, // [144 | 176 | 0xB0] Ograve (0xD2)
    {631, 8, 5, 4, 0, -5}, // [145 | 177 | 0xB1] Oacute (0xD3)
    {636, 8, 5, 4, 0, -5}, // [146 | 178 | 0xB2] Ocircumflex (0xD4)
    {641, 8, 5, 4, 0, -5}, // [147 | 179 | 0xB3] Otilde (0xD5)
    {646, 8, 5, 4, 0, -5}, // [148 | 180 | 0xB4] Odieresis (0xD6)
    {651, 8, 3, 4, 0, -4}, // [149 | 181 | 0xB5] multiply (0xD7)
    {654, 8, 5, 4, 0, -5}, // [150 | 182 | 0xB6] Oslash (0xD8)
    {659, 8, 5, 4, 0, -5}, // [151 | 183 | 0xB7] Ugrave (0xD9)
    {664, 8, 5, 4, 0, -5}, // [152 | 184 | 0xB8] Uacute (0xDA)
    {669, 8, 5, 4, 0, -5}, // [153 | 185 | 0xB9] Ucircumflex (0xDB)
    {674, 8, 5, 4, 0, -5}, // [154 | 186 | 0xBA] Udieresis (0xDC)
    {679, 8, 5, 4, 0, -5}, // [155 | 187 | 0xBB] Yacute (0xDD)
    {684, 8, 5, 4, 0, -5}, // [156 | 188 | 0xBC] Thorn (0xDE)
    {689, 8, 6, 4, 0, -5}, // [157 | 189 | 0xBD] germandbls (0xDF)
    {695, 8, 5, 4, 0, -5}, // [158 | 190 | 0xBE] agrave (0xE0)
    {700, 8, 5, 4, 0, -5}, // [159 | 191 | 0xBF] aacute (0xE1)
    {705, 8, 5, 4, 0, -5}, // [160 | 192 | 0xC0] acircumflex (0xE2)
    {710, 8, 5, 4, 0, -5}, // [161 | 193 | 0xC1] atilde (0xE3)
    {715, 8, 5, 4, 0, -5}, // [162 | 194 | 0xC2] adieresis (0xE4)
    {720, 8, 5, 4, 0, -5}, // [163 | 195 | 0xC3] aring (0xE5)
    {725, 8, 4, 4, 0, -4}, // [164 | 196 | 0xC4] ae (0xE6)
    {729, 8, 5, 4, 0, -4}, // [165 | 197 | 0xC5] ccedilla (0xE7)
    {734, 8, 5, 4, 0, -5}, // [166 | 198 | 0xC6] egrave (0xE8)
    {739, 8, 5, 4, 0, -5}, // [167 | 199 | 0xC7] eacute (0xE9)
    {744, 8, 5, 4, 0, -5}, // [168 | 200 | 0xC8] ecircumflex (0xEA)
    {749, 8, 5, 4, 0, -5}, // [169 | 201 | 0xC9] edieresis (0xEB)
    {754, 8, 5, 3, 0, -5}, // [170 | 202 | 0xCA] igrave (0xEC)
    {759, 8, 5, 3, 0, -5}, // [171 | 203 | 0xCB] iacute (0xED)
    {764, 8, 5, 4, 0, -5}, // [172 | 204 | 0xCC] icircumflex (0xEE)
    {769, 8, 5, 4, 0, -5}, // [173 | 205 | 0xCD] idieresis (0xEF)
    {774, 8, 5, 4, 0, -5}, // [174 | 206 | 0xCE] eth (0xF0)
    {779, 8, 5, 4, 0, -5}, // [175 | 207 | 0xCF] ntilde (0xF1)
    {784, 8, 5, 4, 0, -5}, // [176 | 208 | 0xD0] ograve (0xF2)
    {789, 8, 5, 4, 0, -5}, // [177 | 209 | 0xD1] oacute (0xF3)
    {794, 8, 5, 4, 0, -5}, // [178 | 210 | 0xD2] ocircumflex (0xF4)
    {799, 8, 5, 4, 0, -5}, // [179 | 211 | 0xD3] otilde (0xF5)
    {804, 8, 5, 4, 0, -5}, // [180 | 212 | 0xD4] odieresis (0xF6)
    {809, 8, 5, 4, 0, -5}, // [181 | 213 | 0xD5] divide (0xF7)
    {814, 8, 4, 4, 0, -4}, // [182 | 214 | 0xD6] oslash (0xF8)
    {818, 8, 5, 4, 0, -5}, // [183 | 215 | 0xD7] ugrave (0xF9)
    {823, 8, 5, 4, 0, -5}, // [184 | 216 | 0xD8] uacute (0xFA)
    {828, 8, 5, 4, 0, -5}, // [185 | 217 | 0xD9] ucircumflex (0xFB)
    {833, 8, 5, 4, 0, -5}, // [186 | 218 | 0xDA] udieresis (0xFC)
    {838, 8, 6, 4, 0, -5}, // [187 | 219 | 0xDB] yacute (0xFD)
    {844, 8, 5, 4, 0, -4}, // [188 | 220 | 0xDC] thorn (0xFE)
    {849, 8, 6, 4, 0, -5}, // [189 | 221 | 0xDD] ydieresis (0xFF)
    // Some Icons
    // https://www.w3schools.com/charsets/ref_utf_basic_latin.asp
    {855, 8, 5, 4, 0, -5}, // [190 | 222 | 0xDE] Euro € (0xC382AC)
    {860, 8, 5, 6, 0, -5}, // [191 | 223 | 0xDF] Arrow left ← (0xE28690)
    {865, 8, 5, 6, 0, -5}, // [192 | 224 | 0xE0] Arrow up ↑ (0xE28691)
    {870, 8, 5, 6, 0, -5}, // [193 | 225 | 0xE1] Arrow right → (0xE28692)
    {875, 8, 5, 6, 0, -5}, // [194 | 226 | 0xE2] Arrow down ↓ (0xE28693)
    {880, 8, 5, 6, 0, -5}, // [195 | 227 | 0xE3] Star ★ (0XE29885)
    {885, 8, 5, 5, 0, -5}, // [196 | 228 | 0xE4] File 📁 (0xF09F9381)
    {890, 8, 5, 6, 0, -5}, // [197 | 229 | 0xE5] Heart ♥ (0xE299A5)
    {895, 8, 6, 6, 0, -5}, // [198 | 230 | 0xE6] Download ↧ (0xE286A7)
    {901, 8, 5, 7, 0, -5}, // [199 | 231 | 0xE7] Car 🚗 (0xF09F9A97)
    {906, 8, 5, 6, 0, -5}  // [200 | 232 | 0xE8] Smiley 😀 (0xF09F9880)
};

const GFXfont PixelItFont PROGMEM = {(uint8_t *)PixelItBitmaps, (GFXglyph *)PixelItGlyphs, 0x20, 0xE8, 6};
