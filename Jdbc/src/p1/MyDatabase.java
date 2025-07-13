package p1;
import java.sql.*;


public class MyDatabase {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/employee";
        String user = "root";
        String password = "MySQL@123";

        try {
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/employee", "root", "MySQL@123");
            System.out.println("Connection successful!");
        } catch (Exception e) {
            e.printStackTrace(); 
        }
    }
}
