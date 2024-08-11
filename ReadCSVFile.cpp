// ReadCSVFile.cpp
// https://github.com/ben-strasser/fast-cpp-csv-parser


#include "csv.h"
#include <iostream>

void readCSVFile() {
    io::CSVReader<3> in("csv01.csv");
    in.read_header(io::ignore_extra_column, "header_1", "header_2", "header_3");
    std::string header_1; std::string header_2; std::string header_3;

    std::cout << "header_1     " << "header_2     " << "header_3     " << std::endl;
    while(in.read_row(header_1, header_2, header_3))
    {
        // write output
        std::cout << header_1 << "     " << header_2 << "     " << "     " << header_3 << "     " <<  std::endl;
    }
}
