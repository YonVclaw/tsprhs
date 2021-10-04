#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TFS_main"
        };
        author = AUTHOR;
        authors[] = {"Jonpas"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
