#include "ParticleModel.h"


ParticleModel::ParticleModel(Transform* transform) : _transform(transform)
{
}

void ParticleModel::Move()
{
	XMFLOAT3 position = _transform->GetPosition();
	position.z -= 0.1f;
	_transform->SetPosition(position);
}

ParticleModel::~ParticleModel()
{
}
