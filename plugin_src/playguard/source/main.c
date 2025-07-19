#include <stdio.h>
#include <stdint.h>
#include "plugin_common.h"

attr_public const char *g_pluginName = "playguard";
attr_public const char *g_pluginDesc = "PlayGuard Plugin for GoldHEN";
attr_public const char *g_pluginAuth = "YourName";
attr_public u32 g_pluginVersion = 0x00000100; // 1.00

int32_t attr_module_hidden module_start(size_t argc, const void *args) {
    final_printf("[GoldHEN] <%s\\Ver.0x%08x> %s\n", g_pluginName, g_pluginVersion, __func__);
    final_printf("[GoldHEN] Plugin Author(s): %s\n", g_pluginAuth);
    // Initialization code here
    return 0;
}

int32_t attr_module_hidden module_stop(size_t argc, const void *args) {
    final_printf("[GoldHEN] <%s\\Ver.0x%08x> %s\n", g_pluginName, g_pluginVersion, __func__);
    // Cleanup code here
    return 0;
}
