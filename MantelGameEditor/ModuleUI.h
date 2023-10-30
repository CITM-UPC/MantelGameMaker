#pragma once
#include "Module.h"
#include "Globals.h"


class ModuleUI : public Module
{
public:
	ModuleUI(bool start_enabled = true);
	~ModuleUI();

	bool Init();
	update_status PreUpdate();
	bool CleanUp();

	void RenderUI();

private:
	bool dockSpaceEnabled = true;
	bool options = false;
	bool camDebug = false;
	bool about = false;
	bool demoWindow = false;
};