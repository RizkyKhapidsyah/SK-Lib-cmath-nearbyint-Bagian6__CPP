#pragma warning(disable:4996)
#pragma fenv_access(on)

#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::fesetround(FE_TONEAREST);
    std::cout << "rounding to nearest: \n"
        << "nearbyint(+2.3) = " << std::nearbyint(2.3)
        << "  nearbyint(+2.5) = " << std::nearbyint(2.5)
        << "  nearbyint(+3.5) = " << std::nearbyint(3.5) << '\n'
        << "nearbyint(-2.3) = " << std::nearbyint(-2.3)
        << "  nearbyint(-2.5) = " << std::nearbyint(-2.5)
        << "  nearbyint(-3.5) = " << std::nearbyint(-3.5) << '\n';

    std::fesetround(FE_DOWNWARD);
    std::cout << "rounding down:\n"
        << "nearbyint(+2.3) = " << std::nearbyint(2.3)
        << "  nearbyint(+2.5) = " << std::nearbyint(2.5)
        << "  nearbyint(+3.5) = " << std::nearbyint(3.5) << '\n'
        << "nearbyint(-2.3) = " << std::nearbyint(-2.3)
        << "  nearbyint(-2.5) = " << std::nearbyint(-2.5)
        << "  nearbyint(-3.5) = " << std::nearbyint(-3.5) << '\n';

    std::cout << "nearbyint(-0.0) = " << std::nearbyint(-0.0) << '\n'
        << "nearbyint(-Inf) = " << std::nearbyint(-INFINITY) << '\n';

    _getch();
    return 0;
}