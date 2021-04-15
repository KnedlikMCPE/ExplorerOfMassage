// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInventoryComponentEquipment.h"

UFGInventoryComponentEquipment::UFGInventoryComponentEquipment() : Super() {
	this->mActiveEquipmentIndex = -1;
	this->mDefaultInventorySize = 1;
	this->mCanBeRearrange = true;
	this->SetIsReplicatedByDefault(true);
}
AFGEquipment* UFGInventoryComponentEquipment::GetEquipmentInInventory() const{ return nullptr; }
EEquipmentSlot UFGInventoryComponentEquipment::GetEquipmentSlotEnum() const{ return EEquipmentSlot(); }
void UFGInventoryComponentEquipment::SetEquipmentSlotEnum(EEquipmentSlot inSlot){ }
void UFGInventoryComponentEquipment::SetOverrideEquipment(AFGEquipment* equipment){ }
void UFGInventoryComponentEquipment::CycleEquipment(int32 dir){ }
bool UFGInventoryComponentEquipment::ContainsItemTypeAndHasEnoughSpaceForItem(FInventoryItem item){ return bool(); }
void UFGInventoryComponentEquipment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGInventoryComponentEquipment::OnItemsAdded(int32 idx, int32 num){ }
void UFGInventoryComponentEquipment::OnItemsRemoved(int32 index, int32 num, FInventoryItem item){ }
void UFGInventoryComponentEquipment::ActivateEquipment(){ }
void UFGInventoryComponentEquipment::RemoveEquipment(FInventoryItem item){ }
bool UFGInventoryComponentEquipment::FilterEquipmentClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
AFGCharacterPlayer* UFGInventoryComponentEquipment::GetOwningCharacter(){ return nullptr; }