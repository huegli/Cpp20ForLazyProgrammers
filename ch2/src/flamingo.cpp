// Hello, world! program, for _C++ for Lazy Programmers_
//  It prints "Hello, world!" on the screen
//  Quite an accomplishment, huh?
#include "SSDL.h"

int main(int argc, char** argv)
{
    // Set window parameters
    SSDL_SetWindowSize(400, 300); // make a 400x300 window
    SSDL_SetWindowTitle("My trip to the beach");

    // Load images
    const SSDL_Image BEACH = SSDL_LoadImage("beach.jpg");
    const SSDL_Image FLAMINGO = SSDL_LoadImage("flamingo.png");
    const SSDL_Image PUPDOG = SSDL_LoadImage("pupdog.png");

    // Locations and dimensions for .png images
    constexpr int FLAMINGO_X = 0, FLAMINGO_Y = 175;
    constexpr int PUPDOG_X = 320, PUPDOG_Y = 225;
    constexpr int PUPDOG_WIDTH = 50, PUPDOG_HEIGHT = 75;

    SSDL_RenderImage(BEACH, 0, 0);
    SSDL_RenderImage(FLAMINGO, FLAMINGO_X, FLAMINGO_Y);
    SSDL_RenderImage(PUPDOG, PUPDOG_X, PUPDOG_Y, PUPDOG_WIDTH, PUPDOG_HEIGHT);

    SSDL_WaitKey();     // Wait for user to hit any key

    return 0;
}

