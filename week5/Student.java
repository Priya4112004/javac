import java.util.*;
public class Student{
   private
    String fullName;
    int rollNum;
    double semPercentage;
    String collegeName;
    int collegeCode;
    public
     Student(){
        System.out.println("Created");
     }
    Student(String name,int num,double sem,String coll,int code) {
        fullName = name;
        rollNum = num;
        semPercentage = sem;
        collegeName= coll;
        collegeCode = code;
    }
    void displayPrivate(){
        System.out.println("STUDENT NAME: "+ fullName);
        System.out.println("STUDENT ROLL NO: "+ rollNum);
        System.out.println("STUDENT SEM PERCENTAGE: "+ semPercentage);
        System.out.println("COLLEGE NAME: "+ collegeName);
        System.out.println("COLLEGE CODE: " +collegeCode);
    }

public static void main(String[] args){
    Student s = new Student("LakshmiPriya",510,8.5,"MAHARAJ VIJAYARAM COLLEGE OF ENGINEERING",33);
    s.displayPrivate();
  }
}
