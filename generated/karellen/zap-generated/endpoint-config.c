// Prevent multiple inclusion
#pragma once

#include <lib/core/CHIPConfig.h>


// Default values for the attributes longer than a pointer,
// in a form of a binary blob
// Separate block is generated for big-endian and little-endian cases.
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: General Commissioning (server), big-endian */\
\
  /* 0 - Breadcrumb, */\
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
\
}


#else // !BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: General Commissioning (server), little-endian */\
\
  /* 0 - Breadcrumb, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, \
\
}

#endif // BIGENDIAN_CPU

#define GENERATED_DEFAULTS_COUNT (1)

#define ZAP_TYPE(type) ZCL_ ## type ## _ATTRIBUTE_TYPE
#define ZAP_LONG_DEFAULTS_INDEX(index) { &generatedDefaults[index] }
#define ZAP_MIN_MAX_DEFAULTS_INDEX(index) { &minMaxDefaults[index] }
#define ZAP_EMPTY_DEFAULT() {(uint32_t) 0}
#define ZAP_SIMPLE_DEFAULT(x) {(uint32_t) x}

// This is an array of EmberAfAttributeMinMaxValue structures.
#define GENERATED_MIN_MAX_DEFAULT_COUNT 2
#define GENERATED_MIN_MAX_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: Time Format Localization (server) */ \
  { (uint16_t)0x0, (uint16_t)0x0, (uint16_t)0x1 }, /* HourFormat */ \
\
  /* Endpoint: 1, Cluster: On/Off (server) */ \
  { (uint16_t)0x0, (uint16_t)0x0, (uint16_t)0x2 } /* StartUpOnOff */ \
}


#define ZAP_ATTRIBUTE_MASK(mask) ATTRIBUTE_MASK_ ## mask
// This is an array of EmberAfAttributeMetadata structures.
#define GENERATED_ATTRIBUTE_COUNT 111
#define GENERATED_ATTRIBUTES { \
\
  /* Endpoint: 0, Cluster: Descriptor (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* DeviceTypeList */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* ServerList */  \
  { 0x00000002, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* ClientList */  \
  { 0x00000003, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* PartsList */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Access Control (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* ACL */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* Extension */  \
  { 0x00000002, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* SubjectsPerAccessControlEntry */  \
  { 0x00000003, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* TargetsPerAccessControlEntry */  \
  { 0x00000004, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* AccessControlEntriesPerFabric */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Basic (server) */ \
  { 0x00000000, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* DataModelRevision */  \
  { 0x00000001, ZAP_TYPE(CHAR_STRING), 33, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* VendorName */  \
  { 0x00000002, ZAP_TYPE(VENDOR_ID), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* VendorID */  \
  { 0x00000003, ZAP_TYPE(CHAR_STRING), 33, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* ProductName */  \
  { 0x00000004, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* ProductID */  \
  { 0x00000005, ZAP_TYPE(CHAR_STRING), 33, ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* NodeLabel */  \
  { 0x00000006, ZAP_TYPE(CHAR_STRING), 3, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* Location */  \
  { 0x00000007, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* HardwareVersion */  \
  { 0x00000008, ZAP_TYPE(CHAR_STRING), 65, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* HardwareVersionString */  \
  { 0x00000009, ZAP_TYPE(INT32U), 4, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* SoftwareVersion */  \
  { 0x0000000A, ZAP_TYPE(CHAR_STRING), 65, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* SoftwareVersionString */  \
  { 0x00000013, ZAP_TYPE(STRUCT), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* CapabilityMinima */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: OTA Software Update Requestor (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), ERROR: DefaultOtaProviders, invalid size, array, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* DefaultOtaProviders */  \
  { 0x00000001, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_SIMPLE_DEFAULT(true) }, /* UpdatePossible */  \
  { 0x00000002, ZAP_TYPE(ENUM8), 1, 0, ZAP_SIMPLE_DEFAULT(Unknown) }, /* UpdateState */  \
  { 0x00000003, ZAP_TYPE(INT8U), 1, ZAP_ATTRIBUTE_MASK(NULLABLE), ZAP_EMPTY_DEFAULT() }, /* UpdateStateProgress */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Localization Configuration (server) */ \
  { 0x00000000, ZAP_TYPE(CHAR_STRING), 36, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* ActiveLocale */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* SupportedLocales */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Time Format Localization (server) */ \
  { 0x00000000, ZAP_TYPE(ENUM8), 1, ZAP_ATTRIBUTE_MASK(MIN_MAX) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_MIN_MAX_DEFAULTS_INDEX(0) }, /* HourFormat */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Unit Localization (server) */ \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: General Commissioning (server) */ \
  { 0x00000000, ZAP_TYPE(INT64U), 8, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_LONG_DEFAULTS_INDEX(0) }, /* Breadcrumb */  \
  { 0x00000001, ZAP_TYPE(STRUCT), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* BasicCommissioningInfo */  \
  { 0x00000002, ZAP_TYPE(ENUM8), 1, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* RegulatoryConfig */  \
  { 0x00000003, ZAP_TYPE(ENUM8), 1, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* LocationCapability */  \
  { 0x00000004, ZAP_TYPE(BOOLEAN), 1, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* SupportsConcurrentConnection */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
  { 0x00000000, ZAP_TYPE(INT8U), 1, 0, ZAP_EMPTY_DEFAULT() }, /* MaxNetworks */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* Networks */  \
  { 0x00000004, ZAP_TYPE(BOOLEAN), 1, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* InterfaceEnabled */  \
  { 0x00000005, ZAP_TYPE(ENUM8), 1, ZAP_ATTRIBUTE_MASK(NULLABLE), ZAP_EMPTY_DEFAULT() }, /* LastNetworkingStatus */  \
  { 0x00000006, ZAP_TYPE(OCTET_STRING), 33, ZAP_ATTRIBUTE_MASK(NULLABLE), ZAP_EMPTY_DEFAULT() }, /* LastNetworkID */  \
  { 0x00000007, ZAP_TYPE(INT32S), 4, ZAP_ATTRIBUTE_MASK(NULLABLE), ZAP_EMPTY_DEFAULT() }, /* LastConnectErrorValue */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* NetworkInterfaces */  \
  { 0x00000001, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* RebootCount */  \
  { 0x00000008, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_EMPTY_DEFAULT() }, /* TestEventTriggersEnabled */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* NOCs */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* Fabrics */  \
  { 0x00000002, ZAP_TYPE(INT8U), 1, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* SupportedFabrics */  \
  { 0x00000003, ZAP_TYPE(INT8U), 1, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* CommissionedFabrics */  \
  { 0x00000004, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* TrustedRootCertificates */  \
  { 0x00000005, ZAP_TYPE(INT8U), 1, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* CurrentFabricIndex */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Group Key Management (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* GroupKeyMap */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* GroupTable */  \
  { 0x00000002, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* MaxGroupsPerFabric */  \
  { 0x00000003, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* MaxGroupKeysPerFabric */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Identify (server) */ \
  { 0x00000000, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_SIMPLE_DEFAULT(0x0) }, /* identify time */  \
  { 0x00000001, ZAP_TYPE(ENUM8), 1, 0, ZAP_SIMPLE_DEFAULT(0x0) }, /* identify type */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(4) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Groups (server) */ \
  { 0x00000000, ZAP_TYPE(BITMAP8), 1, 0, ZAP_EMPTY_DEFAULT() }, /* NameSupport */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(3) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Scenes (server) */ \
  { 0x00000000, ZAP_TYPE(INT8U), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) }, /* SceneCount */  \
  { 0x00000001, ZAP_TYPE(INT8U), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) }, /* CurrentScene */  \
  { 0x00000002, ZAP_TYPE(GROUP_ID), 2, 0, ZAP_SIMPLE_DEFAULT(0x0000) }, /* CurrentGroup */  \
  { 0x00000003, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) }, /* SceneValid */  \
  { 0x00000004, ZAP_TYPE(BITMAP8), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) }, /* NameSupport */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(4) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: On/Off (server) */ \
  { 0x00000000, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_SIMPLE_DEFAULT(0) }, /* OnOff */  \
  { 0x00004000, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_SIMPLE_DEFAULT(1) }, /* GlobalSceneControl */  \
  { 0x00004001, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_SIMPLE_DEFAULT(0) }, /* OnTime */  \
  { 0x00004002, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_SIMPLE_DEFAULT(0) }, /* OffWaitTime */  \
  { 0x00004003, ZAP_TYPE(ENUM8), 1, ZAP_ATTRIBUTE_MASK(MIN_MAX) | ZAP_ATTRIBUTE_MASK(WRITABLE) | ZAP_ATTRIBUTE_MASK(NULLABLE), ZAP_MIN_MAX_DEFAULTS_INDEX(1) }, /* StartUpOnOff */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(4) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Descriptor (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* DeviceTypeList */  \
  { 0x00000001, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* ServerList */  \
  { 0x00000002, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* ClientList */  \
  { 0x00000003, ZAP_TYPE(ARRAY), 0, ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE), ZAP_EMPTY_DEFAULT() }, /* PartsList */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: OTA Software Update Provider (server) */ \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: OTA Software Update Requestor (server) */ \
  { 0x00000000, ZAP_TYPE(ARRAY), ERROR: DefaultOtaProviders, invalid size, array, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* DefaultOtaProviders */  \
  { 0x00000001, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_SIMPLE_DEFAULT(true) }, /* UpdatePossible */  \
  { 0x00000002, ZAP_TYPE(ENUM8), 1, 0, ZAP_SIMPLE_DEFAULT(Unknown) }, /* UpdateState */  \
  { 0x00000003, ZAP_TYPE(INT8U), 1, ZAP_ATTRIBUTE_MASK(NULLABLE), ZAP_EMPTY_DEFAULT() }, /* UpdateStateProgress */  \
  { 0x0000FFFC, ZAP_TYPE(BITMAP32), 4, 0, ZAP_SIMPLE_DEFAULT(0) }, /* FeatureMap */  \
  { 0x0000FFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(1) }, /* ClusterRevision */  \
}


// This is an array of EmberAfCluster structures.
#define ZAP_ATTRIBUTE_INDEX(index) (&generatedAttributes[index])

#define ZAP_GENERATED_COMMANDS_INDEX(index) ((chip::CommandId *) (&generatedCommands[index]))

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS   \
const EmberAfGenericClusterFunction chipFuncArrayBasicServer[] = {\
  (EmberAfGenericClusterFunction) emberAfBasicClusterServerInitCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayLocalizationConfigurationServer[] = {\
  (EmberAfGenericClusterFunction) emberAfLocalizationConfigurationClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterLocalizationConfigurationClusterServerPreAttributeChangedCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayTimeFormatLocalizationServer[] = {\
  (EmberAfGenericClusterFunction) emberAfTimeFormatLocalizationClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterTimeFormatLocalizationClusterServerPreAttributeChangedCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayIdentifyServer[] = {\
  (EmberAfGenericClusterFunction) emberAfIdentifyClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterIdentifyClusterServerAttributeChangedCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayGroupsServer[] = {\
  (EmberAfGenericClusterFunction) emberAfGroupsClusterServerInitCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayScenesServer[] = {\
  (EmberAfGenericClusterFunction) emberAfScenesClusterServerInitCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayOnOffServer[] = {\
  (EmberAfGenericClusterFunction) emberAfOnOffClusterServerInitCallback,\
};\



// clang-format off
#define GENERATED_COMMANDS { \
  /* Endpoint: 0, Cluster: General Commissioning (server) */\
  /*   AcceptedCommandList (index=0) */ \
  0x00000000 /* ArmFailSafe */, \
  0x00000002 /* SetRegulatoryConfig */, \
  0x00000004 /* CommissioningComplete */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=4)*/ \
  0x00000001 /* ArmFailSafeResponse */, \
  0x00000003 /* SetRegulatoryConfigResponse */, \
  0x00000005 /* CommissioningCompleteResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Network Commissioning (server) */\
  /*   AcceptedCommandList (index=8) */ \
  0x00000000 /* ScanNetworks */, \
  0x00000004 /* RemoveNetwork */, \
  0x00000006 /* ConnectNetwork */, \
  0x00000008 /* ReorderNetwork */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=13)*/ \
  0x00000001 /* ScanNetworksResponse */, \
  0x00000005 /* NetworkConfigResponse */, \
  0x00000007 /* ConnectNetworkResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: General Diagnostics (server) */\
  /*   AcceptedCommandList (index=17) */ \
  0x00000000 /* TestEventTrigger */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Operational Credentials (server) */\
  /*   AcceptedCommandList (index=19) */ \
  0x00000000 /* AttestationRequest */, \
  0x00000002 /* CertificateChainRequest */, \
  0x00000004 /* CSRRequest */, \
  0x00000006 /* AddNOC */, \
  0x00000007 /* UpdateNOC */, \
  0x00000009 /* UpdateFabricLabel */, \
  0x0000000A /* RemoveFabric */, \
  0x0000000B /* AddTrustedRootCertificate */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=28)*/ \
  0x00000001 /* AttestationResponse */, \
  0x00000003 /* CertificateChainResponse */, \
  0x00000005 /* CSRResponse */, \
  0x00000008 /* NOCResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Group Key Management (server) */\
  /*   AcceptedCommandList (index=33) */ \
  0x00000000 /* KeySetWrite */, \
  0x00000001 /* KeySetRead */, \
  0x00000003 /* KeySetRemove */, \
  0x00000004 /* KeySetReadAllIndices */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=38)*/ \
  0x00000002 /* KeySetReadResponse */, \
  0x00000005 /* KeySetReadAllIndicesResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: Identify (server) */\
  /*   AcceptedCommandList (index=41) */ \
  0x00000000 /* Identify */, \
  0x00000040 /* TriggerEffect */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: Groups (server) */\
  /*   AcceptedCommandList (index=44) */ \
  0x00000000 /* AddGroup */, \
  0x00000001 /* ViewGroup */, \
  0x00000002 /* GetGroupMembership */, \
  0x00000003 /* RemoveGroup */, \
  0x00000004 /* RemoveAllGroups */, \
  0x00000005 /* AddGroupIfIdentifying */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=51)*/ \
  0x00000000 /* AddGroupResponse */, \
  0x00000001 /* ViewGroupResponse */, \
  0x00000002 /* GetGroupMembershipResponse */, \
  0x00000003 /* RemoveGroupResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: Scenes (server) */\
  /*   AcceptedCommandList (index=56) */ \
  0x00000000 /* AddScene */, \
  0x00000001 /* ViewScene */, \
  0x00000002 /* RemoveScene */, \
  0x00000003 /* RemoveAllScenes */, \
  0x00000004 /* StoreScene */, \
  0x00000005 /* RecallScene */, \
  0x00000006 /* GetSceneMembership */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=64)*/ \
  0x00000000 /* AddSceneResponse */, \
  0x00000001 /* ViewSceneResponse */, \
  0x00000002 /* RemoveSceneResponse */, \
  0x00000003 /* RemoveAllScenesResponse */, \
  0x00000004 /* StoreSceneResponse */, \
  0x00000006 /* GetSceneMembershipResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: On/Off (server) */\
  /*   AcceptedCommandList (index=71) */ \
  0x00000000 /* Off */, \
  0x00000001 /* On */, \
  0x00000002 /* Toggle */, \
  0x00000040 /* OffWithEffect */, \
  0x00000041 /* OnWithRecallGlobalScene */, \
  0x00000042 /* OnWithTimedOff */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: OTA Software Update Requestor (server) */\
  /*   AcceptedCommandList (index=78) */ \
  0x00000000 /* AnnounceOtaProvider */, \
  chip::kInvalidCommandId /* end of list */, \
}

// clang-format on

#define ZAP_CLUSTER_MASK(mask) CLUSTER_MASK_ ## mask
#define GENERATED_CLUSTER_COUNT 19


// clang-format off
#define GENERATED_CLUSTERS { \
  { \
      /* Endpoint: 0, Cluster: Descriptor (server) */ \
      .clusterId = 0x0000001D,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(0), \
      .attributeCount = 6, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Access Control (server) */ \
      .clusterId = 0x0000001F,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(6), \
      .attributeCount = 7, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Basic (server) */ \
      .clusterId = 0x00000028,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(13), \
      .attributeCount = 14, \
      .clusterSize = 39, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION), \
      .functions = chipFuncArrayBasicServer, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: OTA Software Update Requestor (server) */ \
      .clusterId = 0x0000002A,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(27), \
      .attributeCount = 6, \
      .clusterSize = 0ERROR: DefaultOtaProviders, invalid size, array11142, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Localization Configuration (server) */ \
      .clusterId = 0x0000002B,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(33), \
      .attributeCount = 4, \
      .clusterSize = 42, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(PRE_ATTRIBUTE_CHANGED_FUNCTION), \
      .functions = chipFuncArrayLocalizationConfigurationServer, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Time Format Localization (server) */ \
      .clusterId = 0x0000002C,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(37), \
      .attributeCount = 3, \
      .clusterSize = 7, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(PRE_ATTRIBUTE_CHANGED_FUNCTION), \
      .functions = chipFuncArrayTimeFormatLocalizationServer, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Unit Localization (server) */ \
      .clusterId = 0x0000002D,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(40), \
      .attributeCount = 2, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: General Commissioning (server) */ \
      .clusterId = 0x00000030,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(42), \
      .attributeCount = 7, \
      .clusterSize = 14, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 0 ) ,\
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 4 ) ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
      .clusterId = 0x00000031,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(49), \
      .attributeCount = 8, \
      .clusterSize = 46, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 8 ) ,\
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 13 ) ,\
    },\
  { \
      /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
      .clusterId = 0x00000033,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(57), \
      .attributeCount = 5, \
      .clusterSize = 7, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 17 ) ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
      .clusterId = 0x0000003E,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(62), \
      .attributeCount = 8, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 19 ) ,\
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 28 ) ,\
    },\
  { \
      /* Endpoint: 0, Cluster: Group Key Management (server) */ \
      .clusterId = 0x0000003F,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(70), \
      .attributeCount = 6, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 33 ) ,\
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 38 ) ,\
    },\
  { \
      /* Endpoint: 1, Cluster: Identify (server) */ \
      .clusterId = 0x00000003,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(76), \
      .attributeCount = 4, \
      .clusterSize = 9, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(ATTRIBUTE_CHANGED_FUNCTION), \
      .functions = chipFuncArrayIdentifyServer, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 41 ) ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 1, Cluster: Groups (server) */ \
      .clusterId = 0x00000004,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(80), \
      .attributeCount = 3, \
      .clusterSize = 7, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION), \
      .functions = chipFuncArrayGroupsServer, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 44 ) ,\
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 51 ) ,\
    },\
  { \
      /* Endpoint: 1, Cluster: Scenes (server) */ \
      .clusterId = 0x00000005,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(83), \
      .attributeCount = 7, \
      .clusterSize = 12, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION), \
      .functions = chipFuncArrayScenesServer, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 56 ) ,\
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 64 ) ,\
    },\
  { \
      /* Endpoint: 1, Cluster: On/Off (server) */ \
      .clusterId = 0x00000006,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(90), \
      .attributeCount = 7, \
      .clusterSize = 13, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION), \
      .functions = chipFuncArrayOnOffServer, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 71 ) ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 1, Cluster: Descriptor (server) */ \
      .clusterId = 0x0000001D,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(97), \
      .attributeCount = 6, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 1, Cluster: OTA Software Update Provider (server) */ \
      .clusterId = 0x00000029,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(103), \
      .attributeCount = 2, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr ,\
      .generatedCommandList = nullptr ,\
    },\
  { \
      /* Endpoint: 1, Cluster: OTA Software Update Requestor (server) */ \
      .clusterId = 0x0000002A,  \
      .attributes = ZAP_ATTRIBUTE_INDEX(105), \
      .attributeCount = 6, \
      .clusterSize = 0ERROR: DefaultOtaProviders, invalid size, array11142, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 78 ) ,\
      .generatedCommandList = nullptr ,\
    },\
}

// clang-format on

#define ZAP_CLUSTER_INDEX(index) (&generatedClusters[index])

#define ZAP_FIXED_ENDPOINT_DATA_VERSION_COUNT 19

// This is an array of EmberAfEndpointType structures.
#define GENERATED_ENDPOINT_TYPES { \
  { ZAP_CLUSTER_INDEX(0), 12, 510ERROR: DefaultOtaProviders, invalid size, array1114242761446766 }, \
  { ZAP_CLUSTER_INDEX(12), 7, 530ERROR: DefaultOtaProviders, invalid size, array11142 }, \
}



// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (66)

static_assert(ATTRIBUTE_LARGEST <= CHIP_CONFIG_MAX_ATTRIBUTE_STORE_ELEMENT_SIZE,
              "ATTRIBUTE_LARGEST larger than expected");

// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (39)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE (51ERROR: DefaultOtaProviders, invalid size, array1114236042142428000042101133442001420000004200004221421421121142112214200004242ERROR: DefaultOtaProviders, invalid size, array11142)

// Number of fixed endpoints
#define FIXED_ENDPOINT_COUNT (2)

// Array of endpoints that are supported, the data inside
// the array is the endpoint number.
#define FIXED_ENDPOINT_ARRAY { 0x0000, 0x0001 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 0x0103, 0x0103 }

// Array of device types
#define FIXED_DEVICE_TYPES {{0x0016,1},{0x0100,1}}

// Array of device type offsets
#define FIXED_DEVICE_TYPE_OFFSETS { 0,1}

// Array of device type lengths
#define FIXED_DEVICE_TYPE_LENGTHS { 1,1}

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0 }

