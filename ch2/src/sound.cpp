// Program to play sounds
//  -- from _C++20 for Lazy Programmers_
#include "SSDL.h"

int main(int argc, char** argv)
{
    // Set window parameters
    SSDL_SetWindowTitle("Simple sound example");

    // Load our media
    SSDL_Music music = SSDL_LoadMUS("457729__razor5__boss-battle-2-0.wav");
    SSDL_Sound bell = SSDL_LoadWAV("321530__robbo799__church-bell.wav");

    SSDL_VolumeMusic(MIX_MAX_VOLUME / 2);
    SSDL_PlayMusic(music, SSDL_FOREVER);

    sout << "Hit a key to hear the bell.\n";
    SSDL_WaitKey();
    SSDL_PlaySound(bell);
 
    sout << "Hit another key to end.\n";
    SSDL_WaitKey();     // Wait for user to hit any key

    return 0;
}

