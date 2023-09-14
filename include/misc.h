#ifndef _MISC
#define _MISC

#if defined(NINTENDO)
#define MAX_SPRITES         40
#else
#define MAX_SPRITES         64
#endif
#define MAX_ITEM            4
#define MAX_PLATFORM        4
#define MAX_EXPLOSION       4
#define MAX_STONE           2

#define SND_SHOT            1
#define SND_CRYSTAL         2
#define SND_HEART           3
#define SND_HIT             4
#define SND_EXPLOSION       5
#define SND_WEAPON          6
#define SND_START           7
#define SND_DAMAGE          8
#define SND_DEAD            9
#define SND_PAUSE           10
#define SND_BREAK           11
#define SND_SHAKE           12

#define HUD_WEAPON          0
#define HUD_LIFE            1
#define HUD_SCORE           2
#define HUD_LEVEL           3

#define IT_CRYSTAL          0
#define IT_HEART            1
#define IT_SWORD            2
#define IT_AXE              3
#define IT_MACE             4

#define PT_FALLING_PLATFORM     0
#define PT_UPDOWN_PLATFORM      1
#define PT_LEFTRIGHT_PLATFORM   2

extern const unsigned char scroll_seam_hide_tile[];
extern const unsigned char candle_tiles[];
extern const unsigned char hud_data[];

#define TITLE_FONT_DIGITS_OFS 0xa7u

//sound
extern UBYTE sound_cnt_ch1;
extern UBYTE sound_typ_ch1;

extern UBYTE sound_cnt_ch4;
extern UBYTE sound_typ_ch4;

//sprites
extern UBYTE spr_act[MAX_SPRITES];

//item
extern UBYTE item_act[MAX_ITEM];
extern UBYTE item_x[MAX_ITEM];
extern UBYTE item_y[MAX_ITEM];
extern UBYTE item_spr[MAX_ITEM];
extern UBYTE item_typ[MAX_ITEM];
extern BYTE item_vel[MAX_ITEM];

//platform
extern UBYTE platform_act[MAX_PLATFORM];
extern UBYTE platform_x[MAX_PLATFORM];
extern UBYTE platform_y[MAX_PLATFORM];
extern UBYTE platform_spr0[MAX_PLATFORM];
extern UBYTE platform_spr1[MAX_PLATFORM];
extern UBYTE platform_typ[MAX_PLATFORM];
extern BYTE platform_dir[MAX_PLATFORM];
extern UBYTE platform_pos[MAX_PLATFORM];
extern BYTE platform_vel[MAX_PLATFORM];

//explosion
extern UBYTE explosion_act[MAX_EXPLOSION];
extern UBYTE explosion_x[MAX_EXPLOSION];
extern UBYTE explosion_y[MAX_EXPLOSION];
extern UBYTE explosion_spr0[MAX_EXPLOSION];
extern UBYTE explosion_spr1[MAX_EXPLOSION];
extern UBYTE explosion_ani[MAX_EXPLOSION];

//stone
extern UBYTE stone_act[MAX_STONE];
extern UBYTE stone_x[MAX_STONE];
extern UBYTE stone_y[MAX_STONE];
extern UBYTE stone_spr[MAX_STONE];
extern BYTE stone_dir[MAX_STONE];
extern BYTE stone_vel[MAX_STONE];

//functions

void fade_to_white(void) BANKED;
void fade_from_white(void) BANKED;

UBYTE get_sprite(void);
void clear_sprite(UBYTE i);
void clear_sprites(UBYTE starting_index);
void clear_all_objects(void);

inline void clear_all(void)
{
    clear_sprites(0);
    clear_all_objects();
}

void new_item(UBYTE x, UBYTE y, UBYTE type) BANKED;
void update_item(void) BANKED;

void new_platform(UBYTE x, UBYTE y, UBYTE type) BANKED;
void update_platform(void) BANKED;

void new_explosion(UBYTE x, UBYTE y) BANKED;
void update_explosion(void) BANKED;

void new_stone(UBYTE x, UBYTE y, BYTE dir) BANKED;
void update_stone(void) BANKED;

void add_score(UBYTE value);
void update_hud(UBYTE type);

#endif