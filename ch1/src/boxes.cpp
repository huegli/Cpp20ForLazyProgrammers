// Displays boxes of colors
#include "SSDL.h"

int main(int argc, char** argv)
{
    SSDL_SetWindowTitle("Four squares in different colors");

    // We'll use 2 new colors, pluss GREEN and WHITE...
    const SSDL_Color MAHOGANY = SSDL_CreateColor(192, 64, 0);
    const SSDL_Color DARK_GREY = SSDL_CreateColor(100, 100, 100);

    // Make a dark grey background
    SSDL_RenderClear(DARK_GREY);

    // We'll have two squares across
    SSDL_SetRenderDrawColor(GREEN);     // First square
    SSDL_RenderFillRect(0, 0, 100, 100);
    SSDL_SetRenderDrawColor(MAHOGANY);   // Second
    SSDL_RenderFillRect(100, 0, 100, 100);

    // Program's end.
    // Must restore color to white, or we'll get mahogany text!
    SSDL_SetRenderDrawColor(WHITE);
    sout << "Hit any key to end.\n";
    
    SSDL_WaitKey();     // Wait for user to hit any key

    return 0;
}

