/*
 * replace_numbers.cpp
 *
 *  Created on: 01-Feb-2017
 *      Author: ahussain
 */



#include <iostream>
#include <string>
#include <algorithm>
#include "read_fasta_file.h"

int replace_numbers_with_chars()
{
	for (std::size_t i = 0; i < sequence_content.size(); ++i){
	    switch (sequence_content[i]){
	    case '1':
	    	sequence_content[i] = 'A';
	        break;
	    case '2':
	    	sequence_content[i] = 'C';
	        break;
	    case '3':
	    	sequence_content[i] = 'G';
	        break;
	    case '4':
	    	sequence_content[i] = 'T';
	        break;
	    }
	}
	//std::cout << sequence_content << std::endl;
	return 0;
}
