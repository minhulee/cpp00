/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBock.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhulee <minhulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:07:07 by minhulee          #+#    #+#             */
/*   Updated: 2024/08/06 16:50:27 by minhulee         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>

# include "./Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook				();

		void	RUN				(void);
		void	ADD				(void);
		void	SEARCH			(void) const;
		void	EXIT			(void) const;

	private:
		void	LOGO			(void) const;
		bool	isValidInput	(std::string &input) const;
		bool	isValidOrder	(std::string &input) const;
		void	PRINT			(std::string input, std::string end) const;
		void	PRINT			(int cursor) const;

		Contact	contacts[8];
		int		cursor;
		int		saved;
};