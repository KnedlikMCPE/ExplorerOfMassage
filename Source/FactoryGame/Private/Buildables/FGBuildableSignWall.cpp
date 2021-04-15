// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableSignWall.h"
#include "Hologram/FGWallHologram.h"
#include "Components/TextRenderComponent.h"
#include "Components/SceneComponent.h"

AFGBuildableSignWall::AFGBuildableSignWall() : Super() {
	this->mSignDisplayRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SignDisplayRoot")); this->mSignDisplayRoot->SetupAttachment(this->RootComponent);
	this->mTextDisplayRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TextDisplayRoot")); this->mTextDisplayRoot->SetupAttachment(this->mSignDisplayRoot);
	this->mTextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextMeshFront")); this->mTextRenderComponent->SetupAttachment(this->mTextDisplayRoot);
	this->mHologramClass = AFGWallHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->SetReplicates(true);
	this->NetDormancy = DORM_Initial;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableSignWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableSignWall::BeginPlay(){ }
void AFGBuildableSignWall::SetSignData(FSignWallData signData, bool bUpdate){ }
void AFGBuildableSignWall::UpdateSignElements(){ }
void AFGBuildableSignWall::UpdateBackgroundMaterial(){ }
void AFGBuildableSignWall::UpdateSignText(){ }
const FSignWallData& AFGBuildableSignWall::GetSignData(){ return *(new FSignWallData); }
void AFGBuildableSignWall::OnRep_SignData(){ }