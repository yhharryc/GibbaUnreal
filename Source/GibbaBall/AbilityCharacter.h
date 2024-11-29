#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h" // For IAbilitySystemInterface
#include "MyAttributeSet.h"
#include "EnhancedInputAbilitySystem.h"
#include "AbilityCharacter.generated.h"

// Forward declarations
class UEnhancedInputAbilitySystem;
class UAttributeSet;

UCLASS()
class GIBBABALL_API AAbilityCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAbilityCharacter();

protected:
	// Ability System Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	UEnhancedInputAbilitySystem* AbilitySystemComponent;

	// Attribute Set
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gamplay Ability System", meta = (AllowPrivateAccess = "true"))
	const UMyAttributeSet* AttributeSet;

	virtual void BeginPlay() override;

public:
	// Implement IAbilitySystemInterface
	virtual UEnhancedInputAbilitySystem* GetAbilitySystemComponent() const override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


};
