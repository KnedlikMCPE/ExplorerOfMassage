// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneSubsystem.h"

AFGDroneSubsystem::AFGDroneSubsystem() : Super() {
	this->mDroneStationDefaultNamePrefix = "Drone Port";
	this->bAlwaysRelevant = true;
	this->SetReplicates(true);
}
AFGDroneSubsystem* AFGDroneSubsystem::Get(UWorld* world){ return nullptr; }
AFGDroneSubsystem* AFGDroneSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGDroneSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGDroneSubsystem::AddStation( AFGBuildableDroneStation* station){ }
void AFGDroneSubsystem::RemoveStation( AFGBuildableDroneStation* station){ }
void AFGDroneSubsystem::SearchStations(AFGDroneStationInfo* originStation, AFGDroneStationInfo* hostStation, FString filter, bool connectionsOnly, bool excludeOrigin, bool pairedFirst, bool includeEmptyStation, TArray< FDroneStationData >& result){ }
void AFGDroneSubsystem::Server_PairStations(AFGDroneStationInfo* origin, AFGDroneStationInfo* target){ }
void AFGDroneSubsystem::SetUniqueStationName(AFGDroneStationInfo* stationInfo, const FString& prefix) const{ }
bool AFGDroneSubsystem::TrySetStationName(AFGDroneStationInfo* stationInfo, const FString& name) const{ return bool(); }