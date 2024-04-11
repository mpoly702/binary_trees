0x1D. C - Binary trees

AUTHORS
GODFREY ORIAZOWAN
GRACE DAJAKPOME

Binary trees are a commonly used type, which constrain the number of children for each parent to at most two. When the order of the children is specified, this data structure corresponds to an ordered tree in graph theory. A value or pointer to other data may be associated with every node in the tree, or sometimes only with the leaf nodes, which have no children nodes.

The abstract data type (ADT) can be represented in a number of ways, including a list of parents with pointers to children, a list of children with pointers to parents, or a list of nodes and a separate list of parent-child relations (a specific type of adjacency list). Representations might also be more complicated, for example using indexes or ancestor lists for performance.

Trees as used in computing are similar to but can be different from mathematical constructs of trees in graph theory, trees in set theory, and trees in descriptive set theory.

Applications
Trees are commonly used to represent or manipulate hierarchical data in applications such as:

File systems for:
Directory structure used to organize subdirectories and files (symbolic links create non-tree graphs, as do multiple hard links to the same file or directory)
The mechanism used to allocate and link blocks of data on the storage device
Class hierarchy or "inheritance tree" showing the relationships among classes in object-oriented programming; multiple inheritance produces non-tree graphs
Abstract syntax trees for computer languages
Natural language processing:
Parse trees
Modeling utterances in a generative grammar
Dialogue tree for generating conversations
Document Object Models ("DOM tree") of XML and HTML documents
Search trees store data in a way that makes an efficient search algorithm possible via tree traversal
A binary search tree is a type of binary tree
Representing sorted lists of data
Computer-generated imagery:
Space partitioning, including binary space partitioning
Digital compositing
Storing Barnes–Hut trees used to simulate galaxies
Implementing heaps
Nested set collections
Hierarchical taxonomies such as the Dewey Decimal Classification with sections of increasing specificity.
Hierarchical temporal memory
Genetic programming
Hierarchical clustering
Trees can be used to represent and manipulate various mathematical structures, such as:

Paths through an arbitrary node-and-edge graph (including multigraphs), by making multiple nodes in the tree for each graph node used in multiple paths
Any mathematical hierarchy
Tree structures are often used for mapping the relationships between things, such as:

Components and subcomponents which can be visualized in an exploded-view drawing
Subroutine calls used to identify which subroutines in a program call other subroutines non recursively
Inheritance of DNA among species by evolution, of source code by software projects (e.g. Linux distribution timeline), of designs in various types of cars, etc.
The contents of hierarchical namespaces
JSON and YAML documents can be thought of as trees, but are typically represented by nested lists and dictionaries.

Terminology
A node is a structure which may contain data and connections to other nodes, sometimes called edges or links. Each node in a tree has zero or more child nodes, which are below it in the tree (by convention, trees are drawn with descendants going downwards). A node that has a child is called the child's parent node (or superior). All nodes have exactly one parent, except the topmost root node, which has none. A node might have many ancestor nodes, such as the parent's parent. Child nodes with the same parent are sibling nodes. Typically siblings have an order, with the first one conventionally drawn on the left. Some definitions allow a tree to have no nodes at all, in which case it is called empty.

An internal node (also known as an inner node, inode for short, or branch node) is any node of a tree that has child nodes. Similarly, an external node (also known as an outer node, leaf node, or terminal node) is any node that does not have child nodes.

The height of a node is the length of the longest downward path to a leaf from that node. The height of the root is the height of the tree. The depth of a node is the length of the path to its root (i.e., its root path). Thus the root node has depth zero, leaf nodes have height zero, and a tree with only a single node (hence both a root and leaf) has depth and height zero. Conventionally, an empty tree (tree with no nodes, if such are allowed) has height −1.

Each non-root node can be treated as the root node of its own subtree, which includes that node and all its descendants.[a][2]

Other terms used with trees:

Neighbor
Parent or child.
Ancestor
A node reachable by repeated proceeding from child to parent.
Descendant
A node reachable by repeated proceeding from parent to child. Also known as subchild.
Degree
For a given node, its number of children. A leaf, by definition, has degree zero.
Degree of tree
The degree of a tree is the maximum degree of a node in the tree.
Distance
The number of edges along the shortest path between two nodes.
Level
The level of a node is the number of edges along the unique path between it and the root node.[3] This is the same as depth.
Width
The number of nodes in a level.
Breadth
The number of leaves.
Forest
A set of one or more disjoint trees.
Ordered tree
A rooted tree in which an ordering is specified for the children of each vertex.
Size of a tree
Number of nodes in the tree.