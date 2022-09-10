// Displays boxes of colors, labeled
#include "SSDL.h"

int main(int argc, char** argv)
{
    SSDL_SetWindowTitle("Two colored squares, with labels");

    // We'll use 2 new colors, pluss GREEN and WHITE...
    const SSDL_Color MAHOGANY = SSDL_CreateColor(192, 64, 0);
    const SSDL_Color DARK_GREY = SSDL_CreateColor(100, 100, 100);

    // Make a dark grey background
    SSDL_RenderClear(DARK_GREY);

    // We'll have two squares across
    SSDL_SetRenderDrawColor(GREEN);     // First square
    SSDL_RenderFillRect(0, 0, 100, 100);
    SSDL_SetRenderDrawColor(WHITE);
    SSDL_RenderTextCentered("GREEN", 50, 50); // dead center of green square
  
    SSDL_SetRenderDrawColor(MAHOGANY);   // Second
    SSDL_RenderFillRect(100, 0, 100, 100);
    SSDL_SetRenderDrawColor(WHITE);
    SSDL_RenderTextCentered("MAHOGANY", 150, 50); // dead center of mahogany square

    // Report number of colors, thus demonstrating non-centered text
    SSDL_RenderText("Number of colors: ", 0, 100);
    SSDL_RenderText(2, 150, 100); // two colors

    // Program's end.
    sout << "Hit any key to end.\n";
    
    SSDL_WaitKey();     // Wait for user to hit any key

    return 0;
}

