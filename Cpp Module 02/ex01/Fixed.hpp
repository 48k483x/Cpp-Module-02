#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
    private:
        int value;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(int v);
        Fixed(float a);
        Fixed(const Fixed& other);
        Fixed& operator=( const Fixed& other );
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        int toInt( void ) const;
        float toFloat( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif