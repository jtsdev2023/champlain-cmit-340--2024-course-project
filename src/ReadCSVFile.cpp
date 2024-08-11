// ReadCSVFile.cpp
// https://github.com/ben-strasser/fast-cpp-csv-parser


#include <string>
#include <vector>
#include <iomanip>
#include <iostream>

#include "../include/csv.h"
// #include "../include/ReadCSVFile.h"


std::vector<std::string> readCSVFile(std::string inputFile) {

    io::CSVReader<3> in(inputFile);
    // in.read_header(io::ignore_extra_column, header_1, header_2, header_3);
    in.read_header(io::ignore_no_column);
    std::string h_1; std::string h_2; std::string h_3; std::string h_4; std::string h_5;
    std::vector<std::string> fileData;

    while(in.read_row(h_1, h_2, h_3, h_4, h_5))
    {
        fileData.push_back(h_1);
        fileData.push_back(h_2);
        fileData.push_back(h_3);
        fileData.push_back(h_4);
        fileData.push_back(h_5);
    }

    // std::cout << header_1 << "  " << header_2 << "  " << "  " << header_3 <<  std::endl;
    // while(in.read_row(h_1, h_2, h_3))
    // {
    //     // write output
    //     std::cout << header_1 << ":      " << h_1 << std::endl;
    //     std::cout << header_2 << ":    " << h_2 << std::endl;
    //     std::cout << header_3 << ":   " << h_3 << std::endl;
    //     std::cout << std::endl;
    // }

    return fileData;
}
