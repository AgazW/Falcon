/*
 * reference_index.h
 *
 *  Created on: 24-Jan-2017
 *      Author: ahussain
 */

#ifndef REFERENCE_INDEX_H_
#define REFERENCE_INDEX_H_


#include<iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <boost/unordered_map.hpp>
#include <boost/bimap.hpp>
#include <boost/bimap/set_of.hpp>
#include <boost/bimap/multiset_of.hpp>


int reference_index_hash();
typedef boost::unordered_map<int, std::pair<int, unsigned long int>& > reference_map;

namespace bimaps = boost::bimaps;
typedef boost::bimap<bimaps::set_of<unsigned long int>,
		bimaps::multiset_of<unsigned long int > > bimap_reference;
typedef bimap_reference::value_type position;
extern bimap_reference reference_index_vector;

//extern std::vector< std::vector<unsigned long int> > reference_index_vector;


#endif /* REFERENCE_INDEX_H_ */
