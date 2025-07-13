package a1;

public class Node{
	
	int value;
	Node next;
	
	public Node() {
		// TODO Auto-generated constructor stub
		
	}
	public Node(int v1)
	{
		this.value=v1;
		
		
	}
	int getValue() {
		return value;
	}
	void setValue(int value) {
		this.value = value;
	}
	Node getNext() {
		return next;
	}
	void setNext(Node next) {
		this.next = next;
	}
	
}


