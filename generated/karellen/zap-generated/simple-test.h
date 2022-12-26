Cluster Name : Identify+Command Name : Identify+Type Name : uint16_t+Argument Name : identifyTime
Cluster Name : Identify+Command Name : TriggerEffect+Type Name : EmberAfIdentifyEffectIdentifier+Argument Name : effectIdentifier,Type Name : EmberAfIdentifyEffectVariant+Argument Name : effectVariant
Cluster Name : Groups+Command Name : AddGroup+Type Name : uint16_t+Argument Name : groupId,Type Name : uint8_t *+Argument Name : groupName
Cluster Name : Groups+Command Name : ViewGroup+Type Name : uint16_t+Argument Name : groupId
Cluster Name : Groups+Command Name : GetGroupMembership+Type Name : uint16_t+Argument Name : groupList
Cluster Name : Groups+Command Name : RemoveGroup+Type Name : uint16_t+Argument Name : groupId
Cluster Name : Groups+Command Name : RemoveAllGroups
Cluster Name : Groups+Command Name : AddGroupIfIdentifying+Type Name : uint16_t+Argument Name : groupId,Type Name : uint8_t *+Argument Name : groupName
Cluster Name : Scenes+Command Name : AddScene+Type Name : uint16_t+Argument Name : GroupId,Type Name : uint8_t+Argument Name : SceneId,Type Name : uint16_t+Argument Name : TransitionTime,Type Name : uint8_t *+Argument Name : SceneName,Type Name : ExtensionFieldSet+Argument Name : ExtensionFieldSets
Cluster Name : Scenes+Command Name : ViewScene+Type Name : uint16_t+Argument Name : GroupId,Type Name : uint8_t+Argument Name : SceneId
Cluster Name : Scenes+Command Name : RemoveScene+Type Name : uint16_t+Argument Name : GroupId,Type Name : uint8_t+Argument Name : SceneId
Cluster Name : Scenes+Command Name : RemoveAllScenes+Type Name : uint16_t+Argument Name : GroupId
Cluster Name : Scenes+Command Name : StoreScene+Type Name : uint16_t+Argument Name : GroupId,Type Name : uint8_t+Argument Name : SceneId
Cluster Name : Scenes+Command Name : RecallScene+Type Name : uint16_t+Argument Name : GroupId,Type Name : uint8_t+Argument Name : SceneId,Type Name : uint16_t+Argument Name : TransitionTime
Cluster Name : Scenes+Command Name : GetSceneMembership+Type Name : uint16_t+Argument Name : GroupId
Cluster Name : OnOff+Command Name : Off
Cluster Name : OnOff+Command Name : On
Cluster Name : OnOff+Command Name : Toggle
Cluster Name : OnOff+Command Name : OffWithEffect+Type Name : EmberAfOnOffEffectIdentifier+Argument Name : EffectId,Type Name : EmberAfOnOffDelayedAllOffEffectVariant+Argument Name : EffectVariant
Cluster Name : OnOff+Command Name : OnWithRecallGlobalScene
Cluster Name : OnOff+Command Name : OnWithTimedOff+Type Name : uint8_t+Argument Name : OnOffControl,Type Name : uint16_t+Argument Name : OnTime,Type Name : uint16_t+Argument Name : OffWaitTime
Cluster Name : OtaSoftwareUpdateProvider+Command Name : QueryImageResponse+Type Name : EmberAfOTAQueryStatus+Argument Name : status,Type Name : uint32_t+Argument Name : delayedActionTime,Type Name : uint8_t *+Argument Name : imageURI,Type Name : uint32_t+Argument Name : softwareVersion,Type Name : uint8_t *+Argument Name : softwareVersionString,Type Name : uint8_t *+Argument Name : updateToken,Type Name : uint8_t+Argument Name : userConsentNeeded,Type Name : uint8_t *+Argument Name : metadataForRequestor
Cluster Name : OtaSoftwareUpdateProvider+Command Name : ApplyUpdateResponse+Type Name : EmberAfOTAApplyUpdateAction+Argument Name : action,Type Name : uint32_t+Argument Name : delayedActionTime
Cluster Name : OtaSoftwareUpdateRequestor+Command Name : AnnounceOtaProvider+Type Name : uint8_t *+Argument Name : providerNodeId,Type Name : uint16_t+Argument Name : vendorId,Type Name : EmberAfOTAAnnouncementReason+Argument Name : announcementReason,Type Name : uint8_t *+Argument Name : metadataForNode,Type Name : uint16_t+Argument Name : endpoint
Cluster Name : GeneralCommissioning+Command Name : ArmFailSafe+Type Name : uint16_t+Argument Name : expiryLengthSeconds,Type Name : uint8_t *+Argument Name : breadcrumb
Cluster Name : GeneralCommissioning+Command Name : SetRegulatoryConfig+Type Name : EmberAfRegulatoryLocationType+Argument Name : NewRegulatoryConfig,Type Name : uint8_t *+Argument Name : countryCode,Type Name : uint8_t *+Argument Name : breadcrumb
Cluster Name : GeneralCommissioning+Command Name : CommissioningComplete
Cluster Name : NetworkCommissioning+Command Name : ScanNetworks+Type Name : uint8_t *+Argument Name : SSID,Type Name : uint8_t *+Argument Name : Breadcrumb
Cluster Name : NetworkCommissioning+Command Name : RemoveNetwork+Type Name : uint8_t *+Argument Name : NetworkID,Type Name : uint8_t *+Argument Name : Breadcrumb
Cluster Name : NetworkCommissioning+Command Name : ConnectNetwork+Type Name : uint8_t *+Argument Name : NetworkID,Type Name : uint8_t *+Argument Name : Breadcrumb
Cluster Name : NetworkCommissioning+Command Name : ReorderNetwork+Type Name : uint8_t *+Argument Name : NetworkID,Type Name : uint8_t+Argument Name : NetworkIndex,Type Name : uint8_t *+Argument Name : Breadcrumb
Cluster Name : GeneralDiagnostics+Command Name : TestEventTrigger+Type Name : uint8_t *+Argument Name : EnableKey,Type Name : uint8_t *+Argument Name : EventTrigger
Cluster Name : OperationalCredentials+Command Name : AttestationRequest+Type Name : uint8_t *+Argument Name : AttestationNonce
Cluster Name : OperationalCredentials+Command Name : CertificateChainRequest+Type Name : uint8_t+Argument Name : CertificateType
Cluster Name : OperationalCredentials+Command Name : CSRRequest+Type Name : uint8_t *+Argument Name : CSRNonce,Type Name : uint8_t+Argument Name : IsForUpdateNOC
Cluster Name : OperationalCredentials+Command Name : AddNOC+Type Name : uint8_t *+Argument Name : NOCValue,Type Name : uint8_t *+Argument Name : ICACValue,Type Name : uint8_t *+Argument Name : IPKValue,Type Name : uint8_t *+Argument Name : CaseAdminSubject,Type Name : uint16_t+Argument Name : AdminVendorId
Cluster Name : OperationalCredentials+Command Name : UpdateNOC+Type Name : uint8_t *+Argument Name : NOCValue,Type Name : uint8_t *+Argument Name : ICACValue
Cluster Name : OperationalCredentials+Command Name : UpdateFabricLabel+Type Name : uint8_t *+Argument Name : Label
Cluster Name : OperationalCredentials+Command Name : RemoveFabric+Type Name : uint8_t+Argument Name : FabricIndex
Cluster Name : OperationalCredentials+Command Name : AddTrustedRootCertificate+Type Name : uint8_t *+Argument Name : RootCertificate
Cluster Name : GroupKeyManagement+Command Name : KeySetWrite+Type Name : GroupKeySetStruct+Argument Name : GroupKeySet
Cluster Name : GroupKeyManagement+Command Name : KeySetRead+Type Name : uint16_t+Argument Name : GroupKeySetID
Cluster Name : GroupKeyManagement+Command Name : KeySetRemove+Type Name : uint16_t+Argument Name : GroupKeySetID
Cluster Name : GroupKeyManagement+Command Name : KeySetReadAllIndices+Type Name : uint16_t+Argument Name : GroupKeySetIDs

