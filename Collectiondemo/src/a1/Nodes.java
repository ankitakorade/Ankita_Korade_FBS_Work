package a1;


import java.util.LinkedList;
import java.util.Queue;

// Node class
class Nodes {

    int data;
    Nodes left;
    Nodes right;

    public Nodes(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }

    int getData() {
        return data;
    }

    void setData(int data) {
        this.data = data;
    }

    Nodes getLeft() {
        return left;
    }

    void setLeft(Nodes left) {
        this.left = left;
    }

    Nodes getRight() {
        return right;
    }

    void setRight(Nodes right) {
        this.right = right;
    }
}

public class BinaryTree {

    Nodes root;

    public BinaryTree() {
        root = null;
    }

   
    public void insert(int data) {
        Nodes newNode = new Nodes(data);

        if (root == null) {
            root = newNode;
            return;
        }

        Queue<Nodes> queue = new LinkedList<>();
        queue.add(root);

        while (!queue.isEmpty()) {
            Nodes temp = queue.poll();

            if (temp.left == null) {
                temp.left = newNode;
                break;
            } else {
                queue.add(temp.left);
            }

            if (temp.right == null) {
                temp.right = newNode;
                break;
            } else {
                queue.add(temp.right);
            }
        }
    }

    
    public void inorder() {
        inorderTraversal(root);
    }

    private void inorderTraversal(Nodes node) {
        if (node != null) {
            inorderTraversal(node.left);
            System.out.print(node.data );
            inorderTraversal(node.right);
        }
    }
    
    
    public void preorder() {
    	
    	preorderTraversal(root);
    }
    private void preorderTraversal(Nodes node) {
    	
    	if(node!=null) {
    		
    		System.out.println(node.data);
    		preorderTraversal(node.left);
    		preorderTraversal(node.right);
    	}
    	
    }
    public void postorder() {
    	
    	postorderTraversal(root);
    }
    public void postorderTraversal(Nodes node) {
    	
    	if(node!=null) {
    		
    	postorderTraversal(node.left);
    	postorderTraversal(node.right);
    	System.out.println(node.data);
    	
    	}
    	
    	
    	
    }

  
    public static void main(String[] args) {
        BinaryTree b1 = new BinaryTree();

        b1.insert(10);
        b1.insert(20);
        b1.insert(30);
        b1.insert(40);
        b1.insert(50);

        System.out.print("Inorder Traversal: ");
        b1.inorder();
        b1.preorder();
        b1.postorder();
        
        
    }
}
