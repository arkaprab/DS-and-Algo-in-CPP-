import java.util.ArrayList;
import java.util.Scanner;

class Student {
    private int id;
    private String name;
    private int age;
    private String grade;
    private int attendance;

    public Student(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.grade = "";
        this.attendance = 0;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getGrade() {
        return grade;
    }

    public int getAttendance() {
        return attendance;
    }

    public void setGrade(String grade) {
        this.grade = grade;
    }

    public void addAttendance(int days) {
        this.attendance += days;
    }

    @Override
    public String toString() {
        return "ID: " + id + ", Name: " + name + ", Age: " + age + ", Grade: " + grade + ", Attendance: " + attendance;
    }
}

class StudentManager {
    private ArrayList<Student> students;
    private int nextId;

    public StudentManager() {
        students = new ArrayList<>();
        nextId = 1;
    }

    public void addStudent(String name, int age) {
        Student student = new Student(nextId++, name, age);
        students.add(student);
        System.out.println("Student added: " + student);
    }

    public void recordGrade(int id, String grade) {
        for (Student student : students) {
            if (student.getId() == id) {
                student.setGrade(grade);
                System.out.println("Grade updated for student ID: " + id);
                return;
            }
        }
        System.out.println("Student not found with ID: " + id);
    }

    public void recordAttendance(int id, int days) 
    {
        for (Student student : students) {
            if (student.getId() == id) {
                student.addAttendance(days);
                System.out.println("Attendance updated for student ID: " + id);
                return;
            }
        }
        System.out.println("Student not found with ID: " + id);
    }

    public void displayStudent(int id) {
        for (Student student : students) {
            if (student.getId() == id) {
                System.out.println(student);
                return;
            }
        }
        System.out.println("Student not found with ID: " + id);
    }

    public void displayAllStudents() {
        if (students.isEmpty()) {
            System.out.println("No students found.");
        } else {
            for (Student student : students) {
                System.out.println(student);
            }
        }
    }
}

public class StudentManagementSystem {
    public static void main(String[] args) {
        StudentManager studentManager = new StudentManager();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("1. Add Student");
            System.out.println("2. Record Grade");
            System.out.println("3. Record Attendance");
            System.out.println("4. Display Student");
            System.out.println("5. Display All Students");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();  // Consume newline

            if (choice == 1) {
                System.out.print("Enter student name: ");
                String name = scanner.nextLine();
                System.out.print("Enter student age: ");
                int age = scanner.nextInt();
                studentManager.addStudent(name, age);
            } else if (choice == 2) {
                System.out.print("Enter student ID: ");
                int id = scanner.nextInt();
                scanner.nextLine();  // Consume newline
                System.out.print("Enter grade: ");
                String grade = scanner.nextLine();
                studentManager.recordGrade(id, grade);
            } else if (choice == 3) {
                System.out.print("Enter student ID: ");
                int id = scanner.nextInt();
                System.out.print("Enter attendance days: ");
                int days = scanner.nextInt();
                studentManager.recordAttendance(id, days);
            } else if (choice == 4) {
                System.out.print("Enter student ID: ");
                int id = scanner.nextInt();
                studentManager.displayStudent(id);
            } else if (choice == 5) {
                studentManager.displayAllStudents();
            } else if (choice == 6) {
                break;
            } else {
                System.out.println("Invalid choice. Try again.");
            }
        }

        scanner.close();
    }
}
