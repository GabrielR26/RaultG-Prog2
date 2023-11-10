// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CameraSettings.h"
#include "EnumCameraSettings.h"
#include "CameraFollowSettings.generated.h"

/**
 * 
 */
UCLASS()
class TRANSLATE_3C_API UCameraFollowSettings : public UCameraSettings
{
	GENERATED_BODY()
	
    UPROPERTY(EditAnywhere, Category = "settings") 
    TEnumAsByte<EMovementType> movementType;
    UPROPERTY(EditAnywhere, Category = "settings") 
    TEnumAsByte<OffsetType> offsetType;
    UPROPERTY(EditAnywhere, Category = "settings", meta= (UMin = -2000, Umax = 2000, ClampMin = -2000, ClampMax = 2000)) 
    float offsetX = 200;
    UPROPERTY(EditAnywhere, Category = "settings", meta= (UMin = -2000, Umax = 2000, ClampMin = -2000, ClampMax = 2000)) 
    float offsetY = 0;
    UPROPERTY(EditAnywhere, Category = "settings", meta= (UMin = -2000, Umax = 2000, ClampMin = -2000, ClampMax = 2000)) 
    float offsetZ = 0;
    UPROPERTY(EditAnywhere, Category = "settings", meta= (UMin = -2000, Umax = 2000, ClampMin = -2000, ClampMax = 2000)) 
    float cameraSpeed = 100;

public:
    FORCEINLINE EMovementType MovementType() const { return movementType; }
    FORCEINLINE OffsetType OffsetType() const {return offsetType;}
    FORCEINLINE float OffsetX() const { return offsetX; }
    FORCEINLINE float OffsetY() const { return offsetY; }
    FORCEINLINE float OffsetZ() const { return offsetZ; }
    FORCEINLINE float CameraSpeed() const { return cameraSpeed; }
};
