/*
* Copyright (c) 2008-2017, NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA CORPORATION and its licensors retain all intellectual property
* and proprietary rights in and to this software, related documentation
* and any modifications thereto.  Any use, reproduction, disclosure or
* distribution of this software and related documentation without an express
* license agreement from NVIDIA CORPORATION is strictly prohibited.
*/

#ifndef INTER_COLLISION_SCENE_H
#define INTER_COLLISION_SCENE_H

#include "scene/Scene.h"
#include <foundation/PxVec3.h>

class InterCollisionScene : public Scene
{
public:

	InterCollisionScene(SceneController* sceneController): Scene(sceneController) {}

	void initializeCloth(int index, physx::PxMat44 transform);
	virtual void onInitialize() override;

private:
	nv::cloth::Fabric* mFabric[3];
	nv::cloth::Solver* mSolver;
	ClothActor* mClothActor[3];
};


#endif