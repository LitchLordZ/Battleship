/*
* Generated by SGWrapperGen - DO NOT EDIT!
*
* SwinGame wrapper for C - Types
*
* Wrapping sgTypes.pas
*/

#ifndef sgTypes
#define sgTypes

#include <stdint.h>

#ifndef __cplusplus
  #include <stdbool.h>
#endif


typedef struct _point2d { 
    float x;
    float y;
} point2d;

typedef struct _vector { 
    float x;
    float y;
} vector;

typedef struct _rectangle { 
    float x;
    float y;
    float width;
    float height;
} rectangle;

typedef struct _quad { 
    point2d points[4];
} quad;

typedef struct _circle { 
    point2d center;
    float radius;
} circle;

typedef struct _line_segment { 
    point2d start_point;
    point2d end_point;
} line_segment;

typedef struct _triangle { 
    point2d points[3];
} triangle;

typedef struct _resolution { 
    uint32_t format;
    int32_t refresh_rate;
    int32_t width;
    int32_t height;
} resolution;

typedef struct _window_data *window;

typedef struct _sound_effect_data *sound_effect;

typedef struct _music_data *music;

typedef struct _matrix2d { 
    float elements[3][3];
} matrix2d;

typedef uint32_t color;

typedef struct _animation_script_data *animation_script;

typedef struct _animation_data *animation;

typedef struct _bitmap_data *bitmap;

typedef enum { 
    DRAW_TO_SCREEN,
    DRAW_TO_WORLD,
    DRAW_DEFAULT
} drawing_dest;

typedef struct _drawing_options { 
    void *dest;
    float scale_x;
    float scale_y;
    float angle;
    float anchoroffset_x;
    float anchoroffset_y;
    bool flip_x;
    bool flip_y;
    bool is_part;
    rectangle part;
    drawing_dest camera;
    int32_t line_width;
} drawing_options;

typedef enum { 
    TOP,
    BOTTOM,
    LEFT,
    RIGHT,
    TOP_LEFT,
    TOP_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_RIGHT,
    NONE
} collision_side;

typedef enum { 
    BUNDLE_RESOURCE,
    TIMER_RESOURCE,
    BITMAP_RESOURCE,
    FONT_RESOURCE,
    MUSIC_RESOURCE,
    MAP_RESOURCE,
    SOUND_RESOURCE,
    ANIMATION_RESOURCE,
    PANEL_RESOURCE,
    OTHER_RESOURCE
} resource_kind;

typedef enum { 
    PIXEL_COLLISIONS,
    AABBCOLLISIONS
} collision_test_kind;

typedef enum { 
    SPRITE_ARRIVED_EVENT,
    SPRITE_ANIMATION_ENDED_EVENT,
    SPRITE_TOUCHED_EVENT,
    SPRITE_CLICKED_EVENT
} sprite_event_kind;

typedef struct _sprite_data *sprite;

typedef void *sprite_event_handler;

typedef void *sprite_function;

typedef void *sprite_single_function;

typedef struct _timer_data *timer;

typedef struct _font_data *font;

typedef enum { 
    NORMAL_FONT = 0,
    BOLD_FONT = 1,
    ITALIC_FONT = 2,
    UNDERLINE_FONT = 4
} font_style;

typedef enum { 
    ALIGN_LEFT = 1,
    ALIGN_CENTER = 2,
    ALIGN_RIGHT = 4
} font_alignment;

typedef enum { 
    NO_BUTTON,
    LEFT_BUTTON,
    MIDDLE_BUTTON,
    RIGHT_BUTTON,
    WHEEL_UP_BUTTON,
    WHEEL_DOWN_BUTTON,
    MOUSE_X1BUTTON,
    MOUSE_X2BUTTON
} mouse_button;

typedef enum { 
    UNKNOWN_KEY = 0,
    BACKSPACE_KEY = 8,
    TAB_KEY = 9,
    CLEAR_KEY = 12,
    RETURN_KEY = 13,
    PAUSE_KEY = 19,
    ESCAPE_KEY = 27,
    SPACE_KEY = 32,
    EXCLAIM_KEY = 33,
    DOUBLE_QUOTE_KEY = 34,
    HASH_KEY = 35,
    DOLLAR_KEY = 36,
    AMPERSAND_KEY = 38,
    QUOTE_KEY = 39,
    LEFT_PAREN_KEY = 40,
    RIGHT_PAREN_KEY = 41,
    ASTERISK_KEY = 42,
    PLUS_KEY = 43,
    COMMA_KEY = 44,
    MINUS_KEY = 45,
    PERIOD_KEY = 46,
    SLASH_KEY = 47,
    KEY0 = 48,
    KEY1 = 49,
    KEY2 = 50,
    KEY3 = 51,
    KEY4 = 52,
    KEY5 = 53,
    KEY6 = 54,
    KEY7 = 55,
    KEY8 = 56,
    KEY9 = 57,
    COLON_KEY = 58,
    SEMI_COLON_KEY = 59,
    LESS_KEY = 60,
    EQUALS_KEY = 61,
    GREATER_KEY = 62,
    QUESTION_KEY = 63,
    AT_KEY = 64,
    LEFT_BRACKET_KEY = 91,
    BACKSLASH_KEY = 92,
    RIGHT_BRACKET_KEY = 93,
    CARET_KEY = 94,
    UNDERSCORE_KEY = 95,
    BACKQUOTE_KEY = 96,
    AKEY = 97,
    BKEY = 98,
    CKEY = 99,
    DKEY = 100,
    EKEY = 101,
    FKEY = 102,
    GKEY = 103,
    HKEY = 104,
    IKEY = 105,
    JKEY = 106,
    KKEY = 107,
    LKEY = 108,
    MKEY = 109,
    NKEY = 110,
    OKEY = 111,
    PKEY = 112,
    QKEY = 113,
    RKEY = 114,
    SKEY = 115,
    TKEY = 116,
    UKEY = 117,
    VKEY = 118,
    WKEY = 119,
    XKEY = 120,
    YKEY = 121,
    ZKEY = 122,
    DELETE_KEY = 127,
    KEY_PAD0 = 256,
    KEY_PAD1 = 257,
    KEY_PAD2 = 258,
    KEY_PAD3 = 259,
    KEY_PAD4 = 260,
    KEY_PAD5 = 261,
    KEY_PAD6 = 262,
    KEY_PAD7 = 263,
    KEY_PAD8 = 264,
    KEY_PAD9 = 265,
    KEY_PAD_PERIOD = 266,
    KEY_PAD_DIVIDE = 267,
    KEY_PAD_MULTIPLY = 268,
    KEY_PAD_MINUS = 269,
    KEY_PAD_PLUS = 270,
    KEY_PAD_ENTER = 271,
    KEY_PAD_EQUALS = 272,
    UP_KEY = 273,
    DOWN_KEY = 274,
    RIGHT_KEY = 275,
    LEFT_KEY = 276,
    INSERT_KEY = 277,
    HOME_KEY = 278,
    END_KEY = 279,
    PAGE_UP_KEY = 280,
    PAGE_DOWN_KEY = 281,
    F1KEY = 282,
    F2KEY = 283,
    F3KEY = 284,
    F4KEY = 285,
    F5KEY = 286,
    F6KEY = 287,
    F7KEY = 288,
    F8KEY = 289,
    F9KEY = 290,
    F10KEY = 291,
    F11KEY = 292,
    F12KEY = 293,
    F13KEY = 294,
    F14KEY = 295,
    F15KEY = 296,
    NUM_LOCK_KEY = 300,
    CAPS_LOCK_KEY = 301,
    SCROLL_LOCK_KEY = 302,
    RIGHT_SHIFT_KEY = 303,
    LEFT_SHIFT_KEY = 304,
    RIGHT_CTRL_KEY = 305,
    LEFT_CTRL_KEY = 306,
    RIGHT_ALT_KEY = 307,
    LEFT_ALT_KEY = 308,
    RIGHT_META_KEY = 309,
    LEFT_META_KEY = 310,
    LEFT_SUPER_KEY = 311,
    RIGHT_SUPER_KEY = 312,
    MODE_KEY = 313,
    HELP_KEY = 315,
    SYS_REQ_KEY = 317,
    MENU_KEY = 319,
    POWER_KEY = 320,
    SHIFT_KEY = 321,
    CTRL_KEY = 322,
    ALT_KEY = 323,
    COMMAND_KEY = 324,
    SUPER_KEY = 325,
    WINDOWS_KEY = 326,
    OPTION_KEY = 327
} key_code;

typedef void *free_notifier;

typedef enum { 
    GK_LABEL = 1,
    GK_BUTTON = 2,
    GK_CHECK_BOX = 4,
    GK_RADIO_GROUP = 8,
    GK_TEXT_BOX = 16,
    GK_LIST = 32,
    GK_ANY_KIND = 63
} guielement_kind;

typedef enum { 
    EK_CLICKED,
    EK_TEXT_ENTRY_ENDED,
    EK_SELECTION_MADE
} event_kind;

typedef enum { 
    FD_FILES = 1,
    FD_DIRECTORIES = 2,
    FD_FILES_AND_DIRECTORIES = 3
} file_dialog_select_type;

typedef struct _panel_data *panel;

typedef struct _region_data *region;

typedef void *guievent_callback;

typedef struct _arduino_device_data *arduino_device;

typedef enum { 
    TCP,
    UDP,
    UNKNOWN_CONNECTION
} connection_type;

typedef struct _http_response_data *http_response;

typedef struct _connection_data *connection;

typedef struct _message_data *message;

typedef struct _server_socket_data *server_socket;


#ifdef __cplusplus
// C++ overloaded functions

#endif

#endif

