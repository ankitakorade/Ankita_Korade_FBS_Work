package p1;
import java.sql.*;

public class MyClass {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/employee";
        String user = "root";
        String password = "MySQL@123";

        try {
            Connection con = DriverManager.getConnection(url, user, password);
            System.out.println("Connection successful!");
        } catch (Exception e) {
            e.printStackTrace(); // Will print the CommunicationsException
        }
    }
}
