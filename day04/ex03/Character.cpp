#include "Character.hpp"

Character::Character(std::string name) :
	_name(name), _equipped(0)
{
	;
}

Character::~Character()
{
	for (int i = 0; i < MAX_SLOTS; i++)
		if (this->_slots[i])
			this->_slots[i] = NULL;
}

Character::Character(Character const &ch)
{
	*this = ch;
}

Character			&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();

		for (int i = 0; i < MAX_SLOTS; i++)
		{
			// AMateria const		&slot = rhs.getMateriaSlot(i);
			if (rhs._slots[i])
				this->_slots[i] = rhs._slots[i]->clone();
		}
	}
	return (*this);
}

void				Character::equip(AMateria *m)
{
	if (m && this->_equipped < MAX_SLOTS)
	{
		for (int i = 0; i < MAX_SLOTS; i++)
		{
			if (!this->_slots[i])
			{
				this->_slots[i] = m;
				break;
			}
		}
		this->_equipped++;
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < MAX_SLOTS && this->_slots[idx])
		this->_slots[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < MAX_SLOTS && this->_slots[idx])
	{
		(void)this->_slots[idx];
		// std::cout << *(this->_slots[idx]) << std::endl;
		this->_slots[idx]->use(target);
	}
}

AMateria const		*Character::getMateriaSlot(int idx) const
{
	return (this->_slots[idx]);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}