// 
// version.c
// vector
//
// Created by Aarch-64 on 15/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <string.h>
#include <stdio.h>

#include "include/var.h"
#include "include/function.h"

#define VECTOR_NAME "vector"
#define VECTOR_VERSION "0.2.1"

VERSION V;

FILE *verfile;

void VerSaveVar(void)
{
    strcpy(V.version, "--version");
    strcpy(V.help, "--help");
    //
    strcpy(V.namever, VECTOR_NAME);
    strcat(V.namever, " ");
    strcpy(V.verver, VECTOR_VERSION);
    strcat(V.verver, "\n");
    strcpy(V.builver, "This program was built for x86_64-pc-linux-gnu");
    strcat(V.builver, "\n");
    strcpy(V.copyver, "Copyright (C) 2022-2022 Aarch-64 & xdanep.");
    strcat(V.copyver, "\n");
    strcpy(V.licever, "GPLv3+ License: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>");
    strcat(V.licever, "\n\n");
    strcpy(V.typever, "This is free software: anyone is free to redistribute and modify it.");
    strcat(V.typever, "\n");
    strcpy(V.garaver, "There is no WARRANTY, up to the limits permitted by applicable laws.");
    strcat(V.garaver, "\n");
    
    verfile=fopen("version.txt","w");
    
    fputs("PROYECT NAME: ", verfile);
    fputs(VECTOR_NAME, verfile);
    fputs("\nPROYECT VERSION: ", verfile);
    fputs(VECTOR_VERSION, verfile);
}
