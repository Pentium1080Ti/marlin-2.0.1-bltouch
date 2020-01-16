#pragma once

#define CUSTOM_BOOTSCREEN_BMPWIDTH  64

const unsigned char custom_start_bmp[] PROGMEM = {
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111, // ████████████████▌███████████████
  B11111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111, // ████████████████▌███████████████
  B11111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111, // ████████████████▌███████████████
  B11111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111, // ████████████████▌███████████████
  B11111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111, // ████████████████▌███████████████
  B11111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111, // ████████████████▌███████████████
  B11111111,B11111111,B11111111,B11111000,B00011111,B11111111,B11111111,B11111111, // ██████████████▌··▐██████████████
  B11111111,B11111111,B11111111,B11000000,B00000111,B11111111,B11111111,B11111111, // █████████████·····▐█████████████
  B11111111,B11111111,B11111111,B10000000,B00100011,B11111111,B11111111,B11111111, // ████████████▌····▌·█████████████
  B11111111,B11111111,B11111111,B00011000,B00011001,B11111111,B11111111,B11111111, // ████████████·▐▌··▐▌▐████████████
  B11111111,B11111111,B11111110,B00110011,B10011100,B11111111,B11111111,B11111111, // ███████████▌·█·█▌▐█·████████████
  B11111111,B11111111,B11111110,B01110011,B10011100,B01111111,B11111111,B11111111, // ███████████▌▐█·█▌▐█·▐███████████
  B11111111,B11111111,B11111100,B11111000,B00000110,B01111111,B11111111,B11111111, // ███████████·██▌···▐▌▐███████████
  B11111111,B11111111,B11111100,B11111000,B00100110,B01111111,B11111111,B11111111, // ███████████·██▌··▌▐▌▐███████████
  B11111111,B11111111,B11111100,B00001111,B11100110,B00111111,B11111111,B11111111, // ███████████···███▌▐▌·███████████
  B11111111,B11111111,B11111100,B01000111,B11111100,B00111111,B11111111,B11111111, // ███████████·▐·▐████··███████████
  B11111111,B11111111,B11111100,B00000000,B00000000,B00111111,B11111111,B11111111, // ███████████··········███████████
  B11111111,B11111111,B11111100,B00000000,B00000000,B00111111,B11111111,B11111111, // ███████████··········███████████
  B11111111,B11111111,B11111110,B00000000,B00000000,B01111111,B11111111,B11111111, // ███████████▌········▐███████████
  B11111111,B11111111,B11111110,B00000000,B00000000,B11111111,B11111111,B11111111, // ███████████▌········████████████
  B11111111,B11111111,B11111100,B00111001,B00100100,B01111111,B11111111,B11111111, // ███████████··█▌▐·▌▐·▐███████████
  B11111111,B11111111,B11111000,B11110000,B01101111,B00011111,B11111111,B11111111, // ██████████▌·██··▐▌██·▐██████████
  B11111111,B11111111,B11110000,B11110010,B11011111,B10001111,B11111111,B11111111, // ██████████··██·▌█▐██▌·██████████
  B11111111,B11111111,B11100000,B11100011,B00111011,B00000111,B11111111,B11111111, // █████████▌··█▌·█·█▌█··▐█████████
  B11111111,B11111111,B11000000,B00001100,B01111011,B01100111,B11111111,B11111111, // █████████·····█·▐█▌█▐▌▐█████████
  B11111111,B11111111,B10001111,B11100001,B11111111,B01000011,B11111111,B11111111, // ████████▌·███▌·▐████▐··█████████
  B11111111,B11111111,B10000000,B00001111,B11111111,B01001001,B11111111,B11111111, // ████████▌·····██████▐·▌▐████████
  B11111111,B11111111,B00111000,B10111111,B11111111,B01001001,B11111111,B11111111, // ████████·█▌·▌███████▐·▌▐████████
  B11111111,B11111111,B00111111,B10111101,B11111111,B01100000,B11111111,B11111111, // ████████·███▌██▐████▐▌··████████
  B11111111,B11111110,B01111111,B10011111,B11111111,B01110000,B11111111,B11111111, // ███████▌▐███▌▐██████▐█··████████
  B11111111,B11111110,B01111001,B10011111,B11111111,B00100100,B11111111,B11111111, // ███████▌▐█▌▐▌▐██████·▌▐·████████
  B11111111,B11111110,B01111111,B10000011,B11111111,B00101100,B11111111,B11111111, // ███████▌▐███▌··█████·▌█·████████
  B11111111,B11111110,B01111110,B00000000,B01111101,B10101110,B01111111,B11111111, // ███████▌▐██▌····▐██▐▌▌█▌▐███████
  B11111111,B11111110,B01111100,B11111111,B00011101,B10100110,B01111111,B11111111, // ███████▌▐██·████·▐█▐▌▌▐▌▐███████
  B11111111,B11111110,B01111011,B10100011,B11001111,B10110100,B01111111,B11111111, // ███████▌▐█▌█▌▌·██·██▌█▐·▐███████
  B11111111,B11111110,B01110010,B00101000,B11100111,B10010000,B01111111,B11111111, // ███████▌▐█·▌·▌▌·█▌▐█▌▐··▐███████
  B11111111,B11111110,B00110100,B10001111,B00110111,B00010000,B11111111,B11111111, // ███████▌·█▐·▌·██·█▐█·▐··████████
  B11111111,B11111110,B00101001,B11001111,B10111000,B01001000,B11111111,B11111111, // ███████▌·▌▌▐█·██▌█▌·▐·▌·████████
  B11111111,B11111110,B01101011,B11111111,B10011001,B11101100,B11111111,B11111111, // ███████▌▐▌▌█████▌▐▌▐█▌█·████████
  B11111111,B11111111,B00101011,B11111111,B00111001,B11100100,B11111111,B11111111, // ████████·▌▌█████·█▌▐█▌▐·████████
  B11111111,B11111111,B00100011,B11111111,B00001001,B11110001,B11111111,B11111111, // ████████·▌·█████··▌▐██·▐████████
  B11111111,B11111111,B00000000,B01111111,B10001001,B00111001,B11111111,B11111111, // ████████····▐███▌·▌▐·█▌▐████████
  B11111111,B11111111,B10000100,B01111111,B11001001,B11110001,B11111111,B11111111, // ████████▌·▐·▐████·▌▐██·▐████████
  B11111111,B11111111,B10000000,B11111111,B11001011,B11110011,B11111111,B11111111, // ████████▌···█████·▌███·█████████
  B11111111,B11111111,B11000000,B11111001,B10010011,B11100111,B11111111,B11111111, // █████████···██▌▐▌▐·██▌▐█████████
  B11111111,B11111111,B11100000,B01111000,B00110111,B11001111,B11111111,B11111111, // █████████▌··▐█▌··█▐██·██████████
  B11111111,B11111111,B11110000,B00000010,B01101111,B00011111,B11111111,B11111111, // ██████████·····▌▐▌██·▐██████████
  B11111111,B11111111,B11111000,B00000011,B00011000,B00111111,B11111111,B11111111, // ██████████▌····█·▐▌··███████████
  B11111111,B11111111,B11111100,B00000000,B01111000,B01111111,B11111111,B11111111, // ███████████·····▐█▌·▐███████████
  B11111111,B11111111,B11111111,B00000000,B00000001,B11111111,B11111111,B11111111, // ████████████·······▐████████████
  B11111111,B11111111,B11111111,B11100000,B00000111,B11111111,B11111111,B11111111, // █████████████▌····▐█████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111, // ████████████████████████████████
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111  // ████████████████████████████████
};
