#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName)\
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GIBBABALL_API UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "AttributeSet")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Health);


	UPROPERTY(BlueprintReadOnly, Category = "AttributeSet")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Stamina);

	UPROPERTY(BlueprintReadOnly, Category = "AttributeSet")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Damage);

	UPROPERTY(BlueprintReadOnly, Category = "AttributeSet")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, MaxHealth);


	UPROPERTY(BlueprintReadOnly, Category = "AttributeSet")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, MaxStamina);
};
