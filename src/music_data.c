#pragma bank 1

#include <gbdk/platform.h>

#include "global.h"
#include "music.h"

BANKREF(music_data)

const unsigned char title_music_lead[] =
{
    18,E5,2,BRK,18,A4,2,BRK,18,E5,2,BRK,18,A4,2,BRK,18,F5,2,BRK,18,A4,2,BRK,18,E5,2,BRK,18,A4,2,BRK,
    18,D5,2,BRK,18,G4,2,BRK,18,D5,2,BRK,18,G4,2,BRK,18,E5,2,BRK,18,G4,2,BRK,18,D5,2,BRK,18,G4,2,BRK,
    18,C5,2,BRK,18,F4,2,BRK,18,C5,2,BRK,18,F4,2,BRK,18,D5,2,BRK,18,F4,2,BRK,18,C5,2,BRK,18,F4,2,BRK,
    18,B4,2,BRK,18,E4,2,BRK,18,B4,2,BRK,18,E4,2,BRK,18,C5,2,BRK,18,E4,2,BRK,18,D5,2,BRK,18,E4,2,BRK,
    0
};

const unsigned char title_music_bass[] =
{
    158,A3,2,BRK,158,G3,2,BRK,158,F3,2,BRK,158,E3,2,BRK,
    0
};

const unsigned char title_music_rythm[] =
{

    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,78,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,58,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,18,0x00,
    0
};

const unsigned char game_over_music_lead[] =
{
    18,A4,2,BRK,18,B4,2,BRK,18,C5,2,BRK,18,A4,2,BRK,18,D5,2,BRK,18,C5,2,BRK,18,B4,2,BRK,18,C5,2,BRK,158,B4,2,BRK,
    18,G4,2,BRK,18,A4,2,BRK,18,B4,2,BRK,18,G4,2,BRK,18,C5,2,BRK,18,B4,2,BRK,18,A4,2,BRK,18,G4,2,BRK,158,A4,2,BRK,
    0
};


const unsigned char game_over_music_bass[] =
{
    58,A3,2,BRK,18,A3,2,BRK,58,D3,2,BRK,18,D3,2,BRK,58,G3,2,BRK,18,G3,2,BRK,58,G3,2,BRK,18,G3,2,BRK,
    58,E3,2,BRK,18,E3,2,BRK,58,C3,2,BRK,18,C3,2,BRK,58,A3,2,BRK,18,A3,2,BRK,58,A3,2,BRK,18,A3,2,BRK,
    0
};

const unsigned char game_over_music_rythm[] =
{
    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,78,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,78,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,78,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,38,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,38,0x00,
    0
};

const unsigned char boss_music_lead[] =
{
    166,A4,2,BRK,10,A4,2,BRK,10,B4,2,BRK,
    166,C5,2,BRK,10,D5,2,BRK,10,C5,2,BRK,
    70,B4,2,BRK,22,A4,2,BRK,46,G4,2,BRK,22,A4,2,BRK,22,B4,2,BRK,
    190,A4,2,BRK,
    0
};

const unsigned char boss_music_bass[] =
{
    10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,
    10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,
    10,F3,2,BRK,10,F3,2,BRK,10,C3,2,BRK,10,E3,2,BRK,10,F3,2,BRK,10,F3,2,BRK,10,C3,2,BRK,10,E3,2,BRK,
    10,F3,2,BRK,10,F3,2,BRK,10,C3,2,BRK,10,E3,2,BRK,10,F3,2,BRK,10,F3,2,BRK,10,C3,2,BRK,10,E3,2,BRK,
    10,G3,2,BRK,10,G3,2,BRK,10,D3,2,BRK,10,F3,2,BRK,10,G3,2,BRK,10,G3,2,BRK,10,D3,2,BRK,10,F3,2,BRK,
    10,E3,2,BRK,10,E3,2,BRK,10,B3,2,BRK,10,G3,2,BRK,10,E3,2,BRK,10,E3,2,BRK,10,B3,2,BRK,10,G3,2,BRK,
    10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,
    10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,10,A3,2,BRK,10,A3,2,BRK,10,E3,2,BRK,10,G3,2,BRK,
    0
};

const unsigned char boss_music_rythm[] =
{
    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,22,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,10,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,22,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,10,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,10,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,10,0x00,
    0
};

const unsigned char level1_music_lead[] =
{
    //A
    14,A4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,62,C5,2,BRK,14,A4,2,BRK,
    14,B4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,62,B4,2,BRK,14,B4,2,BRK,
    30,F5,2,BRK,30,F5,2,BRK,14,F5,2,BRK,14,F5,2,BRK,14,G5,2,BRK,
    62,E5,2,BRK,14,D5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,14,C5,2,BRK,14,B4,2,BRK,
    14,A4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,62,C5,2,BRK,14,A4,2,BRK,
    14,B4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,62,B4,2,BRK,14,B4,2,BRK,
    30,A4,2,BRK,30,A4,2,BRK,14,A4,2,BRK,14,A4,2,BRK,14,C5,2,BRK,
    62,B4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,14,B4,2,BRK,14,A4,2,BRK,
    //B
    16,BRK,14,F5,2,BRK,14,F5,2,BRK,14,E5,2,BRK,14,F5,2,BRK,14,G5,2,BRK,14,F5,2,BRK,14,E5,2,BRK,
    126,D5,2,BRK,
    16,BRK,14,E5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,14,E5,2,BRK,14,F5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,
    126,C5,2,BRK,
    14,B4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,62,D5,2,BRK,14,B4,2,BRK,
    14,C5,2,BRK,14,C5,2,BRK,14,D5,2,BRK,62,E5,2,BRK,14,E5,2,BRK,
    30,F5,2,BRK,30,F5,2,BRK,14,F5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,
    62,E5,2,BRK,14,D5,2,BRK,14,E5,2,BRK,14,F5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,
    //A
    14,A4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,62,C5,2,BRK,14,A4,2,BRK,
    14,B4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,62,B4,2,BRK,14,B4,2,BRK,
    30,F5,2,BRK,30,F5,2,BRK,14,F5,2,BRK,14,F5,2,BRK,14,G5,2,BRK,
    62,E5,2,BRK,14,D5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,14,C5,2,BRK,14,B4,2,BRK,
    14,A4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,62,C5,2,BRK,14,A4,2,BRK,
    14,B4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,62,B4,2,BRK,14,B4,2,BRK,
    30,A4,2,BRK,30,A4,2,BRK,14,A4,2,BRK,14,A4,2,BRK,14,C5,2,BRK,
    62,B4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,14,B4,2,BRK,14,A4,2,BRK,
    //C
    16,BRK,14,A4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,14,D5,2,BRK,14,C5,2,BRK,14,B4,2,BRK,14,A4,2,BRK,
    126,B4,2,BRK,
    16,BRK,14,G4,2,BRK,14,A4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,14,B4,2,BRK,14,A4,2,BRK,14,G4,2,BRK,
    126,A4,2,BRK,
    16,BRK,14,E5,2,BRK,14,C5,2,BRK,14,A4,2,BRK,14,B4,2,BRK,14,C5,2,BRK,14,D5,2,BRK,14,E5,2,BRK,
    126,D5,2,BRK,
    16,BRK,14,C5,2,BRK,14,D5,2,BRK,14,E5,2,BRK,14,D5,2,BRK,14,C5,2,BRK,14,B4,2,BRK,14,G4,2,BRK,
    126,A4,2,BRK,
    0
};

const unsigned char level1_music_bass[] =
{
    //A
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,E3,2,BRK,14,E3,2,BRK,16,BRK,14,E3,2,BRK,30,E3,2,BRK,14,E3,2,BRK,14,E3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,E3,2,BRK,14,E3,2,BRK,16,BRK,14,E3,2,BRK,30,E3,2,BRK,14,E3,2,BRK,14,E3,2,BRK,
    //B
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,E3,2,BRK,14,E3,2,BRK,16,BRK,14,E3,2,BRK,30,E3,2,BRK,14,E3,2,BRK,14,E3,2,BRK,
    //A
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,E3,2,BRK,14,E3,2,BRK,16,BRK,14,E3,2,BRK,30,E3,2,BRK,14,E3,2,BRK,14,E3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,E3,2,BRK,14,E3,2,BRK,16,BRK,14,E3,2,BRK,30,E3,2,BRK,14,E3,2,BRK,14,E3,2,BRK,
    //C
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    14,G3,2,BRK,14,G3,2,BRK,16,BRK,14,G3,2,BRK,30,G3,2,BRK,14,G3,2,BRK,14,G3,2,BRK,
    14,F3,2,BRK,14,F3,2,BRK,16,BRK,14,F3,2,BRK,30,F3,2,BRK,14,F3,2,BRK,14,F3,2,BRK,
    14,A3,2,BRK,14,A3,2,BRK,16,BRK,14,A3,2,BRK,30,A3,2,BRK,14,A3,2,BRK,14,A3,2,BRK,
    0
};

const unsigned char level1_music_rythm[] =
{

    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,30,0x00,1,NOISE_LOOPED | NOISE_HIGHEST,1,NOISE_LOOPED | NOISE_HIGHER,46,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,14,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,14,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,14,0x00,
    0
};

const unsigned char level2_music_lead[] =
{
    //A
    16,E5,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,34,C5,2,BRK,16,A4,2,BRK,
    16,B4,2,BRK,16,B4,2,BRK,16,G4,2,BRK,88,E4,2,BRK,
    16,E5,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,34,C5,2,BRK,16,A4,2,BRK,
    88,B4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,
    //B
    16,F5,2,BRK,16,F5,2,BRK,16,F5,2,BRK,16,E5,2,BRK,52,D5,2,BRK,16,D5,2,BRK,
    16,E5,2,BRK,16,E5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,52,C5,2,BRK,16,C5,2,BRK,
    16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,G4,2,BRK,
    88,A4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,
    16,F5,2,BRK,16,F5,2,BRK,16,F5,2,BRK,16,E5,2,BRK,52,D5,2,BRK,16,D5,2,BRK,
    16,E5,2,BRK,16,E5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,52,C5,2,BRK,16,C5,2,BRK,
    16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,G4,2,BRK,
    142,A4,2,BRK,
    //A
    16,E5,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,34,C5,2,BRK,16,A4,2,BRK,
    16,B4,2,BRK,16,B4,2,BRK,16,G4,2,BRK,88,E4,2,BRK,
    16,E5,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,34,C5,2,BRK,16,A4,2,BRK,
    88,B4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,
    //B
    16,F5,2,BRK,16,F5,2,BRK,16,F5,2,BRK,16,E5,2,BRK,52,D5,2,BRK,16,D5,2,BRK,
    16,E5,2,BRK,16,E5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,52,C5,2,BRK,16,C5,2,BRK,
    16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,G4,2,BRK,
    88,A4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,
    16,F5,2,BRK,16,F5,2,BRK,16,F5,2,BRK,16,E5,2,BRK,52,D5,2,BRK,16,D5,2,BRK,
    16,E5,2,BRK,16,E5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,52,C5,2,BRK,16,C5,2,BRK,
    16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,G4,2,BRK,
    142,A4,2,BRK,
    //C
    16,C5,2,BRK,16,A4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,A4,2,BRK,
    142,B4,2,BRK,
    16,B4,2,BRK,16,G4,2,BRK,16,A4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,A4,2,BRK,16,G4,2,BRK,
    142,A4,2,BRK,
    16,C5,2,BRK,16,A4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,D5,2,BRK,16,E5,2,BRK,16,D5,2,BRK,16,C5,2,BRK,
    142,B4,2,BRK,
    16,B4,2,BRK,16,G4,2,BRK,16,A4,2,BRK,16,B4,2,BRK,16,C5,2,BRK,16,B4,2,BRK,16,A4,2,BRK,16,G4,2,BRK,
    142,A4,2,BRK,
    0
};

const unsigned char level2_music_bass[] =
{
    //A
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    //B
    16,F3,2,BRK,16,F3,20,BRK,16,F3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,F3,2,BRK,16,F3,20,BRK,16,F3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    //A
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    //B
    16,F3,2,BRK,16,F3,20,BRK,16,F3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,F3,2,BRK,16,F3,20,BRK,16,F3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,E3,2,BRK,16,E3,20,BRK,16,E3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    //C
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,16,G3,2,BRK,16,G3,20,BRK,16,G3,2,BRK,
    16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,16,A3,2,BRK,16,A3,20,BRK,16,A3,2,BRK,
    0
};

const unsigned char level2_music_rythm[] =
{
    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,34,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,34,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,16,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,16,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,34,0x00,
    0
};

const unsigned char level3_music_lead[] =
{
    //A
    32,A4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,15,B4,2,BRK,32,A4,2,BRK,
    15,B4,2,BRK,15,C5,2,BRK,15,B4,2,BRK,83,G4,2,BRK,
    32,G4,2,BRK,15,G4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,A4,2,BRK,15,G4,2,BRK,15,B4,2,BRK,
    134,A4,2,BRK,
    32,A4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,15,B4,2,BRK,32,A4,2,BRK,
    15,D5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,83,G4,2,BRK,
    32,B4,2,BRK,15,B4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,
    83,A4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,
    //B
    32,D5,2,BRK,15,A4,2,BRK,15,A4,2,BRK,32,D5,2,BRK,15,D5,2,BRK,15,E5,2,BRK,
    15,D5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,83,C5,2,BRK,
    32,C5,2,BRK,15,G4,2,BRK,15,G4,2,BRK,32,C5,2,BRK,15,C5,2,BRK,15,D5,2,BRK,
    83,B4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,
    32,D5,2,BRK,15,A4,2,BRK,15,A4,2,BRK,32,D5,2,BRK,15,D5,2,BRK,15,E5,2,BRK,
    15,D5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,83,C5,2,BRK,
    32,C5,2,BRK,15,C5,2,BRK,15,C5,2,BRK,32,E5,2,BRK,15,D5,2,BRK,15,C5,2,BRK,
    83,B4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,
    //C
    83,D5,2,BRK,15,D5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,
    83,C5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,15,A4,2,BRK,
    83,B4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,15,B4,2,BRK,
    83,A4,2,BRK,15,A4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,
    83,D5,2,BRK,15,D5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,
    83,C5,2,BRK,15,C5,2,BRK,15,B4,2,BRK,15,A4,2,BRK,
    83,G4,2,BRK,15,G4,2,BRK,15,B4,2,BRK,15,C5,2,BRK,
    134,A4,2,BRK,
    0
};

const unsigned char level3_music_bass[] =
{
    //A
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    //B
    15,D3,2,BRK,32,D3,2,BRK,15,D3,2,BRK,15,D3,2,BRK,17,BRK,15,D3,2,BRK,15,D3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,C3,2,BRK,32,C3,2,BRK,15,C3,2,BRK,15,C3,2,BRK,17,BRK,15,C3,2,BRK,15,C3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,D3,2,BRK,32,D3,2,BRK,15,D3,2,BRK,15,D3,2,BRK,17,BRK,15,D3,2,BRK,15,D3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,C3,2,BRK,32,C3,2,BRK,15,C3,2,BRK,15,C3,2,BRK,17,BRK,15,C3,2,BRK,15,C3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    //C
    15,D3,2,BRK,32,D3,2,BRK,15,D3,2,BRK,15,D3,2,BRK,17,BRK,15,D3,2,BRK,15,D3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,D3,2,BRK,32,D3,2,BRK,15,D3,2,BRK,15,D3,2,BRK,17,BRK,15,D3,2,BRK,15,D3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    15,G3,2,BRK,32,G3,2,BRK,15,G3,2,BRK,15,G3,2,BRK,17,BRK,15,G3,2,BRK,15,G3,2,BRK,
    15,A3,2,BRK,32,A3,2,BRK,15,A3,2,BRK,15,A3,2,BRK,17,BRK,15,A3,2,BRK,15,A3,2,BRK,
    0
};

const unsigned char level3_music_rythm[] =
{
    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,15,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,15,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,49,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,15,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,15,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,15,0x00,
    0
};

const unsigned char end_music_lead[] =
{
    //A
    28,C5,2,BRK,8,C5,2,BRK,8,E5,2,BRK,8,F5,2,BRK,
    28,G5,2,BRK,8,G5,2,BRK,8,F5,2,BRK,8,E5,2,BRK,
    28,F5,2,BRK,8,F5,2,BRK,8,G5,2,BRK,8,A5,2,BRK,
    28,G5,2,BRK,28,D5,2,BRK,
    28,C5,2,BRK,8,C5,2,BRK,8,E5,2,BRK,8,F5,2,BRK,
    28,G5,2,BRK,8,G5,2,BRK,8,F5,2,BRK,8,E5,2,BRK,
    28,F5,2,BRK,8,F5,2,BRK,8,G5,2,BRK,8,A5,2,BRK,
    58,G5,2,BRK,
    28,C5,2,BRK,8,C5,2,BRK,8,E5,2,BRK,8,F5,2,BRK,
    28,G5,2,BRK,8,G5,2,BRK,8,F5,2,BRK,8,E5,2,BRK,
    28,F5,2,BRK,8,F5,2,BRK,8,G5,2,BRK,8,A5,2,BRK,
    28,G5,2,BRK,28,D5,2,BRK,
    28,C5,2,BRK,8,C5,2,BRK,8,E5,2,BRK,8,F5,2,BRK,
    28,G5,2,BRK,8,G5,2,BRK,8,F5,2,BRK,8,E5,2,BRK,
    28,F5,2,BRK,8,F5,2,BRK,8,G5,2,BRK,8,A5,2,BRK,
    58,G5,2,BRK,
    //B
    28,A5,2,BRK,8,E5,2,BRK,8,E5,2,BRK,8,E5,2,BRK,
    28,C5,2,BRK,8,C6,2,BRK,8,B5,2,BRK,8,A5,2,BRK,
    28,G5,2,BRK,8,D5,2,BRK,8,D5,2,BRK,8,D5,2,BRK,
    58,B4,2,BRK,
    28,F5,2,BRK,8,C5,2,BRK,8,C5,2,BRK,8,C5,2,BRK,
    28,A4,2,BRK,8,F5,2,BRK,8,E5,2,BRK,8,D5,2,BRK,
    28,E5,2,BRK,8,E5,2,BRK,8,F5,2,BRK,8,D5,2,BRK,
    58,E5,2,BRK,
    28,A5,2,BRK,8,E5,2,BRK,8,E5,2,BRK,8,E5,2,BRK,
    28,C6,2,BRK,8,C6,2,BRK,8,B5,2,BRK,8,A5,2,BRK,
    28,G5,2,BRK,8,D5,2,BRK,8,D5,2,BRK,8,D5,2,BRK,
    58,B4,2,BRK,
    28,F5,2,BRK,8,C5,2,BRK,8,C5,2,BRK,8,C5,2,BRK,
    28,F5,2,BRK,8,F5,2,BRK,8,E5,2,BRK,8,D5,2,BRK,
    28,E5,2,BRK,8,E5,2,BRK,8,F5,2,BRK,8,D5,2,BRK,
    58,E5,2,BRK,

    0
};

const unsigned char end_music_bass[] =
{
    //A
    28,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,8,C3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    //B
    28,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,
    28,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,
    28,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,
    28,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,
    28,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,8,A3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,8,G3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,8,F3,2,BRK,
    28,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,
    28,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,8,E3,2,BRK,
    0
};

const unsigned char end_music_rythm[] =
{

    1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_LOWEST,28,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,8,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,8,0x00,1,NOISE_LOOPED | NOISE_MID,1,NOISE_LOOPED | NOISE_HIGHER,8,0x00,
    0
};
