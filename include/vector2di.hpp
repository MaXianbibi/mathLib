/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2d.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:34:32 by jmorneau          #+#    #+#             */
/*   Updated: 2023/04/24 19:53:49 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <cmath>
#include <iostream>

class vector2di
{	
public:
	int32_t x;
	int32_t y;

	vector2di();
	~vector2di();
	vector2di(int32_t _x, int32_t _y);
	vector2di(vector2di &cpy);



	vector2di operator=(const vector2di& cpy) const;
	vector2di operator+(const vector2di& other) const;
	vector2di operator-(const vector2di& other) const;
	
	vector2di operator*(const double scalar) const;
	vector2di operator/(const double scalar) const;

	double dot(const vector2di& other) const;
	double cross(const vector2di& other) const;
	double distance(const vector2di& other) const;
};

std::ostream& operator<<(std::ostream& os, const vector2di& v)
{
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

#endif