// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#include "framework.h"
//vector for array of function pointers so initialization is less tedious, and packs list
#include <vector>
//for detecting and reading packs
#include <filesystem>
//for messagebox instantiation
#include <windows.h>

#include <cocos2d.h>
#include <gd.h>

#endif //PCH_H
