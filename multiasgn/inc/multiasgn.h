#pragma once

#include <iostream>
#include <csignal>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
#include <stdio.h>
#include <fstream>
#include <string>
#include <time.h>
#include <signal.h>

#define MAXBUFF 1024

using namespace std;

void Wfile(char *);
void Rfile(char *);
