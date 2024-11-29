#include "AbilityCharacter.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"

// Sets default values
AAbilityCharacter::AAbilityCharacter()
{
	// Set this character to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	// Create Ability System Component
	AbilitySystemComponent = CreateDefaultSubobject<UEnhancedInputAbilitySystem>(TEXT("EnhancedInputAbilitySystem"));
}

// Called when the game starts or when spawned
void AAbilityCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsValid(AbilitySystemComponent))
	{
		//AbilitySystemComponent->InitAbilityActorInfo(this, this);
		AttributeSet = AbilitySystemComponent->GetSet<UMyAttributeSet>();
	}
}

// Called every frame
void AAbilityCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAbilityCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind input for abilities (optional, you can implement ability binding logic here)
}

// Get the Ability System Component
UEnhancedInputAbilitySystem* AAbilityCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


