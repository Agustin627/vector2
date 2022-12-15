#if !defined(HEADER_LIBRARY)
#define HEADER_LIBRARY

typedef enum
{
    OFF = 0,
    ON
} MUSIC;
typedef enum
{
    ENGLISH = 0,
    SPANISH
} LANGUAGE;
typedef enum
{
    BLACK = 0,
    RED = 1,
    GREEN = 2,
    YELLOW = 3,
    BLUE = 4,
    WHITE = 7
} COLOR;

typedef struct
{
    MUSIC mstate;
    LANGUAGE lstate;
} OPTION;

typedef struct
{
    COLOR cstate;
    char name[21];
} PLAYER;

typedef struct version
{
    char version[20];
    char help[20];
    //
    char namever[10];
    char verver[10];
    char builver[60];
    char copyver[60];
    char licever[90];
    char typever[70];
    char garaver[70];
} version;

extern PLAYER P;
extern OPTION O;
extern version V;
extern char dir[100];
extern char dir2[100];
extern char ini_music[100];
extern char g_music[100];

#endif // HEADER_LIBRARY
