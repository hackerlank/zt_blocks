/**************************************************************************************************
 ** file: src\unity_dll.cpp
 **
 ** This file was automatically generated.
 **************************************************************************************************/

#if !defined(ZT_DLL) && !defined(ZT_NO_LOADER)
#define ZT_DLL
#endif

#ifndef ZT_NO_DIRECTX
#define ZT_NO_DIRECTX
#endif

// --------------------------------------------------------------------------------------------------
// All source files must be included here.
// Remove them from compilation if they are added to the project

#include "main_dll.cpp"
#include "board.cpp"

// --------------------------------------------------------------------------------------------------

#ifndef ZT_LOADER

#define ZT_TOOLS_IMPLEMENTATION
#include "zt_tools.h"

#define ZT_GAME_IMPLEMENTATION
#include "zt_game.h"

#define ZT_GAME_GUI_IMPLEMENTATION
#include "zt_game_gui.h"

//#define ZT_VR_IMPLEMENTATION
//#include "openvr/openvr.h"
//#include "zt_vr.h"

#endif
