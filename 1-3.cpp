#include <iostream>


/**
* \brief Функция, рассчитывающая общее сопротивление
* \param R1 - сопротивление 1 резистора
* \param R2 - сопротивление 2 резистора
* \param R3 - сопротивление 3 резистора
* \return значение общего сопротивления
**/


/**
* \brief Точка входа в программу
* \return Код ошибки (0-успех)
* */
int main() {
    double r1, r2, r3;
    std::cout << "VVedite R1 "; std::cin >> r1;
    std::cout << "VVedite R2 "; std::cin >> r2;
    std::cout << "VVedite R3 "; std::cin >> r3;
    std::cout << "Soprotivleniу ravno " << 1 / (1 / r1 + 1 / r2 + 1 / r3) << std::endl;
	return 0;
}



