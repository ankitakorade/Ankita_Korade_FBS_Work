package a1;

public class DoublyLinkedlist {
	Node head;

	public void insertBeg(int ele) {

		Node temp = new Node(ele);
		if (this.head == null) {

			this.head = temp;

		} else {

			temp.next = head;
			head.prev = temp;
			this.head = temp;
		}
		System.out.println("-----Data Added!------");

	}

	public void displayAll() {

		if (head == null) {

			System.out.println("List is empty");
		} else {

			Node p = this.head;
			while (p.next != null) {

				System.out.print(p.data + "->");
				p = p.next;
			}
			System.out.println(p.data + "->");
		}

	}

	public void insertEnd(int ele) {
		Node temp = new Node(ele);
		if (this.head == null) {

			this.head = temp;
		} else {

			Node p = head;
			while (p.next != null) {

				p = p.next;

			}
			p.next = temp;
			temp.prev = p;

		}

	}

	public void deleteBeg(int ele) {

		if (head == null) {

			System.out.println("The element can'tdelete list is empty");
f
		} else {

			head = head.next;
			head.next.prev = head;
		}
		System.out.println("The element is deleted at beg " + ele);
	}

	public void deleteEnd(int ele) {

		Node temp = new Node(ele);
		if (head == null) {

			System.out.println("Cant delete node list is empty");
		} else {
			Node itr = head;

			while (itr.next != null) {

				itr = itr.next;
			}
			itr.prev.next = null;
			System.out.println("The last element in the list is deleted");

		}
	}
}
