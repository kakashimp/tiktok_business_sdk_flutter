//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <tiktok_business_sdk/tiktok_business_sdk_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) tiktok_business_sdk_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "TiktokBusinessSdkPlugin");
  tiktok_business_sdk_plugin_register_with_registrar(tiktok_business_sdk_registrar);
}
