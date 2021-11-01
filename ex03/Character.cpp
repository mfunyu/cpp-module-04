#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < MAX_MATERIALS; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < MAX_MATERIALS; i++)
	{
		delete _inventory[i];
	}
}

Character::Character(const Character &other)
{
	Character();
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		*_inventory = *(other._inventory);
	}
	return *this;
}

Character::Character(std::string name) : _name(name)
{
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < MAX_MATERIALS; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	_inventory[idx]->use(target);
}
