// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorItemRenderTargetWriter.h"

FBoxSphereBounds UFGConveyorItemInstanceComponent::CalcBounds(const FTransform& BoundTransform) const{ return FBoxSphereBounds(); }
void UFGConveyorItemInstanceComponent::UpdateCustomBounds(const TArray<FTransform>& InstanceLocations, int32 StartIndex, int32 EndIndex){ }
void UFGConveyorItemInstanceComponent::UpdateRenderState_internal(){ }
void FGConveyorItemRendererWriter::SetupBuffer(UTexture2D*& OutBufferTexture, TArray<uint8>& CPUDataBuffer, EPixelFormat Format, int32 SizeX, int32 SizeY, FName BufferName){ }
void FGConveyorItemRendererWriter::ResizeBuffer(UTexture2D*& OutBufferTexture, TArray<uint8>& CPUDataBuffer, int32 SizeX, int32 SizeY, FName BufferName){ }
void FGConveyorItemRendererWriter::FlushBuffer(UTexture2D*& OutBufferTexture, TArray<uint8>& CPUDataBuffer, FVector4 DefaultValue, bool bWriteToTexture2D){ }
void FGConveyorItemRendererWriter::PackValue(float valueX, float valueY, float valueZ, float valueW, TArray< uint8 > &TargetBuffer, int32 index, int32 components){ }
