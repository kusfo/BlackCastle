#ifndef _BOSS
#define _BOSS

#define BT_NONE     0
#define BT_BAT      1
#define BT_MINOTAUR 2
#define BT_REAPER   3

#define BS_START    0
#define BS_FIGHT    1
#define BS_END      2

//boss
extern UBYTE boss_act;
extern UBYTE boss_x;
extern UBYTE boss_y;
extern UBYTE boss_spr0;
extern UBYTE boss_spr1;
extern UBYTE boss_spr2;
extern UBYTE boss_spr3;
extern UBYTE boss_spr4;
extern UBYTE boss_spr5;
extern UBYTE boss_typ;
extern BYTE boss_dir;
extern BYTE boss_vel;
extern UBYTE boss_jmp;
extern UBYTE boss_ani;
extern UBYTE boss_dmg;
extern UBYTE boss_lif;
extern UBYTE boss_cnt;
extern UBYTE boss_state;

void new_boss(UBYTE x, UBYTE y, UBYTE type) NONBANKED;
void update_boss(void) NONBANKED;
void update_boss_bat(void);
void update_boss_minotaur(void);
void update_boss_reaper(void);

extern const uint8_t boss_bat_dummyvar;
BANKREF_EXTERN(boss_bat_dummyvar)
extern const uint8_t boss_minotaur_dummyvar;
BANKREF_EXTERN(boss_minotaur_dummyvar)
extern const uint8_t boss_reaper_dummyvar;
BANKREF_EXTERN(boss_reaper_dummyvar)

#endif