import org.junit.*;

import static org.junit.Assert.*;

public class StudentTest {

    Student student;

    @BeforeClass
    public void startFunction()
    {
        
    }

    @Before
    public void setUp() throws Exception {
        student = new Student();
        student.setName("ahmed");
        student.setAge(15);
    }

    @After
    public void tearDown() throws Exception {

    }

    @Test
    public void getName()
    {
        student.setName("Muhammed");

        String result = student.getName();
        assertEquals("Muhammed", result);
    }

    @Test
    public void getAge() {
        student.setAge(18);

        int result = student.getAge();
        assertEquals(18, result);
    }

    @Test
    public void isOld() {

        student.setAge(18);

        boolean result = student.isOld();
        assertTrue(result);

    }
    @Test
    public void isOld2() {

        student.setAge(30);

        boolean result = student.isOld();
        assertTrue(result);

    }

    @Test
    public void isNotOld() {

        student.setAge(10);

        boolean result = student.isOld();
        assertFalse(result);
    }


    @Test
    public void printOld() {
        student.setAge(18);
        student.printIamOld();
    }

    @Ignore ("Exception not ready yet")
    @Test (expected = IllegalStateException.class)
    public void dontPrintOld() {
        student.setAge(10);
        student.printIamOld();
    }

}