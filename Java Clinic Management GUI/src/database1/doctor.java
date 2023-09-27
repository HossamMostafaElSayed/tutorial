package database1;
public class doctor 
{
private static String ID ;
private static String FirstName;
private static String LastName;
private static String Speciality;

    public static void setID(String ID) {
        doctor.ID = ID;
    }

    public static void setFirstName(String FirstName) {
        doctor.FirstName = FirstName;
    }

    public static void setLastName(String LastName) {
        doctor.LastName = LastName;
    }

    public static void setSpeciality(String Speciality) {
        doctor.Speciality = Speciality;
    }

    public static String getID() {
        return ID;
    }

    public static String getFirstName() {
        return FirstName;
    }

    public static String getLastName() {
        return LastName;
    }



    public static String getSpeciality() {
        return Speciality;
    }
}