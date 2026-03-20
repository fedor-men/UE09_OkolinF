
#pragma once
#include <iostream>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UE09_OkolinF/UE09_OkolinF.h"


#include "HW_Actor.generated.h"

UCLASS(Blueprintable)
class UE09_OKOLINF_API AHW_Actor : public AActor
{
	GENERATED_BODY()

	
public:	
	
	AHW_Actor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE09")
	int Health = 0;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UE09")
	int Damage = 1;
	
 	UPROPERTY(EditAnywhere, Category = "UE09")
 	float Stamina = 0.5;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UE09")
	int Level = 0;

 	UPROPERTY(VisibleInstanceOnly, Category = "UE09") 
 	bool ChangeWeapon = 1;

	
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "UE09") 
	float MaxDistance = 400.0f;


	//--------------  Funtions ------------

	

protected:
	virtual void BeginPlay() override;

 	UFUNCTION(BlueprintCallable, BlueprintPure)
 	int LimitHealthFunction() const;

UFUNCTION(BlueprintCallable,BlueprintPure)
FVector LineTraceFunction() const;

public:	
	
	virtual void Tick(float DeltaTime) override;

};
