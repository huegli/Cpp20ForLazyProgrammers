// Draw a dot at the center of the screen
#include "SSDL.h"

int main(int argc, char** argv)
{
    // draws a dot at the center position (320, 240)
    SSDL_RenderDrawPoint(320, 240);

    SSDL_WaitKey();     // Wait for user to hit any key

    return 0;
}

