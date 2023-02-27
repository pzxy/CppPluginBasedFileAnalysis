#include <stdio.h>

#include "xplugin_instance.h"
#include "xplugin_manager.h"

void main()
{
	PluginManager &pluManager = PluginManager::GetInstance();
	int errCode;
	PluginInstance *pInstance = pluManager.Load("PluginDemo",errCode);
	pInstance = pluManager.Load("PluginDemo",errCode);

	printf("%s,%d\n",pInstance->GetFileName().c_str(),errCode);

	pluManager.UnLoad("PluginDemo");
	printf("%d\n",pluManager.GetAllPlugins().size());

}