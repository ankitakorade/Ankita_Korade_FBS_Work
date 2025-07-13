package a1;

public class MainApp {

	Node head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Node n1 = new Node(23);
		Node n2 = new Node(12);
		Node n3 = new Node(22);
		MainApp app = new MainApp();
		app.insert(n1);
		app.insert(n2);
		app.insert(n3);

		app.iterate();

	}

	private void remove(int i) {
		// TODO Auto-generated method stub
		
		
		Node current=head;
		Node prev=current;
		
		while(prev!=null) {
			
			if(current.value==i) {
				
				current.next=current.next.next;
				
				
			}
			
			
		}
	}

	public void iterate() {

		Node current = head;
		while (current != null) {

			System.out.println("The value is:"+current.value);
			current = current.next;
		}
	}

	public void insert(Node v1) {

		if (head == null) {

			head = v1;
		} else {

			Node current = head;

			while (current.next != null) {

				current = current.next;
			}
			current.next = v1;
		}
	}
}
