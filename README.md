# Graph-K-coloring-problem

The graph coloring problem is a well-known problem in computer science and graph theory. Given an undirected graph G, the problem is to assign a color to each vertex of the graph such that no adjacent vertices have the same color. The minimum number of colors required to color a graph is called the chromatic number of the graph.

The problem is NP-hard, meaning that it is unlikely that there is a polynomial-time algorithm that can solve it exactly. However, several algorithms have been proposed to solve it approximately, including backtracking, genetic algorithms, simulated annealing, and tabu search.

One of the most commonly used algorithms for the graph coloring problem is the backtracking algorithm. The basic idea of this algorithm is to recursively assign colors to vertices, backtracking when a conflict i




This code implements a backtracking algorithm for the graph coloring problem. Given an undirected graph and the number of available colors, the algorithm tries to find a valid coloring of the graph such that no two adjacent vertices have the same color.

The main function calls the getinputgraph() function to read in the graph and the number of colors, and then calls the backtrackcoloring() function to find all valid colorings of the graph.

The backtrackcoloring() function uses a stack to keep track of the current state of the search. The stack contains a list of vertices and their colors. The algorithm starts by coloring the first vertex with the first color, and then tries to recursively color the remaining vertices. If a valid coloring is found, it is printed to the console. If not, the algorithm backtracks to the previous vertex and tries a different color.

The givencolorworks() function checks whether a given color can be assigned to a vertex. It does this by checking whether any adjacent vertices already have that color.

The code appears to be correctly implemented, but it may not be very efficient for large graphs or many colors, as it does not use any heuristics or optimizations. Additionally, the code does not handle some possible error conditions, such as invalid graph inputs or memory allocation failures.
