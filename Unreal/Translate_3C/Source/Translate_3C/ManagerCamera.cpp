// Fill out your copyright notice in the Description page of Project Settings.


#include "ManagerCamera.h"

UManagerCamera::UManagerCamera()
{
	cameras.Empty();
}

bool UManagerCamera::AddCamera(UCameraManagedComponent* _camera)
{
	if (cameras.Contains(_camera->GetID().ToLower()))
		return false;
	cameras.Add(_camera->GetID().ToLower(), _camera);
	return true;
}

void UManagerCamera::RemoveCamera(FString _id)
{
	if (!cameras.Contains(_id.ToLower()))
		return;
	cameras.Remove(_id.ToLower());
}

void UManagerCamera::EnableCamera(UCameraManagedComponent* _camera)
{
	if (!cameras.Contains(_camera->GetID().ToLower()))
		return;
	((UCameraManagedComponent*)cameras.Find(_camera->GetID().ToLower()))->Enable();
}

void UManagerCamera::EnableCamera(FString _id)
{
	if (!cameras.Contains(_id.ToLower()))
		return;
	((UCameraManagedComponent*)cameras.Find(_id.ToLower()))->Enable();
}

void UManagerCamera::DisableCamera(UCameraManagedComponent* _camera)
{
	if (!cameras.Contains(_camera->GetID().ToLower()))
		return;
	((UCameraManagedComponent*)cameras.Find(_camera->GetID().ToLower()))->Disable();
}

void UManagerCamera::DisableCamera(FString _id)
{
	if (!cameras.Contains(_id.ToLower()))
		return;
	((UCameraManagedComponent*)cameras.Find(_id.ToLower()))->Disable();
}

