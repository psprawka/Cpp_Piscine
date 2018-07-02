#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define MAX_SLOTS 4

class AMateria;

class Character : public ICharacter
{
public:
	Character();
	~Character();
	Character(std::string name);
	Character(Character const &ch);

	Character &				operator=(Character const &rhs);

	void					equip(AMateria *m);
	void					unequip(int idx);
	void					use(int idx, ICharacter &target);

	AMateria const *		getMateriaSlot(int idx) const;
	std::string const &		getName() const;
	
protected:
	AMateria		*_slots[MAX_SLOTS];
	std::string		_name;
	int				_equipped;
};

#endif