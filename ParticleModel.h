#pragma once
#include "Transform.h"
class ParticleModel
{
private:
	Transform* _transform;
public:
	ParticleModel(Transform* transform);
	~ParticleModel();
	void Move();

};

