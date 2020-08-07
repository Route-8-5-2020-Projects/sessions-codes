public class Student {
    private String name;
    private int age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public boolean isOld()
    {
        if(age >= 18)
            return true;
        else
            return false;
    }

    public void printIamOld()
    {
        if(isOld())
            System.out.println("I am old");
//        else
//            throw new IllegalStateException();
    }
}
