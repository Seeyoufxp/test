// #include "head.h"

// int AbstractCalculator::getResult()
// {
//     return 0;
// }

// int AddCalculator::getResult()
// {
//     return m_Num1 + m_Num2;
// }

// int SubCalculator::getResult()
// {
//     return m_Num1 - m_Num2;
// }

// int MulCalculator::getResult()
// {
//     return m_Num1 * m_Num2;
// }

// void test01()
// {
//     AbstractCalculator *abc = new AddCalculator;
//     abc->m_Num1 = 10;
//     abc->m_Num2 = 10;
//     std::cout << abc->getResult() << std::endl;
//     delete abc;
//     abc = NULL;
//     abc = new SubCalculator;
//     abc->m_Num1 = 10;
//     abc->m_Num2 = 10;
//     std::cout << abc->getResult() << std::endl;
//     delete abc;
//     abc = NULL;
//     abc = new MulCalculator;
//     abc->m_Num1 = 10;
//     abc->m_Num2 = 10;
//     std::cout << abc->getResult() << std::endl;
//     delete abc;
//     abc = NULL;
// }
