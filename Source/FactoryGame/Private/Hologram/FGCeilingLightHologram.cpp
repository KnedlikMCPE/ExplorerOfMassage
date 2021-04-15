// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGCeilingLightHologram.h"
#include "Buildables/FGBuildableWall.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGCeilingLightHologram::AFGCeilingLightHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
}
bool AFGCeilingLightHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGCeilingLightHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGCeilingLightHologram::CheckValidFloor(){ }
void AFGCeilingLightHologram::CheckClearance(){ }
