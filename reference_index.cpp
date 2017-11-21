/*
 * reference_index.cpp
 *
 *  Created on: 24-Jan-2017
 *      Author: ahussain
 */




#include <iostream>
#include <string>
#include <algorithm>
#include <typeinfo>
#include <vector>
#include <boost/unordered_map.hpp>
#include "read_fasta_file.h"
#include "reference_index.h"
#include <utility>
#include <boost/bimap.hpp>
#include <boost/bimap/set_of.hpp>
#include <boost/bimap/multiset_of.hpp>

typedef boost::unordered_map<int, std::pair<int, unsigned long int>& > reference_map;
reference_map refhash;
namespace bimaps = boost::bimaps;
typedef boost::bimap<bimaps::set_of<unsigned long int>,
		bimaps::multiset_of<unsigned long int> > bimap_reference;
typedef bimap_reference::value_type position;
bimap_reference reference_index_vector;

int reference_index_hash(){
	int split = 18;
	reference_map::hasher fn = refhash.hash_function();
		for (unsigned int i=0; i < sequence_content.length(); i++ ){
				unsigned long int splitstr = atol(sequence_content.substr(i, split).c_str());
				reference_index_vector.insert(position(i, splitstr));
				i += split-1;
				}
		//auto it = reference_index_vector.left.at(0);
		//std::cout<<"first: "<<it<<std::endl;
		/*for( bimap_reference::const_iterator iter = reference_index_vector.begin(), iend = reference_index_vector.end();
		    iter != iend; ++iter )
		{
			std::cout << iter->left << " <--> "<< iter ->right <<std::endl;
		}
		*/
		return 0;
}
