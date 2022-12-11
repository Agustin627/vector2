// 
// music.c
// Vector
//
// Created by Aarch-64 on 10/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include <vlc/vlc.h>

libvlc_instance_t *inst;
libvlc_media_player_t *mp;
libvlc_media_t *m;

char armusic[] = "../SelfControl.mp3";

void init_vlc(void)
{   
    // load the vlc engine
    inst = libvlc_new(0, NULL);

    // create a new item
    m = libvlc_media_new_path(inst, armusic);


    // create a media play playing environment
    mp = libvlc_media_player_new_from_media(m);

    // no need to keep the media now
    libvlc_media_release(m);

    // play the media_player
    libvlc_media_player_play(mp);
}

void exit_vlc(void)
{
    // stop playing
    libvlc_media_player_stop(mp);

    // free the media_player
    libvlc_media_player_release(mp);
    
    libvlc_release(inst);
}
