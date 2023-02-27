//plugin.h

class Plugin
{
public:
    Plugin() {}
    virtual ~Plugin() {}

    virtual void run() = 0;
};

//plugin_manager.h
class PluginManager
{
public:
    PluginManager() {}
    virtual ~PluginManager() {}

    virtual void loadAllPlugins() = 0;
    virtual void loadPlugin(std::string pluginName) = 0;
    virtual void startAllPlugins() = 0;
    virtual void stopAllPlugins() = 0;
};

//plugin_instance.h
class PluginInstance
{
public:
    PluginInstance(std::string pluginName) {}
    virtual ~PluginInstance() {}

    virtual void start() = 0;
    virtual void stop() = 0;
};

//plugin_instance.cpp
class MyPluginInstance : public PluginInstance
{
public:
    MyPluginInstance(std::string pluginName) : PluginInstance(pluginName) {}
    virtual ~MyPluginInstance() {}

    virtual void start()
    {
        std::cout << "Starting plugin instance for " << pluginName << std::endl;
    }

    virtual void stop()
    {
        std::cout << "Stopping plugin instance for " << pluginName << std::endl;
    }
};

//plugin_manager.cpp
class MyPluginManager : public PluginManager
{
public:
    MyPluginManager() {}
    virtual ~MyPluginManager() {}

    virtual void loadAllPlugins()
    {
        std::cout << "Loading all plugins" << std::endl;
    }

    virtual void loadPlugin(std::string pluginName)
    {
        std::cout << "Loading plugin: " << pluginName << std::endl;
    }

    virtual void startAllPlugins()
    {
        std::cout << "Starting all plugins" << std::endl;
    }

    virtual void stopAllPlugins()
    {
        std::cout << "Stopping all plugins" << std::endl;
    }
};

//main.cpp
int main()
{
    // Load plugins
    MyPluginManager pluginManager;
    pluginManager.loadAllPlugins();

    // Create plugin instances
    MyPluginInstance pluginInstance1("Plugin1");
    MyPluginInstance pluginInstance2("Plugin2");

    // Start plugins
    pluginInstance1.start();
    pluginInstance2.start();

    // Stop plugins
    pluginInstance1.stop();
    pluginInstance2.stop();

    return 0;
}
