// Fill out your copyright notice in the Description page of Project Settings.

#include "ManagerCamera.h"
#include "CameraFollow.h"
#include "CameraOrbit.h"

bool UManagerCamera::AddCamera(UCameraManagedComponent* _camera)
{
	if (cameras.Contains(_camera->GetID().ToLower()))
		return false;
	cameras.Add(_camera->GetID().ToLower(), _camera);
	return true;
}

bool UManagerCamera::RemoveCamera(UCameraManagedComponent* _camera)
{
	if (!cameras.Contains(_camera->GetID().ToLower()))
		return false;
	cameras.Remove(_camera->GetID().ToLower());
	return true;
}

void UManagerCamera::EnableCamera(UCameraManagedComponent* _camera)
{
	if (!cameras.Contains(_camera->GetID().ToLower()))
		return;
	cameras[_camera->GetID().ToLower()]->Enable();
	//return EnableCamera(_camera->GetID());
}

void UManagerCamera::EnableCamera(FString _id)
{
	if (!cameras.Contains(_id.ToLower()))
		return;
	cameras[_id.ToLower()]->Enable();
}

void UManagerCamera::DisableCamera(UCameraManagedComponent* _camera)
{
	if (!cameras.Contains(_camera->GetID().ToLower()))
		return;
	cameras[_camera->GetID().ToLower()]->Disable();
	//return DisableCamera(_camera->GetID());
}

void UManagerCamera::DisableCamera(FString _id)
{
	if (!cameras.Contains(_id.ToLower()))
		return;
	cameras[_id.ToLower()]->Disable();
}

void UManagerCamera::SpawnCameraFollow(FString _id, AActor* _target)
{
	ACameraFollow* _camera = SpawnCamera<ACameraFollow>(cameraFollowRef, _id, _target);
}

void UManagerCamera::SpawnCameraOrbit(FString _id, AActor* _target)
{
	ACameraOrbit* _camera = SpawnCamera<ACameraOrbit>(cameraOrbitRef, _id, _target);
}
