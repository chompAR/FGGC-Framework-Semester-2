#include "GameObject.h"

GameObject::GameObject(string type, Transform* transform, Appearance* appearance, ParticleModel* particleModel)
					: _transform(transform), _type(type), _appearance(appearance), _particleModel(particleModel)
{

	
}

GameObject::~GameObject()
{
}

void GameObject::Update(float t)
{
	_transform->Update(t);
}

void GameObject::Draw(ID3D11DeviceContext * pImmediateContext)
{
	_appearance->Draw(pImmediateContext);
}
