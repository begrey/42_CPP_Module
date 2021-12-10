#ifndef __MUTANT_STACK_H__
# define __MUTANT_STACK_H__

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
        MutantStack& operator=(const MutantStack& origin);
		MutantStack(void);
		MutantStack(const MutantStack& origin);
		~MutantStack(void);

		using iterator = typename std::stack<T>::container_type::iterator;
		using const_iterator = typename std::stack<T>::container_type::const_iterator;
		using reverse_iterator = typename std::stack<T>::container_type::reverse_iterator;
		using const_reverse_iterator = typename std::stack<T>::container_type::const_reverse_iterator;

		iterator							begin(void);
		iterator							end(void);
		const_iterator						cbegin(void) const;
		const_iterator						cend(void) const;
		reverse_iterator					rbegin(void);
		reverse_iterator					rend(void);
		const_reverse_iterator				crbegin(void) const;
		const_reverse_iterator				crend(void) const;
};
