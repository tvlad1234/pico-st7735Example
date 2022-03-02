#include "pico/stdlib.h"

#include "st7789.h"
#include "gfx.h"

int c;

int main()
{

    LCD_initDisplay(135, 240);
    LCD_setRotation(1);
    GFX_createFramebuf();
    while (true)
    {
        GFX_clearScreen();
        GFX_setCursor(0, 0);
        GFX_printf("Hello GFX!\n%d", c++);
        GFX_flush();
        sleep_ms(500);
    }
}
