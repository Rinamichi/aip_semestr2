#include <iostream>
#include "fstream"

int main()
{
    //std::cout << "    ***  " << std::endl
    //          << "   *  ** " << std::endl
    //          << "      ** " << std::endl
    //          << "     * * " << std::endl
    //          << "     * * " << std::endl
    //          << "   **  * " << std::endl
    //          << "   **  * " << std::endl
    //          << "   *   * " << std::endl
    //          << "  ****** " << std::endl
    //          << "  *    * " << std::endl
    //          << "  *    * " << std::endl
    //          << "**     **" << std::endl;


        std::ofstream outFile;
        outFile.open("Task_1.txt");

    outFile << "    ***  " << std::endl
        << "   *  ** " << std::endl
        << "      ** " << std::endl
        << "     * * " << std::endl
        << "     * * " << std::endl
        << "   **  * " << std::endl
        << "   **  * " << std::endl
        << "   *   * " << std::endl
        << "  ****** " << std::endl
        << "  *    * " << std::endl
        << "  *    * " << std::endl
        << "**     **" << std::endl;

        outFile.close();



    std::getchar();
    std::getchar();

    return 0;
}