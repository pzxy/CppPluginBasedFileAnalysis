// Copyright (c) 2017-2018 Telos Foundation & contributors
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include "xplugin/xplugin_instance.h"
static PluginInstance * pPlugin = NULL;

PluginInstance * StartPlugin() {
    // pPlugin = new DemoPlugin("shapefile");

    // PluginManager::GetInstance().LoadPlugin(pPlugin);

    return pPlugin;
}

// bool PluginInstance::Load()
//{
//	return false;
// }
//
// bool PluginInstance::UnLoad()
//{
//	return false;
// }
//
// std::string PluginInstance::GetFileName() const
//{
//	return "";
// }
//
// std::string PluginInstance::GetDisplayName() const
//{
//	return "";
// }
