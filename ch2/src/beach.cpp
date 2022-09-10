// Hello, world! program, for _C++ for Lazy Programmers_
//  It prints "Hello, world!" on the screen
//  Quite an accomplishment, huh?
#include "SSDL.h"

int main(int argc, char** argv)
{
    // Set window parameters
    SSDL_SetWindowSize(400, 300); // make a 400x300 window
    SSDL_SetWindowTitle("My trip to the beach");

    // Show image
    const SSDL_Image BEACH = SSDL_LoadImage("beach.jpg");
    SSDL_RenderImage(BEACH, 0, 0);

    // Make a label in the middle, centered
    SSDL_RenderTextCentered("BALI? BORA BORA? BEAUTIFUL, WHEREVER!",
        SSDL_GetWindowWidth() / 2 , SSDL_GetWindowHeight() / 2);

    SSDL_WaitKey();     // Wait for user to hit any key

    return 0;
}

