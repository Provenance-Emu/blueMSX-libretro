#include "MsxTypes.h"
#include "ArchInput.h"

/* Filled from RETRO_DEVICE_MOUSE by libretro.c each frame. */
extern int libretro_mouse_dx;
extern int libretro_mouse_dy;
extern int libretro_mouse_buttons;

/* Movement since the last call. MSX mice report left and up as positive. */
void archMouseGetState(int* dx, int* dy)
{
    *dx = -libretro_mouse_dx;
    *dy = -libretro_mouse_dy;
    libretro_mouse_dx = 0;
    libretro_mouse_dy = 0;
}

/* Bit 0 = left (button 1), bit 1 = right (button 2). */
int  archMouseGetButtonState(int checkAlways)
{
   return libretro_mouse_buttons;
}

void  archMouseEmuEnable(AmEnableMode mode)
{
}
