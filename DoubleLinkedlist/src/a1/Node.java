package a1;

public class Node {

	Node prev;
	int data;
	Node next;

	public Node(int ele) {

	}

	Node(Node prev, int data, Node next) {

		
		this.data = data;
		this.next = next;
	}

	Node getPrev() {
		return prev;
	}

	void setPrev(Node prev) {
		this.prev = prev;
	}

	int getData() {
		return data;
	}

	void setData(int data) {
		this.data = data;
	}

	Node getNext() {
		return next;
	}

	void setNext(Node next) {
		this.next = next;
	}

}
