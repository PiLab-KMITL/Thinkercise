#include "Thinkercise_codever.h"
#include "BF_A_1__pf4220807709.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "DmgTypeBP_Environmental__pf1001828891.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "bp_falsehitParticle__pf479369278.h"
#include "ComboUI__pf692302020.h"
#include "LeftHandCheck__pf2575722628.h"
#include "RightHandCheck__pf2575722628.h"
#include "bp_correcthitParticle__pf479369278.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABF_A_1_C__pf4220807709::ABF_A_1_C__pf4220807709(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__AllAnswer__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AllAnswer"));
	bpv__CorrectAnswer__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CorrectAnswer"));
	bpv__Choice__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Choice"));
	bpv__WrongAnswer__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WrongAnswer"));
	bpv__Choice1__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Choice1"));
	bpv__WrongAnswer1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WrongAnswer1"));
	bpv__Choice2__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Choice2"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__AllAnswer__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AllAnswer__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__AllAnswer__pf), true, 0));
	bpv__CorrectAnswer__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CorrectAnswer__pf->AttachToComponent(bpv__AllAnswer__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__CorrectAnswer__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__CorrectAnswer__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__CorrectAnswer__pf->OverrideMaterials.Reserve(1);
	bpv__CorrectAnswer__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__CorrectAnswer__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(0.000000, 100.000000, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__CorrectAnswer__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__4 = FVector(0.500000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__CorrectAnswer__pf), true, 0));
	bpv__Choice__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Choice__pf->AttachToComponent(bpv__CorrectAnswer__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Choice__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2CC3718B4C292420C4198991DBAA7290]\", \"A8D29DEA4FF682F8F76B0C84B53F03D3\", \"7.25\")")	);
	bpv__Choice__pf->XScale = 4.000000f;
	bpv__Choice__pf->YScale = 4.000000f;
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Choice__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.000515, -100.000000, 40.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FRotator >((bpv__Choice__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__6 = FRotator(0.000000, -179.999496, 0.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__Choice__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__7 = FVector(2.000000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Choice__pf), false, 0));
	bpv__WrongAnswer__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WrongAnswer__pf->AttachToComponent(bpv__AllAnswer__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__WrongAnswer__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__WrongAnswer__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__WrongAnswer__pf->OverrideMaterials.Reserve(1);
	bpv__WrongAnswer__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__WrongAnswer__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__9 = FVector(0.500000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WrongAnswer__pf), true, 0));
	bpv__Choice1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Choice1__pf->AttachToComponent(bpv__WrongAnswer__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Choice1__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2CC3718B4C292420C4198991DBAA7290]\", \"C492D3184CDF0F93384589AE086FA184\", \"7\")")	);
	bpv__Choice1__pf->XScale = 4.000000f;
	bpv__Choice1__pf->YScale = 4.000000f;
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__Choice1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(-0.000645, -20.000000, 40.000000);
	auto& __Local__11 = (*(AccessPrivateProperty<FRotator >((bpv__Choice1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__11 = FRotator(0.000000, -179.999496, 0.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__Choice1__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__12 = FVector(2.250000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Choice1__pf), false, 0));
	bpv__WrongAnswer1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WrongAnswer1__pf->AttachToComponent(bpv__AllAnswer__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__WrongAnswer1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__13 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__WrongAnswer1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__WrongAnswer1__pf->OverrideMaterials.Reserve(1);
	bpv__WrongAnswer1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__WrongAnswer1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.000000, -100.000000, 0.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__WrongAnswer1__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__15 = FVector(0.500000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WrongAnswer1__pf), true, 0));
	bpv__Choice2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Choice2__pf->AttachToComponent(bpv__WrongAnswer1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Choice2__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2CC3718B4C292420C4198991DBAA7290]\", \"963B6D614AA46E2E4AD62CA01850C423\", \"-7.25\")")	);
	bpv__Choice2__pf->XScale = 4.000000f;
	bpv__Choice2__pf->YScale = 4.000000f;
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Choice2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(0.002903, -130.000000, 40.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__Choice2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(0.000000, -179.999496, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Choice2__pf), false, 0));
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__18 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__18 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABF_A_1_C__pf4220807709::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AllAnswer__pf)
	{
		bpv__AllAnswer__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__CorrectAnswer__pf)
	{
		bpv__CorrectAnswer__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Choice__pf)
	{
		bpv__Choice__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WrongAnswer__pf)
	{
		bpv__WrongAnswer__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Choice1__pf)
	{
		bpv__Choice1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WrongAnswer1__pf)
	{
		bpv__WrongAnswer1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Choice2__pf)
	{
		bpv__Choice2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABF_A_1_C__pf4220807709::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(Abp_falsehitParticle_C__pf479369278::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AComboUI_C__pf692302020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALeftHandCheck_C__pf2575722628::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARightHandCheck_C__pf2575722628::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Abp_correcthitParticle_C__pf479369278::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__19 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__19);
	__Local__19->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__19->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__19->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__20 = __Local__19->ComponentDelegateBindings[0];
	__Local__20.ComponentPropertyName = FName(TEXT("CorrectAnswer"));
	__Local__20.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__20.FunctionNameToBind = FName(TEXT("BndEvt__CorrectAnswer_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__21 = __Local__19->ComponentDelegateBindings[1];
	__Local__21.ComponentPropertyName = FName(TEXT("WrongAnswer"));
	__Local__21.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__21.FunctionNameToBind = FName(TEXT("BndEvt__WrongAnswer_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__22 = __Local__19->ComponentDelegateBindings[2];
	__Local__22.ComponentPropertyName = FName(TEXT("WrongAnswer1"));
	__Local__22.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__22.FunctionNameToBind = FName(TEXT("BndEvt__WrongAnswer1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABF_A_1_C__pf4220807709::bpf__ExecuteUbergraph_BF_A_1__pf_0(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Abp_falsehitParticle_C__pf479369278* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_5__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_5__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5__pf{};
	Abp_falsehitParticle_C__pf479369278* bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				if(::IsValid(bpv__WrongAnswer1__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__WrongAnswer1__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abp_falsehitParticle_C__pf479369278::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 4:
			{
				if(::IsValid(bpv__WrongAnswer1__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__WrongAnswer1__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Abp_falsehitParticle_C__pf479369278>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable_4__pf, 1);
				b0l__Temp_int_Variable_4__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf;
			}
		case 37:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_5__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable_4__pf, bpfv__CallFunc_Array_Length_ReturnValue_5__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_5__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf, b0l__Temp_int_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_4__pf))
				{
					b0l__CallFunc_Array_Get_Item_4__pf->bpf__ResetCombo__pf();
				}
				__CurrentState = 36;
				break;
			}
		case 39:
			{
				if(::IsValid(bpv__WrongAnswer1__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_5__pf = bpv__WrongAnswer1__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abp_falsehitParticle_C__pf479369278::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_5__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 40:
			{
				if(::IsValid(bpv__WrongAnswer1__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_5__pf = bpv__WrongAnswer1__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf = CastChecked<Abp_falsehitParticle_C__pf479369278>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_5__pf), ECastCheckedType::NullAllowed);
			}
		case 41:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable_5__pf, 1);
				b0l__Temp_int_Variable_5__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf;
			}
		case 43:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_4__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable_5__pf, bpfv__CallFunc_Array_Length_ReturnValue_4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 44:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf, b0l__Temp_int_Variable_5__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf))
				{
					b0l__CallFunc_Array_Get_Item_5__pf->bpf__ResetCombo__pf();
				}
				__CurrentState = 42;
				break;
			}
		case 45:
			{
				b0l__Temp_int_Variable_5__pf = 0;
				__CurrentState = 43;
				break;
			}
		case 46:
			{
				b0l__Temp_int_Variable_4__pf = 0;
				__CurrentState = 37;
				break;
			}
		case 71:
			{
				__StateStack.Push(72);
				__CurrentState = 77;
				break;
			}
		case 72:
			{
			}
		case 73:
			{
				b0l__K2Node_DynamicCast_AsLeft_Hand_Check__pf = Cast<ALeftHandCheck_C__pf2575722628>(b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsLeft_Hand_Check__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 74:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 75:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsLeft_Hand_Check__pf))
				{
					b0l__K2Node_DynamicCast_AsLeft_Hand_Check__pf->bpf__L_ComboScore__pf();
				}
			}
		case 76:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AComboUI_C__pf692302020::StaticClass(), /*out*/ TArrayCaster<AComboUI_C__pf692302020*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf).Get<AActor*>());
				__CurrentState = 45;
				break;
			}
		case 77:
			{
				b0l__K2Node_DynamicCast_AsRight_Hand_Check_1__pf = Cast<ARightHandCheck_C__pf2575722628>(b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsRight_Hand_Check_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 78:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 79:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Hand_Check_1__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Hand_Check_1__pf->bpf__R_ComboScore__pf();
				}
			}
		case 80:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AComboUI_C__pf692302020::StaticClass(), /*out*/ TArrayCaster<AComboUI_C__pf692302020*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf).Get<AActor*>());
				__CurrentState = 46;
				break;
			}
		case 81:
			{
				__CurrentState = 71;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABF_A_1_C__pf4220807709::bpf__ExecuteUbergraph_BF_A_1__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	Abp_correcthitParticle_C__pf479369278* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_4__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf{};
	Abp_correcthitParticle_C__pf479369278* bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable_2__pf, 1);
				b0l__Temp_int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 23:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 24:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf, b0l__Temp_int_Variable_2__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_2__pf))
				{
					b0l__CallFunc_Array_Get_Item_2__pf->bpf__AddxCombo__pfT();
				}
				__CurrentState = 22;
				break;
			}
		case 25:
			{
				if(::IsValid(bpv__CorrectAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_4__pf = bpv__CorrectAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abp_correcthitParticle_C__pf479369278::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_4__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 26:
			{
				if(::IsValid(bpv__CorrectAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_4__pf = bpv__CorrectAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf = CastChecked<Abp_correcthitParticle_C__pf479369278>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_4__pf), ECastCheckedType::NullAllowed);
			}
		case 27:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable_3__pf, 1);
				b0l__Temp_int_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
			}
		case 29:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 30:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf, b0l__Temp_int_Variable_3__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_3__pf))
				{
					b0l__CallFunc_Array_Get_Item_3__pf->bpf__AddxCombo__pfT();
				}
				__CurrentState = 28;
				break;
			}
		case 31:
			{
				if(::IsValid(bpv__CorrectAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf = bpv__CorrectAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abp_correcthitParticle_C__pf479369278::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 32:
			{
				if(::IsValid(bpv__CorrectAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf = bpv__CorrectAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<Abp_correcthitParticle_C__pf479369278>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf), ECastCheckedType::NullAllowed);
			}
		case 33:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				b0l__Temp_int_Variable_3__pf = 0;
				__CurrentState = 29;
				break;
			}
		case 35:
			{
				b0l__Temp_int_Variable_2__pf = 0;
				__CurrentState = 23;
				break;
			}
		case 60:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AComboUI_C__pf692302020::StaticClass(), /*out*/ TArrayCaster<AComboUI_C__pf692302020*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Get<AActor*>());
				__CurrentState = 35;
				break;
			}
		case 61:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AComboUI_C__pf692302020::StaticClass(), /*out*/ TArrayCaster<AComboUI_C__pf692302020*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Get<AActor*>());
				__CurrentState = 34;
				break;
			}
		case 63:
			{
				__StateStack.Push(64);
				__CurrentState = 68;
				break;
			}
		case 64:
			{
			}
		case 65:
			{
				b0l__K2Node_DynamicCast_AsLeft_Hand_Check_2__pf = Cast<ALeftHandCheck_C__pf2575722628>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsLeft_Hand_Check_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 66:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 67:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsLeft_Hand_Check_2__pf))
				{
					b0l__K2Node_DynamicCast_AsLeft_Hand_Check_2__pf->bpf__L_ComboScore__pf();
				}
				__CurrentState = 61;
				break;
			}
		case 68:
			{
				b0l__K2Node_DynamicCast_AsRight_Hand_Check_2__pf = Cast<ARightHandCheck_C__pf2575722628>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsRight_Hand_Check_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 70:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Hand_Check_2__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Hand_Check_2__pf->bpf__R_ComboScore__pf();
				}
				__CurrentState = 60;
				break;
			}
		case 83:
			{
				__CurrentState = 63;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABF_A_1_C__pf4220807709::bpf__ExecuteUbergraph_BF_A_1__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	Abp_falsehitParticle_C__pf479369278* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	Abp_falsehitParticle_C__pf479369278* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpf__ResetCombo__pf();
				}
				__CurrentState = 6;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__WrongAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf = bpv__WrongAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abp_falsehitParticle_C__pf479369278::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 10:
			{
				if(::IsValid(bpv__WrongAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf = bpv__WrongAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<Abp_falsehitParticle_C__pf479369278>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				b0l__Temp_int_Variable__pf = 0;
				__CurrentState = 7;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable_1__pf, 1);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 16:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, b0l__Temp_int_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_1__pf))
				{
					b0l__CallFunc_Array_Get_Item_1__pf->bpf__ResetCombo__pf();
				}
				__CurrentState = 15;
				break;
			}
		case 18:
			{
				if(::IsValid(bpv__WrongAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf = bpv__WrongAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abp_falsehitParticle_C__pf479369278::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 19:
			{
				if(::IsValid(bpv__WrongAnswer__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf = bpv__WrongAnswer__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<Abp_falsehitParticle_C__pf479369278>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 20:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				b0l__Temp_int_Variable_1__pf = 0;
				__CurrentState = 16;
				break;
			}
		case 50:
			{
				__StateStack.Push(51);
				__CurrentState = 56;
				break;
			}
		case 51:
			{
			}
		case 52:
			{
				b0l__K2Node_DynamicCast_AsLeft_Hand_Check_1__pf = Cast<ALeftHandCheck_C__pf2575722628>(b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsLeft_Hand_Check_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 53:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 54:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsLeft_Hand_Check_1__pf))
				{
					b0l__K2Node_DynamicCast_AsLeft_Hand_Check_1__pf->bpf__L_ComboScore__pf();
				}
			}
		case 55:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AComboUI_C__pf692302020::StaticClass(), /*out*/ TArrayCaster<AComboUI_C__pf692302020*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
				__CurrentState = 21;
				break;
			}
		case 56:
			{
				b0l__K2Node_DynamicCast_AsRight_Hand_Check__pf = Cast<ARightHandCheck_C__pf2575722628>(b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsRight_Hand_Check__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 57:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABF_A_1_C__pf4220807709::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 58:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Hand_Check__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Hand_Check__pf->bpf__R_ComboScore__pf();
				}
			}
		case 59:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AComboUI_C__pf692302020::StaticClass(), /*out*/ TArrayCaster<AComboUI_C__pf692302020*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
				__CurrentState = 12;
				break;
			}
		case 82:
			{
				__CurrentState = 50;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABF_A_1_C__pf4220807709::bpf__ExecuteUbergraph_BF_A_1__pf_3(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
			}
		case 2:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				b0l__Temp_byte_Variable__pf = EMoveComponentAction::Move;
			}
		case 14:
			{
				UKismetSystemLibrary::MoveComponentTo(bpv__AllAnswer__pf, FVector(-1800.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, false, 3.000000, false, b0l__Temp_byte_Variable__pf, FLatentActionInfo(-1, 1054793835, TEXT("ExecuteUbergraph_BF_A_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				__StateStack.Push(48);
				__CurrentState = 13;
				break;
			}
		case 48:
			{
			}
		case 49:
			{
				UKismetSystemLibrary::Delay(this, 4.500000, FLatentActionInfo(1, -1559691059, TEXT("ExecuteUbergraph_BF_A_1_3"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				__CurrentState = 47;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABF_A_1_C__pf4220807709::bpf__BndEvt__CorrectAnswer_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__25;
	T__Local__25& bpp__SweepResult__pf = *const_cast<T__Local__25 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BF_A_1__pf_1(83);
}
void ABF_A_1_C__pf4220807709::bpf__BndEvt__WrongAnswer_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__26;
	T__Local__26& bpp__SweepResult__pf = *const_cast<T__Local__26 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep_1__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult_1__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BF_A_1__pf_2(82);
}
void ABF_A_1_C__pf4220807709::bpf__BndEvt__WrongAnswer1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__27;
	T__Local__27& bpp__SweepResult__pf = *const_cast<T__Local__27 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep_2__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult_2__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BF_A_1__pf_0(81);
}
void ABF_A_1_C__pf4220807709::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BF_A_1__pf_3(62);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABF_A_1_C__pf4220807709::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat_3.M_SplineArcMat_3 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/131657__bertrof__game-sound-wrong.131657__bertrof__game-sound-wrong 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/131660__bertrof__game-sound-correct.131660__bertrof__game-sound-correct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABF_A_1_C__pf4220807709::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{12, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Asset/Particle/P_Cube_Mesh_Test_3.P_Cube_Mesh_Test_3 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/StarterBundle/ModularSciFiMats/Materials/Decals/Words/MI_Cell.MI_Cell 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat_2.M_SplineArcMat_2 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Asset/Particle/P_Cube_Mesh_Test_4.P_Cube_Mesh_Test_4 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Font/Button_TextMaterial.Button_TextMaterial 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Font/Button_DistanceField.Button_DistanceField 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Asset/Particle/bp_falsehitParticle.bp_falsehitParticle_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/UI/bluprint/ComboUI.ComboUI_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HandCheck/LeftHandCheck.LeftHandCheck_C 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HandCheck/RightHandCheck.RightHandCheck_C 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Asset/Particle/bp_correcthitParticle.bp_correcthitParticle_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABF_A_1_C__pf4220807709
{
	FRegisterHelper__ABF_A_1_C__pf4220807709()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Answer/E_BuildInFn/Blueprint/BF_A_1"), &ABF_A_1_C__pf4220807709::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABF_A_1_C__pf4220807709 Instance;
};
FRegisterHelper__ABF_A_1_C__pf4220807709 FRegisterHelper__ABF_A_1_C__pf4220807709::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
