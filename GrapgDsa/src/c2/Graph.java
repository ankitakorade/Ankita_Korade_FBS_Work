package c2;

import java.util.LinkedList;

public class Graph {
	
	
	int vertices;
	LinkedList<String>[]adjlist;
	
	
	Graph(int vertices) {

		this.vertices = vertices;
		adjlist=new LinkedList[vertices];
		
		
		
		for(int i=0;i<vertices;i++) {
			
			adjlist[i]=new LinkedList<>();
		}
		
	}
	public void addEdge(int src,String desti) {
		
		
		adjlist[src].add(desti);
	}




	int getVertices() {
		return vertices;
	}


	void setVertices(int vertices) {
		this.vertices = vertices;
	}


	LinkedList<String>[] getAdjlist() {
		return adjlist;
	}


	void setAdjlist(LinkedList<String>[] adjlist) {
		this.adjlist = adjlist;
	}
	
	public void display() {
	
	for(int i=0;i<vertices;i++) {
		
		System.out.println("Te vertices value is:"+i);
		
		
		for(String neighbour:adjlist[i]) {
			
			System.out.println("The string neighbour is:"+neighbour);
		}
	     System.out.println();
		
		
	}
	}

	


	
	
	public static void main(String[]args) {
		
		Graph graph=new Graph(5);
	
		
		graph.addEdge(0,"Ankita");
		graph.addEdge(1, "Sonali");
		graph.addEdge(2,"Rutuja");
		graph.addEdge(3,"Kishori");
		graph.addEdge(4,"Rutuja");
		
		graph.display();
		
	
}
}



