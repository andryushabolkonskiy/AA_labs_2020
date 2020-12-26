
#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>

class Graph {
public:
	static Graph generate_graph(size_t size, int noise);
public:
	explicit Graph(size_t vertices_count, double init_value = -1);

	void add_path(size_t vertex_from, size_t vertex_to, int length);
	std::vector<size_t> get_available_vertices(size_t vertex, const std::vector<size_t> &taboo_list) const;
	void set(size_t i, size_t j, double value);
	double get(size_t i, size_t j) const;
	size_t size() const;
private:
	std::vector<std::vector<double>> adjacency_matrix_;
};

#endif  // GRAPH_H_
