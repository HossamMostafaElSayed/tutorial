package database1;

import java.util.HashMap;

public class patient {
private static String ID ;
private static String FirstName;
private static String LastName;
private static String Age;
private static String Gender;

    public static void setAge(String DateOfBirth) {
        patient.Age = DateOfBirth;
    }

    public static void setFirstName(String FirstName) {
        patient.FirstName = FirstName;
    }

    public static void setGender(String Gender) {
        patient.Gender = Gender;
    }

    public static void setID(String ID) {
        patient.ID = ID;
    }

    public static void setLastName(String LastName) {
        patient.LastName = LastName;
    }

    public static String getAge() {
        return Age;
    }

    public static String getFirstName() {
        return FirstName;
    }

    public static String getGender() {
        return Gender;
    }

    public static String getID() {
        return ID;
    }

    public static String getLastName() {
        return LastName;
    }


    
}
