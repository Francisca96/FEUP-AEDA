#pragma once

#ifdef _WIN32
#define OS_Windows 0
#include <windows.h>
#elif __APPLE__
#include "TargetConditionals.h"
#define OS_Windows 1
#elif __linux__
#define OS_Windows 2
#elif __unix__ // all unices not caught above
#define OS_Windows 3
#else
#error "Unknown compiler"
#endif

#include <iostream>
#include "utils.h"
#include <iomanip> 

using namespace std;


void clearScreen();

void cursorxy(short x, short y);

pair <int, int> centerWindow();

void start_menu(pair <short, short> xy, int &choise);

void manageCasino(pair <short, short> xy, unsigned int &choise);

void createMenu(pair <short, short> xy, unsigned int &choise);

void deleteMenu(pair <short, short> xy, unsigned int &choise);

void manageTableMenu(pair <short, short> xy, unsigned int &choise);