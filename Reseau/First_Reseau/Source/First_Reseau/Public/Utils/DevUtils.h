// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "kismet/KismetSystemLibrary.h"

#define LOG(msg) UKismetSystemLibrary::PrintString(this, msg)
#define LOG_C(msg, color) UKismetSystemLibrary::PrintString(this, msg, true, true, FLinearColor::color)
#define LOG_C_T(msg, color, time) UKismetSystemLibrary::PrintString(this, msg, true, true, FLinearColor::color, time)
