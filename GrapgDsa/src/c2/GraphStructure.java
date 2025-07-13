package c2;

import java.util.*;

class Edge {
    int dest;
    int src;
    int weight;

    Edge(int src,int dest, int weight) {
        this.dest = dest;
        this.src=src;
        this.weight = weight;
    }

    int getDest() {
        return dest;
    }

    void setDest(int dest) {
        this.dest = dest;
    }

    int getWeight() {
        return weight;
    }

    int getSrc() {
		return src;
	}

	void setSrc(int src) {
		this.src = src;
	}

	void setWeight(int weight) {
        this.weight = weight;
    }
}

public class GraphStructure {
	
    int vertices;
    LinkedList<Edge>[] adjList;

  
    GraphStructure(int vertices) {
    	
        this.vertices = vertices;
        adjList = new LinkedList[vertices];

        for (int i = 0; i < vertices; i++) {
            adjList[i] = new LinkedList<>();
        }
    }

 
    public void addEdge(int src, int dest, int weight) {
    	
        adjList[src].add(new Edge(src,dest, weight));
    }


    public void displayGraph() {
        System.out.println("\nAdjacency List with Weights:");
        for (int i = 0; i < vertices; i++) 
        {
            System.out.print("Vertex is:" + i );
            
            for (Edge edge : adjList[i]) 
            {
                System.out.print("(" + edge.dest + ", w=" + edge.weight + ") ");
            }
            System.out.println();
        }
    }

 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

     
        System.out.print("Enter number of vertices: ");
        int v = sc.nextInt();

        System.out.print("Enter number of edges: ");
        int e = sc.nextInt();

        GraphStructure graph = new GraphStructure(v);

        System.out.println("Enter edges as: source destination weight");
        for (int i = 0; i < e; i++) {
        	
            int src = sc.nextInt();
            int dest = sc.nextInt();
            int weight = sc.nextInt();
            
            graph.addEdge(src, dest, weight);
        }

    
        graph.displayGraph();
    }
}
