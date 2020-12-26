
#ifndef EXHAUSTIVE_SEARCH_H_
#define EXHAUSTIVE_SEARCH_H_

#include <vector>
#include "graph.h"

using Path = std::vector<size_t>;

double path_len(const Graph &graph, const Path &path);
std::pair<Path, double> exhaustive_search(const Graph &graph);

#endif  // EXHAUSTIVE_SEARCH_H_
