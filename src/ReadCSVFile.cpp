// ReadCSVFile.cpp
// https://github.com/ben-strasser/fast-cpp-csv-parser


#include "../include/csv.h"
#include <iomanip>
#include <iostream>

void readCSVFile() {
    std::string header_1 = "Device Name";
    std::string header_2 = "Serial Number";
    std::string header_3 = "License Number";

    io::CSVReader<3> in("csv01.csv");
    in.read_header(io::ignore_extra_column, header_1, header_2, header_3);
    std::string h_1; std::string h_2; std::string h_3;

    // std::cout << header_1 << "  " << header_2 << "  " << "  " << header_3 <<  std::endl;
    while(in.read_row(h_1, h_2, h_3))
    {
        // write output
        std::cout << header_1 << ":      " << h_1 << std::endl;
        std::cout << header_2 << ":    " << h_2 << std::endl;
        std::cout << header_3 << ":   " << h_3 << std::endl;
        std::cout << std::endl;
    }
}
