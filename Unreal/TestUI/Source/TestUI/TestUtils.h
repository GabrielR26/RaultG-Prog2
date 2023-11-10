// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Kismet/KismetMathLibrary.h"

#define LOG(cat, msg, ...) UE_LOG(cat, Display, TEXT(msg), __VA_ARGS__)
#define LOG_W(cat, msg, ...) UE_LOG(cat, Warning, TEXT(msg), __VA_ARGS__)
#define LOG_E(cat, msg, ...) UE_LOG(cat, Error, TEXT(msg), __VA_ARGS__)
#define LOG_SCREEN(time, color, msg, ...) GEngine->AddOnScreenDebugMessage(-1, time, color, FString::Printf(TEXT(msg), __VA_ARGS__))

#define WORLD GetWorld()
#define OWNER GetOwner()
#define DELTATIME WORLD->DeltaTimeSeconds
#define FIRST_PLAYER_CONTROL WORLD->GetFirstPlayerController()
#define USE_DEBUG 1

#define ATTACH_TO(owner, to) owner->SetupAttachment(to)

#define DRAW_SPHERE(loc, radius, color, size) \
	if (USE_DEBUG) DrawDebugSphere(WORLD, loc, radius, 20, color, false, -1.0f, 0U, size)
#define DRAW_LINE(start, end, color, size) \
	if (USE_DEBUG)  DrawDebugLine(WORLD, start, end, color, false, -1.0f, 0U, size)
#define DRAW_BOX(loc, width, color, size) \
	if (USE_DEBUG)  DrawDebugBox(WORLD, loc, FVector(width), color, false, -1.0f, 0U, size)
#define DRAW_TEXT(loc, text, color, size) \
	if (USE_DEBUG)  DrawDebugString(WORLD, loc, text, 0, color, DELTATIME, false, size)

#define LERP_COLOR(from, to, t) UKismetMathLibrary::LinearColorLerp(from.ReinterpretAsLinear(), to.ReinterpretAsLinear(), t).ToFColor(true);

#define TO_CHAR(string) *string
#define TO_STRING(notstring) notstring.ToString()
#define TO_CHAR_STR(text) TO_CHAR(TO_STRING(text))

#define BIND(del, Object, fct) del.AddDynamic(Object, fct)
#define INVOKE(del, ...) del.Broadcast(__VA_ARGS__)
