public class Person {
    private String name;
    private String lastName;
    private Integer age;

    public Person(String name, String lastName, Integer age) {
        this.name = name;
        this.lastName = lastName;
        this.age = age;
    }

    void greet() {
        System.out.println("Hola, soy persona");
    }

    public String getName() {
        return name;
    }
}
