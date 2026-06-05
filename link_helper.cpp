#include "BaseMenu.h"
#include "extdll_menu.h"

extern "C"
{
extern int GetMenuAPI(UI_FUNCTIONS *pFunctionTable, ui_enginefuncs_t* pEngfuncsFromEngine, ui_globalvars_t *pGlobals);
extern int GetExtAPI( int version, UI_EXTENDED_FUNCTIONS *pFunctionTable, ui_extendedfuncs_t *pEngfuncsFromEngine );

struct {const char *name; void *func;} lib_menu_exports[] = {
	{ "GetMenuAPI", (void*)GetMenuAPI },
	{ "ExtAPI", (void*)GetExtAPI },
	{ 0, 0 }
};
}

