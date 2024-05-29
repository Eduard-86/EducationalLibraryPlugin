// Copyright Epic Games, Inc. All Rights Reserved.

#include "EducationalLibraryPluginBPLibrary.h"
#include "EducationalLibraryPlugin.h"
#include "Math/UnrealMathUtility.h"

UEducationalLibraryPluginBPLibrary::UEducationalLibraryPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UEducationalLibraryPluginBPLibrary::VectorLength(FVector vector)
{
	// 
	// FMath::Sqrt(10.f);

	// 
	// FMath::Pow(6.f, 2.f);

	float SumPow = FMath::Pow(vector.X, 2.f) + FMath::Pow(vector.Y, 2.f) + FMath::Pow(vector.Z, 2.f);

	return FMath::Sqrt(
		FMath::Pow(vector.X, 2.f) +
		FMath::Pow(vector.Y, 2.f) +
		FMath::Pow(vector.Z, 2.f));
}

FVector UEducationalLibraryPluginBPLibrary::MultiplicationScalar(float scalar, FVector vector)
{
	return FVector(vector.X * scalar, vector.Y * scalar, vector.Z * scalar);
}

FVector UEducationalLibraryPluginBPLibrary::DivisionScalar(float scalar, FVector vector)
{
	return FVector(vector.X / scalar, vector.Y / scalar, vector.Z / scalar);
}

FVector UEducationalLibraryPluginBPLibrary::VectorNormalization(FVector vector)
{
	float temp = 1.f / VectorLength(vector);

	return MultiplicationScalar(temp, vector);
}

FVector UEducationalLibraryPluginBPLibrary::VectorSum(FVector vector1, FVector vector2)
{
	return FVector(
		vector1.X + vector2.X,
		vector1.Y + vector2.Y,
		vector1.Z + vector2.Z);
}

FVector UEducationalLibraryPluginBPLibrary::VectorDifference(FVector vector1, FVector vector2)
{
	return FVector(
		vector1.X - vector2.X,
		vector1.Y - vector2.Y,
		vector1.Z - vector2.Z);
}