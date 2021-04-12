public class Engineer extends Person {
    //  Herencia
    //  es un
    private String languaje;
    private String company;

    public Engineer(String name, String lastName, Integer age, String languaje, String company) {
        super(name, lastName, age);
        this.languaje = languaje;
        this.company = company;
    }
    void printName() {
        System.out.println(super.getName());
    }
}
