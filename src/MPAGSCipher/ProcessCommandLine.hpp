#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>
struct ProgramSettings{
    /// Is help requested
    bool helpRequested{false};
    /// Is version requested
    bool versionRequested{false};
    /// Input file name
    std::string inputFile;
    /// Output file name
    std::string outputFile;
    /// cipher key as unsigned long
    std::string cipherkey;
    /// encrypt/decrypt
    bool encrypt{true};
};


/**
 * \file ProcessCommandLine.hpp
 * \brief Contains the declaration of the function for processing the command-line arguments
 */

/**
 * \brief Processes the command-line arguments and modifies accordingly the program settings
 *
 * \param cmdLineArgs The command-line arguments to be processed
 * \param ProgramSettings The program settings, containing options to 
 * display help,
 * display version,
 * pass input/output files
 * specify a cipher key
 * specify encyption/decryption
 * \return true if the arguments could be successfully parsed, false otherwise
 */
bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings&);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
