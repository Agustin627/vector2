// 
// cli.c
// vector
//
// Created by Aarch-64 on 8/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "var.h"
#include "function.h"

void cmd(int argc, char *argv[])
{
    (void)argc;
  
    VerSaveVar();
      
    if (argc==2)
    {
        if (!strcmp(argv[1], v.help)) // display help
        {
            printf("--version\t\t\tProgram version\n");
            printf("music.mp3\t\t\tPlay the music\n");
            exit(EXIT_SUCCESS);
        }
        else if (!strcmp(argv[1], v.version)) // display program version
        {
            printf("%s%s%s%s%s%s%s",v.namever,v.verver,v.builver,v.copyver,v.licever,v.typever,v.garaver);
            exit(EXIT_SUCCESS);
        }
    }
}
